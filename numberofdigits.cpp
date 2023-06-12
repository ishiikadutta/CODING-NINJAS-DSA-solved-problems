/*Print Numbers
Number of Digits
Given the code to find out and return the number of digits present in a number recursively. But it contains few bugs,
that you need to rectify such that all the test cases should pass.

Input Format :
Integer n
Output Format :

Count of digits */
#include<iostream>
using namespace std;

int digits(int n)
{
    if(n==0)
    {
        return 0;
    }
     n=n/10;
    int d=digits(n);
    
    return ++d;
}

int main()
{
    int n;
    cin>>n;
    cout<<digits(n)<<endl;
   
}
