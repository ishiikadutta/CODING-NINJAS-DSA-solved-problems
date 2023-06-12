/*Sum of digits (recursive)
Write a recursive function that returns the sum of the digits of a given integer.

Input format :
Integer N

Output format :
Sum of digits of N */

#include<iostream>
using namespace std;

int sumOfDigits(int n)
{
    if(n==0)
    {
        return 0;
    }
   
  return n%10 + sumOfDigits(n/10);
}

int main()
{
    int n;
    cin>>n;
    cout<<sumOfDigits(n);
}