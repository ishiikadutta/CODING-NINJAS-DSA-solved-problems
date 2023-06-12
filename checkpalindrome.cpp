/*Check Palindrome (recursive)

Check whether a given String S is a palindrome using recursion. Return true or false.

Input Format :
String S

Output Format :
'true' or 'false'*/

#include<iostream>
#include<string.h>
using namespace std;
bool helper(char input[],int start,int end,int length)
{
    bool flag;
    if(length==1)
    {
            return true;
    }

     if(input[start]!=input[end])
    {
            return false;
    }

    flag=helper(input,start+1,end-1,length-2);
    return flag;

}
bool checkPalindrome(char input[]) 
{
    int length;
    length=strlen(input);
    int start=0;
    int end=length-1;
    return helper(input,start,end,length);
}
int main()
{
    char input[1000];
    cin>>input;
    cout<<checkPalindrome(input);
}