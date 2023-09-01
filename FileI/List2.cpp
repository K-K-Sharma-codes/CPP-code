#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for(it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
}
int main(){
    list<int>list2(3);
    list<int> :: iterator it = list2.begin();

    *it = 45;
    it++;
    *it = 6;
    it++;
    *it = 9;
    it++;

    display(list2);
    return 0;
}