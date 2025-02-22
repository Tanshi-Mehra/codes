#include<iostream>
using namespace std;
int main()
{
    int n; 
    cin>>n;
    int temp=n;
    int rev=0;
    while(n)
    {
        int ld=n%10;
         n=n/10;
         rev=rev*10+ld;
    }
    if(rev==temp)
    {
        cout<<"ispalindrome";
    }
    else{
        cout<<"not palindrome";
    }
}