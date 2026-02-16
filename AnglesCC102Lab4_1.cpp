#include <iostream>
using namespace std;

int main (){
    char cho;

    do{
        double studs, quizs;

        cout << "Enter the number of students: ";
        cin >> studs;

        cout << endl << "Enter the number of quizzes: ";
        cin >> quizs;

        double scores[50][50], avera[50];

        for (int i = 0; i < studs; i++){
            cout << endl << "Student " << i + 1 << " Scores: " << endl;
            double sum = 0;

                for (int j = 0; j < quizs; j++){
                    cout << "Quiz " << j + 1 << ": ";
                    cin >> scores[i][j];
                    sum += scores[i][j];
                }

            avera[i] = sum/quizs;
        }

        cout << endl << "Student  ";
        for (int j = 0; j < quizs; j++){
            cout << "Q" << j + 1 << "   ";
        }

        cout << " Average: ";
        cout << endl << "--------------------------------------------------" << endl;
        for (int i = 0; i < studs; i++){
            cout << endl << i + 1 << "        ";

            for (int j = 0; j < quizs; j++){
                cout << scores[i][j] << "    ";
            }
            cout << avera[i] << endl;
        }

        cout << "Would u like to repeat? (y/n): ";
        cin >> cho;
    }while (cho == 'y' || cho == 'Y');

    return 0;
}


