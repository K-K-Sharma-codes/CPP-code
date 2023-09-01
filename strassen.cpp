#include<iostream>
using namespace std;

int a[4][4];
int b[4][4];
void inp(int x[4][4]){
 for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            cin>>x[i][j];
            
        }
}
}
int find11(int x[4][4]){
    return(x[1][1]*x[2][2]+(x[1][2]*x[2][1]));
}
int find21(int x[4][4]){
    return(x[3][1]*x[4][2]+(x[3][2]*x[4][1]));
}
int find12(int x[4][4]){
    return(x[1][3]*x[2][4]+(x[1][4]*x[2][3]));
}
int find22(int x[4][4]){
    return(x[3][3]*x[4][4]+(x[3][4]*x[4][3]));
}
int main(){
     int a11,a12,a21,a22,b11,b12,b21,b22,a[4][4],b[4][4];
     int p,q,r,s,t,u,v,c11,c12,c21,c22;
    
    cout<<"a:"<<endl;
     inp(a);
    cout<<"b:"<<endl;
    inp(b);
a11 = find11(a);
a12 = find12(a);
a21 = find21(a);
a22 = find22(a);
b11 = find11(b);
b12 = find12(b);
b21 = find21(b);
b22 = find22(b);
p=(a11+a12)*(b11+b22);
q=(a21+a22)*b11;
r=a11*(b12-b22);
s=a22*(b21-b11);
t=(a11+a12)*b22;
u=(a11-a21)*(b11+b12);
v=(a12-a22)*(b21+b22);
cout<<"Final Matrix"<<endl;
cout<<p+s-t+v<<endl;
cout<<r+t<<endl;
cout<<q+s<<endl;
cout<<p+r-q+u<<endl;
return 0;
}