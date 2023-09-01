#include <iostream>
using namespace std;

int p[5];
int ch[5];

void signal(int z){
int j=(z+1)%5;
p[z]=0;
ch[z]=0;
ch[j]=0;
}

void wait(int y){
int r=(y+1)%5;

if((ch[y]==0) &&(ch[y+1]==0)){
p[y]=1;
ch[y]=1;
ch[r]=1;
}

else if(p[y]==1){
     int w;
     cout << "Do you want the philosopher " << y << " to stop eating? ";

     cin >> w;

if(w==1){
signal(y);
  }
}

else{
cout << "Chopstick " << y << " " << r << " are busy \n";

cout << "Philosopher " << y << " has to wait \n";
}
}

int main(){

int i,u;

for(i=0;i<5;i++){

p[i]=0;

ch[i]=0;

}

do{
   for(i=0;i<5;i++){
      if(p[i]==0){
         cout << "Philosopher " << i+1 << " is thinking \n\n";
       }
       else{
         cout << "Philosopher " << i+1 << " is eating \n\n";
        }
    }

int s;
cout << "Which philosopher wants to eat \n";
cin >> s;
s--;
wait(s);

cout << "Do you want to continue press 1\n";

cin >> u;
}while(u == 1);

return 0;
}