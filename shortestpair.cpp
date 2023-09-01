#include <iostream>
#include<algorithm>
#define V 3
#define I 32767
using namespace std;
int main(){
    
    int cost[V][V]={
        {0,4,11},
        {6,0,2},
        {3,I,0}};
        
       // int n=sizeof (cost[0])/sizeof ((cost[0][0])-1);
       
        int A[V][V];
        Apath(cost,A);
        
        return 0;
        }
        void Apath(int cost[V][V],int A[V][V])
        {
            int i,j,k;
        
        for(i=1;i<V;i++)
        {
            for(j=1;j<V;j++)
            {
                A[i][j]=cost[i][j];
            }
        }
                for(k=1;k<V;k++)
                {
                  for(i=1;i<V;i++){
                      for(j=1;j<V;j++){
                          A[i][j]=*min_element(A[i][j],(A[i][k]+A[k][j]));
                      }
                  }  
                
            
        }
}


