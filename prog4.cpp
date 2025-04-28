#include<iostream>
using namespace std;

class Student{
    int rollno;
    string name;

public:
    Student(int rollno,string name)
    {
        this->rollno = rollno;
        this->name = name;
    }

    void getStudent()
    {
        cout<<"Roll No is: "<<rollno<<endl;
        cout<<"Name is: "<<name<<endl;
    }
    
};

int main(){

    Student std(1,"Dhruv");
    std.getStudent();

    Student std2(2,"Vandan");
    std2.getStudent();

    Student std3(3,"Priya");
    std3.getStudent();

    Student std4(4,"Yatri");
    std4.getStudent();

    return 0;
}