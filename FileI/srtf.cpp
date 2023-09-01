#include<iostream>

using namespace std;
int main()
{
    int a[10],b[10],x[10];
    int wt[10],tat[10],ct[10];
    int i,j,smallest,count=0,time,n;
    double avg=0,tt=0,end;

    cout<<"\nEnter the number of Processes: ";  
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"\nEnter arrival time of process: ";  
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        cout<<"\nEnter burst time of process: ";  
        cin>>b[i];
    }
    for(i=0; i<n; i++)
        x[i]=b[i];

    b[9]=101;
    for(time=0; count!=n; time++)
    {
        smallest=9;
        for(i=0; i<n; i++)
        {
            if(a[i]<=time && b[i]<b[smallest] && b[i]>0 )
                smallest=i;
        }
        b[smallest]--;

        if(b[smallest]==0)
        {
            count++;
            end=time+1;
            ct[smallest] = end;
            wt[smallest] = end - a[smallest] - x[smallest];
            tat[smallest] = end - a[smallest];
        }
    }
    cout<<"P"<<"\t"<< "bt"<<"\t"<<"at" <<"\t"<<"wt" <<"\t"<<"tat"<< "\t"<<"ct"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<"p"<<i+1<<"\t"<<x[i]<<"\t"<<a[i]<<"\t"<<wt[i]<<"\t"<<tat[i]<<"\t"<<ct[i]<<endl;
        avg = avg + wt[i];
        tt = tt + tat[i];
    }
    cout<<"\n\nAverage waiting time ="<<avg/n;
    cout<<endl;
    cout<<"Average Turnaround time ="<<tt/n<<endl;
    return 0;
}