#include<iostream>
#include<string.h>
using namespace std;
class student{
    char roll_number[30];
    int age;
    char name[50];
    float marks;
    public:
    student()
    {
       strcpy(roll_number,"0905CS211086");
        age = 19;
        strcpy(name,"Krishna");
        marks = 80.0;
}
    void display()
    {
        cout<<"Roll_number:"<<roll_number<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Marks:"<<marks<<endl;
    }

};
int main()
{
    student s;
    s.display();
}