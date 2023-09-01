#include<iostream>
#include<string.h>
using namespace std;
class student{
    string roll_number;
    int age;
    string name;
    float marks;
    public:
    student(int a, string n, string m, float p)
    {
        
        age = a;
        roll_number = n;
        name = m;
        marks = p;

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
    student s(19,"0905CS211086", "Krishna", 80.0);
    s.display();
    return 0;
}