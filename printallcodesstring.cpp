/*Print all Codes - String

Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. You are given a numeric string S. Write a program to 
print the list of all possible codes that can be generated from the given string.
Note : The order of codes are not important. Just print them in different lines.
Input format :
A numeric string S
Output Format :
All possible codes in different lines
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

void printAllPossibleCodesHelper(string input,string output)
{
    if(input[0]=='\0')
    {
           cout<<output<<endl;
           return;
    }
   
    int i=input[0]-'0';
    char a='a'+i-1,b='\0';
    printAllPossibleCodesHelper(input.substr(1),output+a);
    if(input[1]!='\0')
    {
        int j=10*i+input[1]-'0';
        if(j>=10 && j<=26)
        {
            b='a'+j-1;
            printAllPossibleCodesHelper(input.substr(2),output+b);
           
        }
    }

}
void printAllPossibleCodes(string input) {
    printAllPossibleCodesHelper(input,"");
}

int main(){
    string input;
    cin >> input;

    printAllPossibleCodes(input);
    return 0;
}
