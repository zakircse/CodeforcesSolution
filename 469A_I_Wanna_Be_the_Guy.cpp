#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q;
    cin>>n>>p;
    int index=0, arr[1000];
    for(int i=0;i<p;i++)
    {
        cin>>arr[i];
    }
    cin>>q;
    for(int i=p;i<p+q;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+(p+q));
    for(int i=0;i<p+q;i++)
    {
        if(arr[i]!=arr[i+1])
            index++;
    }

    if(index!=n)
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
    else
    {
        cout<<"I become the guy."<<endl;
    }
}
