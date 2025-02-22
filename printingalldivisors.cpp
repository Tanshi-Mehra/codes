#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    list<int>ls;
    //printing all the divisors in the sorted order with time coplexity of sqrt of n
    for(int i=1;i*i<=(n);i++)
    {
        if(n%i==0)
        {
            ls.push_back(i);
        }
        if(n/i!=i)
        {
            ls.push_back(n/i);
        }
    } 
        for(auto it:ls)
    {
        cout<<it<<" ";
    }


}