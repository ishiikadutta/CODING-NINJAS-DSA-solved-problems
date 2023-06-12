/*Sum of Array
Given an array of length N, you need to find and return the sum of all elements of the array.
Do this recursively.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Output Format :
Sum */
#include<iostream>
using namespace std;

int sum(int a[],int n)
{
   if(n==0)
   {
       return 0;
   } 

   return a[0]+sum(a+1,n-1);
     
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
    cout<<sum(a,n);
   
}
