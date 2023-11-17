#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    ofstream file("test1.txt", ios_base::out);

    if (file.is_open()) {
        cout << "File is created";
        file << "Hello world";
        file.close();
    }

    return 0;
}