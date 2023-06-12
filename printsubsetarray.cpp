/*Print Subsets of Array
Send Feedback
Given an integer array (of length n), find and print all the subsets of input array.
Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should 
remain same as in the input array.
Note : The order of subsets are not important. Just print the subsets in different lines.
Input format :
Line 1 : Integer n, Size of array
Line 2 : Array elements (separated by space)
Sample Input:
3
15 20 12
Sample Output:
[] (this just represents an empty array, don't worry about the square brackets)
12 
20 
20 12 
15 
15 12 
15 20 
15 20 12 */
#include<iostream>
using namespace std;
void printSubsetsOfArrayHelper(int input[], int si,int size,int output[],int os) { //si=start index of input,os=output size
  if(si==size)
  {
    for(int i=0;i<os;i++)
    {
        cout<<output[i]<<" ";
    }
    cout<<endl;
    return;
  } 

    output[os]=input[si];
    printSubsetsOfArrayHelper(input,si+1,size,output,os+1);
    printSubsetsOfArrayHelper(input,si+1,size,output,os);
  
}
void printSubsetsOfArray(int input[], int size) {
    int output[1000];
    printSubsetsOfArrayHelper(input,0,size,output,0);
}

int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
  	cin >> input[i];
  printSubsetsOfArray(input, length);
}