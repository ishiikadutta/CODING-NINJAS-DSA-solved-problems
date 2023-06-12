#include<iostream>
using namespace std;
 
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    int smalloutput=n*fact(n-1);
    return smalloutput;
    

}

int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;

}