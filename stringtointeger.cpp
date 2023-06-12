/*String to Integer

Write a recursive function to convert a given string into the number it represents. That is input will be a numeric
string that contains only numbers, you need to convert the string into corresponding integer and return the answer.

Input format :
Numeric string S (string, Eg. "1234")

Output format :
Corresponding integer N (int, Eg. 1234) */

#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int stringToNumber(char input[]) 
{
    if(input[0]=='\0')
    {
        return 0;
    }

    int sum=stringToNumber(input+1);
    int length=strlen(input);
    int b=input[0]-48;
    sum=b*pow(10,length-1)+sum;
    return sum;

}

int main()
{
    char input[1000];
    cin>>input;
    cout<<stringToNumber(input);
    
}