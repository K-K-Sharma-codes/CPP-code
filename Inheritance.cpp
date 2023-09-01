#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};
int main()
{
    Employee jack(1), rohan(2);
    cout << jack.salary << endl;
    cout << rohan.salary << endl;

    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getData();
    return 0;
}