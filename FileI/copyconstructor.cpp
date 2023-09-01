#include<iostream>
#include<string.h>
using namespace std;
class student{
    char roll_number[20];
    int age;
    char name[20];
    float marks;
    public:
    student(char r[], int a, char n[], float m)
    {
        
        age = a;
        strcpy(roll_number,r);
        strcpy(name,n);
        marks = m;

}
    student(student & s)
    {
        strcpy(roll_number, s.roll_number);
        age = s.age;
        strcpy(name, s.name);
        marks = s.marks;

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
    student s1("0905CS211086", 19, "Krishna", 80.0);
    student s2(s1);
    cout<<"Values in object s1"<<endl;
    
    s1.display();
    cout<<"Values in object s2"<<endl;
    s2.display();
    return 0;
}

  