#include<iostream>

using namespace std;
int main()
{
    int num,rem,temp,dec= 0,b= 1;
    cout<<"Enter the binary number:"<<endl;
    cin>>num;
    temp=num;
    while(temp>0)
    {
        rem=temp%10;
        dec=dec+rem*b;
        b*=2;
        temp/=10;


    }
    cout<<"The decimal equivalent of"<<num<<"is"<<dec;
    return 0;
}

