#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}
void insertion(int arr[],int n,int item){
    //cout<<"enter item to be iserted"<<endl;
    //int item;
    
   // cin>>item;
        
         int ptr=n;
        while(ptr>=1){
            int PAR=ptr/2;
            if(item<=arr[PAR]){
                arr[ptr]=item;
                return;
            }
            else{
            arr[ptr]=arr[PAR];
            ptr=PAR;
        }
        }
        arr[0]=item;
        return;
}
void deletion(int arr[],int n,int item){
    

       int ptr,last,left,right;
       item=arr[0];
       last= arr[n-1];
       n=n-1;
       ptr=0,left=1,right=2;
       while(right<=n-1){
        if(last>=arr[left] && last>=arr[right])
        {
        arr[ptr]=last;
        return;
       }
        if(arr[right]<=arr[left]){
        arr[ptr]=arr[left];
        ptr=left;
       }
       else{
        arr[ptr]=arr[right];
        ptr=right;
       }

left=2*ptr+1;
right=left+1;
}
if(left==n && last<arr[left]){
    arr[ptr]=arr[left];
    ptr=left;
    arr[ptr]=last;
}
return;
}
void heapsort(int a[],int n){
    for(int j=0;j<n;j++){
        insertion(a,j,a[j+1]);
    }
    int item;
    while(n>=1){
        deletion(a,n,a[n]);
        a[n+1]=item;
    }

}

int main(){

    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array"<<endl;
    for(int i=2;i<=n;i++){
        cin>>arr[i];
    }
    cout<<"Elements are"<<endl;
    print(arr,n);
    cout<<endl;
    //int item;
    //ut<<"enter item"<<endl;
    //cin>>item;
    //insertion(arr,n);
    //cout<<"new array is"<<endl;
    //print(arr,n+1);
    heapsort(arr,n);
    cout<<endl<<"sorted array is:"<<endl;
    print(arr,n);
    return 0;
}


