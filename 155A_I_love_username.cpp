#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=a[0], min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            c++;
        }
        if(a[i]<min)
        {
            min=a[i];
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
