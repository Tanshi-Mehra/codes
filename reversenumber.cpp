#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int revno=0;
    while(n)
    {
        int ld=n%10;
        n=n/10;
        revno=revno*10+ld;
    }
    cout<<revno;

}