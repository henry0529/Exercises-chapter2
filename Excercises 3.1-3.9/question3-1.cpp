#include<iostream>
#include<utility>
#include<cstdlib>
#include<ctime>
using namespace std;

struct Student {
    int studentGrade;
    int studentID;
};

int sortByGrade(const void *voidA, const void *voidB) { 
      int *intA = (int *)(voidA);
      int *intB = (int *)(voidB); 
    return *intA - *intB;
}

int sortByID(const void *voidA, const void *voidB) { 
    int *intA = (int *)(voidA);
    int *intB = (int *)(voidB); 
    return *intA - *intB;
}

int main() {
const int ARRAY_SIZE = 10;
Student students[] = {
       {87, 10001},
       {28, 10002},
       {100, 10003},
       {78, 10004},
       {84, 10005},
       {98, 10006},
       {75, 10007},
       {70, 10008},
       {81, 10009},
       {68, 10010}
}; 

qsort(students, ARRAY_SIZE, sizeof(Student), sortByGrade);
    cout << "Sorted by grade: \n";
    for(int i=0; i<ARRAY_SIZE; i++) {
        cout<< "Student grade: " << students[i].studentGrade<< ", Student ID: "<< students[i].studentID << endl;
    }

cout << " "<<endl;

qsort(students, ARRAY_SIZE, sizeof(Student), sortByID);
    cout << "Sorted by ID number: \n";
    for(int i=0; i<ARRAY_SIZE; i++) {
        cout<< "Student ID: "<<students[i].studentID <<", Grade: "<< students[i].studentGrade <<endl;
    }
        return 0;
}