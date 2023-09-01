#include<iostream>
using namespace std;
int main(){
    float p[3],w[3],r[3];
    int n,m;
    int i,j;
    float tp=0.0;
    float x[3]={0,0,0};
    cout<<"Enter bag capacity:"<<endl;
    cin>>m;
    cout<<"Enter no. of object:"<<endl;
    cin>>n;
    cout<<"Enter profit and weight"<<endl;
    for(i=0;i<3;i++)
    {
        cout<<"p["<<i+1<<"]:"<<endl;
        cout<<"Profit:"<<endl;
        cin>>p[i];
        cout<<"Weight:"<<endl;
        cin>>w[i];
    }
    for(i=0;i<n;i++)
    {
        r[i]=p[i]/w[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;i<n;i++)
        {
            if(r[i]<=r[j])
            {
                int temp=r[i];
                r[i]=r[j];
                r[j]=temp;
                temp=w[i];
                w[i]=w[j];
                w[j]=temp;
            }
        }
    }
    tp=0.0;
    int u=m;
    for(i=0;i<n;i++)
    {
        if(w[i]>=u)
        {
            break;
        }
        else{
            x[i]=1.0;
            tp=tp+p[i];
            u=u-w[i];
        }
    }
    if(i<n)
    {
        x[i]=u/w[i];
        tp=tp+(p[i]*x[i]);
    }
    cout<<"The total price is:"<<tp<<endl;
    cout<<"Solution set is:{";
    for(i=0;i<n;i++)
    {
        cout<<x[i]<<",";
    }
    cout<<"}"<<endl;
    return 0;
}