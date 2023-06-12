/*Print Subset Sum to K
Send Feedback
Given an array A and an integer K, print all subsets of A which sum to K.
Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
Note : The order of subsets are not important. Just print them in different lines.
Input format :
Line 1 : Size of input array
Line 2 : Array elements separated by space
Line 3 : K 
Sample Input:
9 
5 12 3 17 1 18 15 3 17 
6
Sample Output:
3 3
5 1*/
#include<iostream>
using namespace std;

void printSubsetSumToKHelper(int input[],int si,int size,int output[],int os,int k)
{
    if(si==size)
  {
    int sum=0;
    for(int i=0;i<os;i++)
    {
        sum=sum+output[i];
    }
    if(sum==k)
    {
        for(int i=0;i<os;i++)
        {
           cout<<output[i]<<" ";
        }   
        cout<<endl;
    }
    return;
  } 

    output[os]=input[si];
    printSubsetSumToKHelper(input,si+1,size,output,os+1,k);
    printSubsetSumToKHelper(input,si+1,size,output,os,k);
  
}
void printSubsetSumToK(int input[], int size, int k) {
    int output[1000];
    printSubsetSumToKHelper(input,0,size,output,0,k);
}


int main() {
  int input[1000],length,k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  cin>>k;
  printSubsetSumToK(input, length,k);
}

