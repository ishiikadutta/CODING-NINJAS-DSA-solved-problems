/*Check AB
Suppose you have a string, S, made up of only 'a's and 'b's. Write a recursive function that checks if the string 
was generated using the following rules:
a. The string begins with an 'a'
b. Each 'a' is followed by nothing or an 'a' or "bb"
c. Each "bb" is followed by nothing or an 'a'
If all the rules are followed by the given string, return true otherwise return false.
Input format :
String S
Output format :
'true' or 'false' */
#include<iostream>
using namespace std;

bool checkAB(char input[])
{
    if(input[0]=='\0')
    {
        return true;
    }

    if(input[0]!='a')
    {
        return false;
    }

    if(input[1]=='b' && input[2]=='b' )
    {
        return checkAB(input+3);
    }

    return checkAB(input+1);

}


int main() {
    char input[100];
    bool ans;
    cin >> input;
    ans=checkAB(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}
