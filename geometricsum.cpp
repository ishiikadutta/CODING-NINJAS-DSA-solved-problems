/*Geometric Sum

Given k, find the geometric sum i.e.
1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
using recursion.

Input format :
Integer k

Output format :
Geometric sum (upto 5 decimal places) */

#include<iostream>
#include<math.h>
using namespace std;

double geometricSum(int k) 
{
   
  if(k==0)
    {
        return 1;
    }
    
    return geometricSum(k-1)+ 1/pow(2,k);
}

int main()
{
    int k;
    cin>>k;
    cout<<geometricSum(k);
}