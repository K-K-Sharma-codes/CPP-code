#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string, int> marksMap;

    marksMap["Jack"] = 98;
    marksMap["Rohit"] = 80;
    marksMap["Aditya"] = 75;
    marksMap["Pranjal"] = 92;
    marksMap["Ram"] = 70;

    map<string, int> :: iterator iter;
    for(iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout<<(*iter).first<< " "<<(*iter).second<<"\n";
        return 0;
    }
}