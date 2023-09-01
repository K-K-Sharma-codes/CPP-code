#include <iostream>
using namespace std;

int partition(int a[],int start,int end)
{
    int pivot =a[start];
    int count = 0;
    for(int i=start+1;i<=end;i++){
        if(a[i]<=pivot)
        count++;
    }
 int pivotindex = start+count;
 swap(a[pivotindex], a[start]);
 
 int i=start, j=end;
 
 while(i<pivotindex && j>pivotindex){
     while(a[i]<=pivot){
         i++;
     }
     while(a[j]>pivot){
         j--;
     }
     if(i<pivotindex && j>pivotindex){
         swap(a[i++], a[j--]);
     }
 }
 return pivotindex;
 
}
void quicksort(int a[],int start,int end){
    if(start>=end)
{
    
    int p=partition(a,start,end);
    
    quicksort(a,start,p-1);
    quicksort(a,p+1,end);
}
    
}
int main(){
    int a[]={4,2,5,7,2};
    int n=5;
    
    quicksort(a,0,n-1);
    for(int i=0;i<=n-1;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
