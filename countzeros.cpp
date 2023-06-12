/*Given an integer N, count and return the number of zeros that are present in the given integer using recursion.
Input Format :
Integer N
Output Format :
Number of zeros in N */

#include<iostream>
using namespace std;

int countZeros(int n) 
{
    if(n==0)
    {
        return 0;
    }
    
    int count=countZeros(n/10); 

    if (n%10==0)
    {
        return ++count;
    }
    
    return count;
    
}

int main()
{
    int n;
    cin>>n;
    cout<<countZeros(n);
}