#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=n,sum=0;
    while(n)
    {
        int ld=n%10;
        sum+=(ld*ld*ld);
        n=n/10;
    }
    if (sum==temp)
    {
        cout<<"isarmstrong";
    }
    else
    {
        cout<<"notarmstrong";
    }
}