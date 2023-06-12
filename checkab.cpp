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

bool check(char input[],int start_index)
{
    if(input[start_index]=='\0')
    {
        return true;
    }

    if(input[start_index]!='a')
    {
        return false;
    }

    if(input[start_index+1]=='b' && input[start_index+2]=='b' )
    {
        return check(input,start_index+3);
    }

    return check(input,start_index+1);

}
bool checkAB(char input[]) {
    return(input,0);
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
