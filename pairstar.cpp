/*Pair Star

Given a string S, compute recursively a new string where identical chars that are adjacent in the original string 
are separated from each other by a "*".

Input format :
String S

Output format :
Modified string

Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.

Sample Input 1 :
hello
Sample Output 1:
hel*lo */
#include<iostream>
#include<string.h>
using namespace std;

void pairStar(char input[]) 
{
    if(input[1]=='\0')
    {
        return;
    }

    pairStar(input+1);
    if(input[0]==input[1])
    {
        int length=strlen(input);
        for(int i=length;i>=0;i--)
        {
            input[i+1]=input[i];
        }
        input[1]='*';
    }

}
int main()
{
    char input[1000];
    cin>>input;
    pairStar(input);
    cout<<input;
}