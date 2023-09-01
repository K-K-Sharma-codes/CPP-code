#include<iostream>
using namespace std;

int front=NULL;
int rear=NULL,i;

void insert(int queue[],int front,int rear,int item,int n)
{
    
    if((rear==n && front==1)||(front==rear+1)){
        cout<<"overflow\n";
        return ;
    
    }
    else if(front==-1){
        front=1;
        rear=1;
        
        cout<<rear<<endl;
    }
    else if(rear==n-1){
        rear=1;
        
        cout<<rear<<endl;;

    }
    else{
        rear++;
        cout<<rear<<endl;;
    }

    queue[rear]=item;
    cout<<queue[rear]<<endl;
    return rear;
}
int main(){
    /*int g[4][4]={{0,1,0,1},
                {1,0,1,0},
                {0,1,0,1},
                {1,0,1,0}};
    
    int x[4]={0,0,0,0};
    for(int i=0;i<4;i++){
        x[i]=1;
    }*/
    int n;
    cout<<"size of queue"<<endl;
    cin>>n;
    int item;
    
    int queue[n];
    //int rear=-1;
    //int front=-1;
    string s;
    cout<<"do you want to insert"<<endl;
   
    /*for(int i=1;i<=n;i++){
    cout<<"yes or no"<<endl;
    cin>>s;
    if(s=="yes"){*/
    cout<<"item to be inserted"<<endl;
    cin>>item;
    insert(queue,front,rear,item,n);
    
    //else{
      //  break;
    
    
    //rear=1;
    cout<<rear<<" "<<front<<endl;
    cout<<queue[rear]<<endl;
    cout<<"elemrnt in queue"<<endl;
    
    for(int i=front;i<=rear;i++){
        
    cout<<queue[i]<<" ";
   // rear++;
}
return 0;
}