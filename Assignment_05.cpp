#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ofstream outFile("original.txt");

    if (!outFile) {
        cout << "Error: Could not create original.txt" << endl;
        return 1;
    }

    outFile << "One" << endl;
    outFile << "Two" << endl;
    outFile << "Three" << endl;
    outFile << "Four" << endl;
    outFile << "Five" << endl;
    outFile << "Six" << endl;

    outFile.close();

    ifstream inFile("original.txt");

    if (!inFile) {
        cout << "Error: Could not open original.txt" << endl;
        return 1;
    }

    vector<string> words;
    string line;

    while (getline(inFile, line)) {
        words.push_back(line);
    }

    inFile.close();

    sort(words.begin(), words.end());

    ofstream sortedFile("sorted.txt");

    if (!sortedFile) {
        cout << "Error: Could not create sorted.txt" << endl;
        return 1;
    }

    for (const string& word : words) {
        sortedFile << word << endl;
    }

    sortedFile.close();

    cout << "File created successfully, and it has been sorted alphabetically" << endl;

    return 0;
}
