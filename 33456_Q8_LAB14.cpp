#include <iostream>
using namespace std;

struct student {
    string name;
    int roll;
    float cgpa;
};

int main() {
    int N;

    cout << "Enter number of students: ";
    cin >> N;

    student *s = new student[N];

    cout << "\n Enter student details\n";
    for (int i = 0; i < N; i++) {
        cout << "\nstudent " << i + 1 << ":\n";

        cout << "Enter name: ";
        cin >> s[i].name;

        cout << "Enter roll number: ";
        cin >> s[i].roll;

        cout << "Enter CGPA: ";
        cin >> s[i].cgpa;
    }

    cout << "\n Displaying student Information \n";
    for (int i = 0; i < N; i++) {
        cout << "\nstudent " << i + 1 << ":\n";
        cout << "Name: " << s[i].name << endl;
        cout << "Roll No: " << s[i].roll << endl;
        cout << "CGPA: " << s[i].cgpa << endl;
    }
 
    delete[] s;

    return 0;
}
