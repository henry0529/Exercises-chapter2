#include <iostream>
#include <algorithm>

using namespace std;

class Student {
public:
    string name;
    int grade;
    
    Student(string n, int g) : name(n), grade(g) {}
    bool operator<(const Student& other) const {
        return grade < other.grade;
    }
};

void quartiles(Student students[], int size) {
    sort(students, students + size);
    
    int q1_value = size * 0.25;
    int q2_value = size * 0.5;
    int q3_value = size * 0.75;
    
    int q1 = students[q1_value].grade;
    int q2 = students[q2_value].grade;
    int q3 = students[q3_value].grade;
    
    cout << "Grade quartiles:\n";
    cout << "Q1 - 25%: " << q1 << "\n";
    cout << "Q2 - 50%: " << q2 << "\n";
    cout << "Q3 - 75%: " << q3 << "\n";
}

int main() {
   Student students[] = {
   };
    int size = sizeof(students) / sizeof(students[0]);
    quartiles(students, size);
    return 0;
}