#include<iostream>
using namespace std;

class Student {
    int rollno;
    string name;

public:
    Student(int rollno, string name) {
        this->rollno = rollno;
        this->name = name;
    }

    void getStudent() {
        cout << "Roll No is: " << rollno << endl;
        cout << "Name is: " << name << endl;
    }
};

int main() {
    Student std(1, "Drashti");
    std.getStudent();

    Student std1(2, "Maitry");
    std1.getStudent();

    Student std2(3, "Devanshi");
    std2.getStudent();

    Student std3(4, "Krishna");
    std3.getStudent();

    return 0;
}
