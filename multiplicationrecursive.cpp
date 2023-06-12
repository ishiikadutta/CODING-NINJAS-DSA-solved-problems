/*Given two integers M & N, calculate and return their multiplication using recursion. You can only use subtraction
 and addition for your calculation. No other operators are allowed.

Input format :
Line 1 : Integer M
Line 2 : Integer N

Output format :
M x N   */

#include<iostream>
using namespace std;

int multiplyNumbers(int m, int n) 
{
    if(n==0)
    {
        return 0;
    }
    
    return m+multiplyNumbers(m,n-1);

}

int main()
{
    int m,n;
    cin>>m>>n;
    cout<<multiplyNumbers(m,n);
}