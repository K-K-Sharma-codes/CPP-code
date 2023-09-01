#include<iostream>
#include<fstream>

using namespace std;
int main(){
    ofstream jout("sample.txt");

    string name;
    cout<<"Enter your name:";
    cin>>name;
    jout<<name+"is my name";
    jout.close();


    ifstream jin("sample.txt");
    string content;
    jin>>content;
    cout<<"The content of the file is:"<<content;
    jin.close();
    return 0;
}