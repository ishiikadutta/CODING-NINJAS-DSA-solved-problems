/*Remove Duplicates Recursively

Given a string S, remove consecutive duplicates from it recursively.
Input Format :
String S
Output Format :
Output string */

#include<iostream>
using namespace std;

void removeConsecutiveDuplicates(char input[]) 
{
    if(input[0]=='\0')
    {
        return;   
    }

    if(input[0]==input[1])
    {
        int i=1;
        for(;input[i]!='\0';i++)
        {
            input[i]=input[i+1];
        }
        removeConsecutiveDuplicates(input);
    }

    else{
        removeConsecutiveDuplicates(input+1);
    }
}

int main()
{
    char input[100];
    cin>>input;
    removeConsecutiveDuplicates(input);
    cout<<input;

}