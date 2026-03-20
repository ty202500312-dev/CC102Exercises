#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct student{
    string studentID;
    string name;
    string course;
    double gpa;

    string acaStand(){
        if (gpa >= 90) return "Excellent";
        else if (gpa >= 80) return "Very Good";
        else if (gpa >= 70) return "Good";
        else if (gpa >= 60) return "Passing";
        else return "Failed";
    }
};

bool sameID(vector <student> &studs, string id, int currentID){
    for (int i = 0; i < currentID; i++){
        if(studs[i].studentID == id){
            return true;
        }
    }
    return false;
}

void studentInfo(vector<student> &studs, int num){
    cin.ignore();

    for (int i = 0; i < num; i++){
        cout << endl << "Student " << i + 1 << endl;

            do{
                cout << "Enter Student ID: ";
                getline(cin, studs[i].studentID);

                if(sameID(studs, studs[i].studentID, i)){
                    cout << "The ID has already been inputed, try another! " << endl;
                } else {
                    break;
                }
            }while(true);

            cout << "Enter name: ";
            getline(cin, studs[i].name);
            cout << "Enter course: ";
            getline(cin, studs[i].course);
            cout << "Enter gpa: ";
            cin >> studs[i].gpa;
            cin.ignore();
    }
}

void displayInfo(vector<student> &studs, int num){
    cout << endl << left << setw(15) << "Student ID" << setw(20) << "Name" << setw(15) << "Course" << setw(10) << "GPA" << setw(20) << "Standing" << endl;

        cout << "--------------------------------------------------------------------------" << endl;
        for (int i = 0; i < num; i++){
            cout << left << setw(15) << studs[i].studentID << setw(20) << studs[i].name << setw(15) << studs[i].course << setw(10) << studs[i].gpa
                 << setw(20) << studs[i].acaStand() << endl;
        }
}

int main(){
    int num;
    char cho;

    do{
        cout << "Enter the number of Students: ";
        cin >> num;

        vector<student> studs(num);

        studentInfo(studs, num);
        displayInfo(studs, num);

        cout << endl << "Repeat (Y/N): ";
        cin >> cho;
    }while(tolower(cho) == 'y');

    return 0;
}
