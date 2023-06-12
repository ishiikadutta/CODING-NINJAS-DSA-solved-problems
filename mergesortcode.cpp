/*Merge Sort Code
Sort an array A using Merge Sort.
Change in the input array itself. So no need to return or print anything.

Input format :
Line 1 : Integer n i.e. Array size
Line 2 : Array elements (separated by space)

Output format :
Array elements in increasing order (separated by space) */

#include<iostream>
using namespace std;

void merge(int input[],int si,int mid,int ei)
{
   int temp[10000];
    int k=si;
    int i=si,j=mid+1;
    while(i<=mid && j<=ei)
    {
        if(input[i]<=input[j])
        {
            temp[k]=input[i];
            i++;
            k++;
        }
        else
        {
            temp[k]=input[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
       temp[k]=input[i];
            i++;
            k++; 
    }
    while(j<=ei)
    {
         temp[k]=input[j];
            j++;
            k++;
    }
    for(int k=si;k<=ei;k++)
    {
        input[k]=temp[k];
    }

}
void merge_Sort(int input[], int si,int ei)
{
    if(si>=ei)
    {
        return;
    }
   int mid=(si+ei)/2;
   merge_Sort(input,si,mid);
   merge_Sort(input,mid+1,ei);
   merge(input,si,mid,ei);


}
void mergeSort(int input[], int size)
{
     
    if(size<2)
    {
        return;
    }
    int si=0,ei=size-1;
    merge_Sort(input,si,ei); 
    
}

int main()
{
    int input[100000];
   
    int size;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>input[i];
    }

    mergeSort(input,size);
     for(int i=0;i<size;i++)
    {
        cout<<input[i]<<" ";
    }
}