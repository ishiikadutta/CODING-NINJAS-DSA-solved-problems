/*Replace pi (recursive)

Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".

Constraints :
1 <= |S| <= 50
where |S| represents the length of string S. 

Sample Input 1 :
xpix

Sample Output :
x3.14x */

#include<iostream>
#include<string.h>
using namespace std;

void replacePi(char input[]) 
{
   // int length=strlen(input);
   if(input[1]=='\0')   //if(length==1)
   {
       return;
   }

    replacePi(input+1);

    if(input[0]=='p' && input[1]=='i')
    {
        int length=strlen(input);
        for(int i=length;i>=2;i--)
        {
            input[i+2]=input[i];
        }

        input[0]='3';
        input[1]='.';
        input[2]='1';
        input[3]='4';
    
    }
	//return;
}

int main()
{
    char input[1000];
    cin>>input;
    replacePi(input);
    cout<<input;
}