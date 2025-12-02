#include <iostream>
using namespace std;

struct course{
    string name;
    float GPA;
};

struct address{
    string street;
    string city;
    string state;
    int zip;
};

struct student {
    float CGPA;
    course course[3];  
    address addr;
};

int main() {
    student s1, s2;

    cout << "Enter data for student 1 \n";
    cout << "Enter CGPA: ";
    cin >> s1.CGPA;

    for(int i = 0; i < 3; i++){
        cout << "Enter course " << i+1 << " name: ";
        cin >> s1.course[i].name;
        cout << "Enter GPA for " << s1.course[i].name << ": ";
        cin >> s1.course[i].GPA;
    }

    cout << "Enter address : ";
    cin >> s1.addr.street >> s1.addr.city >> s1.addr.state >> s1.addr.zip;



    cout << "\n Enter data for student 2 \n";
    cout << "Enter CGPA: ";
    cin >> s2.CGPA;

    for(int i = 0; i < 3; i++){
        cout << "Enter course " << i+1 << " name: ";
        cin >> s2.course[i].name;
        cout << "Enter GPA for " << s2.course[i].name << ": ";
        cin >> s2.course[i].GPA;
    }

    cout << "Enter address : ";
    cin >> s2.addr.street >> s2.addr.city >> s2.addr.state >> s2.addr.zip;


    cout << "\n Comparison of course GPAs \n";
    for (int i = 0; i < 3; i++) {
        cout << "course: " << s1.course[i].name << " -> ";
        if(s1.course[i].GPA > s2.course[i].GPA)
            cout << "student 1 has higher GPA (" << s1.course[i].GPA << ")\n";
        else if(s1.course[i].GPA < s2.course[i].GPA)
            cout << "student 2 has higher GPA (" << s2.course[i].GPA << ")\n";
        else
            cout << "Both students have equal GPA (" << s1.course[i].GPA << ")\n";
    }


    cout << "\n.Overall CGPA Comparison \n";
    if (s1.CGPA > s2.CGPA)
        cout << "student 1 has higher overall CGPA (" << s1.CGPA << ")\n";
    else if (s1.CGPA < s2.CGPA)
        cout << "student 2 has higher overall CGPA (" << s2.CGPA << ")\n";
    else
        cout << "Both students have equal CGPA (" << s1.CGPA << ")\n";

    return 0;
}
