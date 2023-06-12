/*Binary Search (Recursive)

Given an integer sorted array (sorted in increasing order) and an element x, find the x in given array using
 binary search. Return the index of x.
Return -1 if x is not present in the given array.
Note : If given array size is even, take first mid.
Input format :

Line 1 : Array size
Line 2 : Array elements (separated by space)
Line 3 : x (element to be searched) */
#include<iostream>
using namespace std;

int binarysearch(int input[], int size, int element,int index)
{
    if(size<=0)
    {
        return -1;
    }
    int s=size/2;

   if(size%2==1)
   {
    	if(element==input[index+s])
        {
            return index+s;
        }
       
        else if(element>input[index+s])
        {
            return binarysearch(input,s,element,s+1+index);
        }

        else
        {
            return binarysearch(input,s,element,index);
        }
   }
        if(element==input[index+s-1])
        {
            return index+s-1;
        }
   
        else if(element>input[index+s-1])
        {
            return binarysearch(input,s,element,s+index);
        }

        else
        {
           return binarysearch(input,s-1,element,index);
        }

}
int binarySearch(int input[], int size, int element) {
    return binarysearch(input,size,element,0);
}

int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}
