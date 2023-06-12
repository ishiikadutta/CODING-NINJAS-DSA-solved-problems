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
//2nd method
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
    int k=0;
    for(int i=0;i<input.length();i++)
    {
        int size=returnPermutations(input.substr(0,i)+input.substr(i+1),smalloutput);
        for(int j=0;j<size;j++)
        {
            output[k++]=input[i]+smalloutput[j];
        }
    }
    return k;

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