/*Quick Sort Code

Sort an array A using Quick Sort.
Change in the input array itself. So no need to return or print anything.

Input format :
Line 1 : Integer n i.e. Array size
Line 2 : Array elements (separated by space)

Output format :
Array elements in increasing order (separated by space) */
#include<iostream>
using namespace std;
int partition(int input[],int s,int e)
{
    int count=0;
    for(int i=s+1;i<=e;i++)
    {
        if(input[i]<=input[s])
        {
            count++;
        }
    }
    int pi=s+count;
    int temp=input[s];
    input[s]=input[pi];
    input[pi]=temp;

    int i=s,j=e;
    while(i!=pi && j!=pi)
    {
        if(input[i]<=input[pi])
            i++;
        else if(input[j]>=input[pi])
            j--;
        else
        {
            int temp=input[i];
            input[i]=input[j];
            input[j]=temp;
            i++;
            j--;
        }
    }

    return pi;

}
void qs(int input[],int s,int e)
{
    if(s>=e)
    {
        return;
    }

    int pi=partition(input,s,e);
    
    qs(input,s,pi-1);
    qs(input,pi+1,e);
}
void quickSort(int input[], int size) 
{
    if(size<2)
    {
        return;
    }
      qs(input,0,size-1);
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

    quickSort(input,size);
    for(int i=0;i<size;i++)
    {
        cout<<input[i]<<" ";
    }
}