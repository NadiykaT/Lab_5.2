// 12. ϳ��������� ������� �䒺���� �������� � ������ ����������� �����.//

#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int rows, cols;
    int** array;

    cout << "������ ����� ����������� ����������� ������: ";
    cin >> rows;
    cols = rows;


    srand(time(0));
    array = new int* [rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = rand() % 61 - 30;
        }
    }

    cout << "�����:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    int k = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (array[i][j] < 0) 
            {
                k += 1;
            }
        }
    }
    cout << "\nʳ������ ��'����� ��������: " << k << endl;

    delete[] array;

    return 0;

}