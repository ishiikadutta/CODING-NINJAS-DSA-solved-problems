/*Return Keypad Code

Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.
Return empty string for numbers 0 and 1.
Note : 1. The order of strings are not important.
2. Input and output has already been managed for you. You just have to populate the output array and return the 
count of elements populated in the output array.
Input Format :
Integer n
Output Format :
All possible strings in different lines */

#include <string>
#include<iostream>
using namespace std;
string arr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
int keypad(int num, string output[])
{ 
    if(num==0 || num==1)
    {
        return 1;
    }

     int n=num%10;
     int smallsize=keypad(num/10,output);
    for(int i=1;i<arr[n].length();i++)
    {
        for(int j=0;j<smallsize;j++)
        {
            output[j+smallsize*i]=output[j]+arr[n].at(i);
        }
    }   

    for(int k=0;k<smallsize;k++)
    {
        output[k]=output[k]+arr[n].at(0);
    }
    return smallsize*arr[n].length();
}

int main(){
    int num;
    cin >> num;

    string output[1000];
    int count = keypad(num, output);
    
    for(int i = 0; i < count ; i++){
        cout << output[i] << endl;
    }
    return 0;
}