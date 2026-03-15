#include <iostream>
#include <vector>
using namespace std;

void anaGrades(int *grades, int studs, int subs);

int main(){
    int studs, subs;

    cout << "Enter how many students: ";
    cin >> studs;
    cout << "Enter how many subjects: ";
    cin >> subs;

    int grades[studs][subs];

    cout << endl << "Input the Grades " << endl;

    for (int i = 0; i < studs; i++){
            cout << endl << "Student " << i + 1 << endl;
        for (int j = 0; j < subs; j++){
            cout << "Grade " << j + 1 << ": ";
            cin >> grades[i][j];
        }
    }

    anaGrades(&grades[0][0], studs, subs);

    return 0;
}

void anaGrades(int *grades, int studs, int subs){

    cout << endl << "Grade Matrix" << endl;
    cout << "\t\t";

    for (int j = 0; j < subs; j++){
        cout << "Sub" << j+1 << "\t";
    }

    cout << endl << "------------";

    for (int j = 0; j < subs; j++){
        cout << "---------";
    }

    for (int i = 0; i < studs; i++){
        cout << endl;
        cout << "Student " << i + 1 << "   | ";
        for (int j = 0; j < subs; j++){
            cout << "\t" << *(grades + i * subs + j) << "   |";
        }
    }

    cout << endl;
    cout << endl << "Average of each Students" << endl;

    for (int i = 0; i < studs; i++){
        double tot = 0;
        double ave = 0;
        for (int j = 0; j < subs; j++){
            tot += *(grades + i * subs + j);
        }
        ave = tot / subs;
        cout << "Student " << i + 1 << " Average: " << ave << endl;
    }

    cout << endl << "The Highest Grade" << endl;

    double high;
    for (int i = 0; i < studs; i++){
        for (int j = 0; j < subs; j++){
            if(*(grades + i * subs + j) > high){
                high = *(grades + i * subs + j);
            }
        }
    }

    cout << "The Highest grade is: " << high << endl;
}
