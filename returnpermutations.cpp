/*Return Permutations - String

Given a string S, find and return all the possible permutations of the input string.
Note 1 : The order of permutations is not important.
Note 2 : If original string contains duplicate characters, permutations will also be duplicates.
Input Format :
String S
Output Format :
All permutations (in different lines)
Sample Input :
abc
Sample Output :
abc
acb
bac
bca
cab
cba */
//1st method
//#include<string>
#include<iostream>
using namespace std;

int returnPermutations(string input, string output[]){
    if(input[0]=='\0')
    {
        output[0]="";
        return 1;
    }
    string smalloutput[1000];
    int size=returnPermutations(input.substr(1),smalloutput);
    int k=smalloutput[0].length()+1;
    int l=0;
    for(int j=0;j<size;j++)
    {
        for(int i=0;i<=smalloutput[0].length();i++)
        {
             output[l++]=smalloutput[j].substr(0,i)+input[0]+smalloutput[j].substr(i);         
        }
    }

    return size*k;
}
int main(){
    string input;
    cin >> input;
    string output[1000];
    int count = returnPermutations(input, output);
    for(int i = 0; i < count && i < 1000; i++){
        cout << output[i] << endl;
    }
    return 0;
}