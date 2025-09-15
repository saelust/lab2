#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr)); 

    for (int fileNum = 1; fileNum <= 3; fileNum++) {
        string fileName = "file" + to_string(fileNum) + ".txt";
        ofstream outFile(fileName);

        if (!outFile) {
            cerr << "Ошибка при создании файла: " << fileName << endl;
            return 1;
        }

        
        for (int i = 0; i < 10; i++) {
            int randomNum = rand() % 100; 
            outFile << randomNum << " ";
        }

        outFile.close();
        cout << "Файл " << fileName << " создан." << endl;
    }

    return 0;
}