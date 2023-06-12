/*Remove X
Given a string, compute recursively a new string where all 'x' chars have been removed.

Input format :
String S

Output format :
Modified String

Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string S. 

Sample Input 1 :
xaxb
Sample Output 1:
ab */
#include<iostream>
#include<string.h>
using namespace std;
void removeX(char input[]) 
{
    if(input[0]=='\0')
    {
        return;
    }

    removeX(input+1);

    if(input[0]=='x')
    {
        int length=strlen(input);
        for(int i=1;i<=length;i++)
        {
            input[i-1]=input[i];
        }
    }
    
}

int main()
{
    char input[1000];
    cin>>input;
    removeX(input);
    cout<<input;
}