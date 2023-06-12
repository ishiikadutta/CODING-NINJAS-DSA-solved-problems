/*All Indices of Number
Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array.
Save all the indexes in an array (in increasing order).
Do this recursively. Indexing in the array starts from 0.

Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x

Output Format :
indexes where x is present in the array (separated by space) */

//1st approach

#include<iostream>
using namespace std;
int allIndexes(int a[], int n, int x,int output[])
{
    if(n==0)
    {
        return 0;
    }

    int size=allIndexes(a+1,n-1,x,output);
    
    if(a[0]==x)
    {
        for(int i=0;i<size;i++)
        {
            output[i+1]=output[i]+1;
        }

        output[0]=0;
        return ++size;
    }
    else
    {
        
        for(int i=0;i<size;i++)
        {
            output[i]+=1;
        }
    
    }  
    return size;

    
    

    
}

int main()
{
    int a[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;

    int output[1000];
    int size=allIndexes(a, n, x, output);
    cout<<"Size of output array is :"<<size<<endl;
    cout<<"Output array is :"<<endl;
    for(int i = 0; i < size; i++)
    {
        cout << output[i] << " ";
    }
   
}