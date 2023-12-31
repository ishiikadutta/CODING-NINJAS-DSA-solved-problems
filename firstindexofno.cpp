/*Given an array of length N and an integer x, you need to find and return the first index of integer x present in the array. Return -1 if it is not present in the array.
First index means, the index of first occurrence of x in the input array.
Do this recursively. Indexing in the array starts from 0.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x
Output Format :
first index or -1 */
#include<iostream>
using namespace std;

int firstIndex(int a[],int n,int x)
{
   if(n==0)
   {
       return -1;
   }

   if(a[0]==x)
   {
       return 0;
   } 

  int ans=firstIndex(a+1,n-1,x);
  if(ans==-1)
     return -1;
  
  else
    return ++ans;
     
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
    cout<<firstIndex(a,n,x);
   
}