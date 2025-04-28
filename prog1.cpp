#include<iostream>
using namespace std;

class Student
{
    int rollNo = 10;
    string name = "Drashti";

public:
    void getStudent()
    {
        cout<<"Roll no is: "<<this -> rollNo; 
        cout<<"Name is: "<<this -> name; 
    }
};

int main(){

    Student std;
    
    Student getStudent();

    return 0;
}