#include<bits/stdc++.h>
using namespace std;
void print_name(int n,string name)
{
    if(n<1)
    {
        return;
    }
    else{
        cout<<name;
        print_name(n-1,name);
    }
}
int main()
{
    int n;
    cin>>n;
    string name;
    cin>>name;
    print_name(n,name);
}