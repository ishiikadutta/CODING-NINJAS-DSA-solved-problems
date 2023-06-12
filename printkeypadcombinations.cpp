/*Print Keypad Combinations Code

Given an integer n, using phone keypad find out and print all the possible strings that can be made using digits 
of input n.
Note : The order of strings are not important. Just print different strings in new lines.
Input Format :
Integer n
Output Format :
All possible strings in different line */
#include <iostream>
#include <string>
using namespace std;

void printKeypadHelper(int num,string output,string arr[]){
    if(num==0)
    {
        cout<<output<<endl;
        return;
    }
    int n=num%10;
   
    for(int i=0;i<arr[n].length();i++)
    {
         printKeypadHelper(num/10,arr[n][i]+output,arr);
    }
    return;
      
}
void printKeypad(int num){
    string arr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    printKeypadHelper(num,"",arr);
}

int main(){
    int num;
    cin >> num;
    printKeypad(num);
    return 0;
}
