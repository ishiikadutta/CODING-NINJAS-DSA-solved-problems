/*Return all codes - String

Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. You are given a numeric string S. Write a program to 
return the list of all possible codes that can be generated from the given string.
Note : The order of codes are not important. And input string does not contain 0s.
Input format :
A numeric string
Constraints :
1 <= Length of String S <= 10
Sample Input:
1123
Sample Output:
aabc
kbc
alc
aaw
kw */
#include <string.h>
#include<iostream>
using namespace std;

int getCodes(string input, string output[1000]) {

    if(input[0]=='\0')
    {
        output[0]="";
        return 1;
    }
    string output1[1000],output2[1000];
    int size=getCodes(input.substr(1),output1),size1=0;
    int i=input[0]-'0';
    char a='a'+i-1,b='\0';
    if(input[1]!='\0')
    {
        int k=i*10+input[1]-'0';     
        if(k>=10 && k<=26)
        {
            b='a'+k-1;
            size1=getCodes(input.substr(2),output2);
        }
    }

    for(int i=0;i<size;i++)
    {
        output[i]=a+output1[i];
    }

    for(int i=0;i<size1;i++)
    {
        output[i+size]=b+output2[i];
    }
    return (size+size1);
}

int main(){
    string input;
    cin >> input;

    string output[1000];
    int count = getCodes(input, output);
    for(int i = 0; i < count && i < 1000; i++)
        cout << output[i] << endl;
    return 0;
}