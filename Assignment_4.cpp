#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("color.txt");

    if (!outFile) {
        cout << "Error: Could not create color.txt" << endl;
        return 1;
    }

    outFile << "Red" << endl;
    outFile << "Blue" << endl;
    outFile << "Green" << endl;
    outFile << "Yellow" << endl;
    outFile << "Purple" << endl;

    outFile.close();

    ifstream inFile("color.txt");

    if (!inFile) {
        cout << "Error: Could not open color.txt for reading" << endl;
        return 1;
    }

    ofstream copyFile("color_copy.txt");

    if (!copyFile) {
        cout << "Error: Could not create color_copy.txt" << endl;
        inFile.close();
        return 1;
    }

    string line;

    while (getline(inFile, line)) {
        copyFile << line << endl;
    }

    inFile.close();
    copyFile.close();

    cout << "color_copy.txt successfully copied color.txt" << endl;

    return 0;
}
