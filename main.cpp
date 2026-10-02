#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file(R"(C:\Users\swexi\CLionProjects\ConsoleDiary\file.txt)"); // ifstream - data type to work with files; file - name of variable

    if (file.is_open()) {
        cout << "File was successfully opened" << endl;

        char buffer[255];
        while (!file.eof()) { // ! - false check
            file.getline(buffer, sizeof(buffer));

            cout << buffer << endl;
        }

        file.close();
    }
    else {
        cout << "File wasn't opened" << endl;
    }

    return 0;
}