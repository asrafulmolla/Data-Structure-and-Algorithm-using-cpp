#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        int minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[minindex]>a[j])
            {
                minindex=j;
            }
        }
        swap(a[minindex],a[i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
}