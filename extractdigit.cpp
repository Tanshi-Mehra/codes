#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    while(n)
    {
        int ld=n%10;
        cout<<ld<<",";
        n=n/10;
    }
}