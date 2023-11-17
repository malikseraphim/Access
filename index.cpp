#include <iostream>
using namespace std;

int main() {

    //Задание 1: Создаем символьный массив размером 5
    char symbols1[] = {'H', 'e', 'l', 'l','o'};


    // Выводим элементы массива на экран
    cout << "Символьный массив: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << symbols1[i];
    }
    cout << endl;

    //Задание 2
    const int size = 5; // Размер массива
    char symbols2[size]; // Создаем символьный массив размером 5

    // Вводим данные в массив с помощью цикла и оператора cin >>
    cout << "Введите " << size << " символов: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> symbols2[i];
    }

    //Задание 3: Выводим элементы массива на экран
    cout << "Символьный массив: ";
    for (int i = 0; i < size; ++i) {
        cout << symbols2[i];
    }
    cout << endl;

    // Задание 4 - 6
    char* ptr = symbols1;

    // Вывод адреса массива и адреса указателя
    cout << "Адрес массива symbols: " << static_cast<void*>(symbols1) << endl;
    cout << "Адрес указателя ptr: " << static_cast<void*>(ptr) << endl;

    // Вывод содержимого массива через указатель
    for (int i = 0; i < 5; ++i) {
        cout << *(ptr + i) << " "; //
    }
    cout << endl;

    // Задание 7
    int* dynamicArray = new int[size];


    for (int i = 0; i < size; ++i) {
        dynamicArray[i] = i + 1;
    }

    int* ptr2 = dynamicArray;

    cout << "Адрес массива numbers: " << dynamicArray << endl;
    cout << "Адрес указателя ptr: " << ptr2 << endl;

    // Вывод содержимого массива через указатель
    cout << "Содержимое массива через указатель: ";
    for (int i = 0; i < 5; ++i) {
        cout << *(ptr2 + i) << " ";
    }
    cout << endl;


    //Задание 8
    delete[] dynamicArray;

    int rows = 3, cols = 3;

    // Создаем массив указателей для строк
    int** dynamicArray2 = new int*[rows];

    // Создаем динамические массивы для каждой строки
    for (int i = 0; i < rows; ++i) {
        dynamicArray2[i] = new int[cols];
    }

    int counter = 1;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            dynamicArray2[i][j] = counter++;
        }
    }

    //Вывод двухмерного массива
    cout << "Двумерный динамический массив:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << dynamicArray2[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; ++i) {
        delete[] dynamicArray2[i]; // Освобождаем память для каждой строки
    }
    delete[] dynamicArray2; // Освобождаем массив указателей


    return 0;
}


