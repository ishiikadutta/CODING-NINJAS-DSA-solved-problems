/*Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.
Do this recursively.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x
Output Format :
'true' or 'false' */
#include<iostream>
using namespace std;
bool checkNumber(int a[], int n, int x) 
{
    if(n==0)
    {
        return false;
    }

    if(a[0]==x)
    {
        return true;
    }

    return checkNumber(a+1,n-1,x);
}

int main()
{
    int a[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    cout<<checkNumber(a,n,x);
   
}