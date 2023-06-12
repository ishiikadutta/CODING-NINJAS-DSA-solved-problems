/*Rotate array

You have been given a random integer array/list(ARR) of size N. Write a function that rotates the given array/list
 by D elements(towards the left).
 Note:
Change in the input array/list itself. You don't need to return or print the elements.
Sample Input 1:
1
7
1 2 3 4 5 6 7
2
Sample Output 1:
3 4 5 6 7 1 2
*/
#include <iostream>
using namespace std;

/*Approach 1: 
void rotate(int *input, int d, int n)
{
    while(d>0)
    {
        int temp=input[0],i;
        for(i=0;i<n-1;i++)
        {
            input[i]=input[i+1];
        }
        input[i]=temp;
        d--;
    }
} */

/*Approach 2 :
void rotate(int *input, int d, int n)
{
	int *temp=new int[d];
	for(int i=0;i<d;i++)
	{
		temp[i]=input[i];
	}
	for(int i=0;i<n-d;i++)
	{
		input[i]=input[i+d];
	}
	for(int i=0;i<d;i++)
	{
		input[n-d+i]=temp[i];
	}
	delete[] temp;
}*/

//Approach 3: Best Approach
void reverse(int *input,int si,int ei)//for reversing array
{
	while(si<ei)
	{
		int temp=input[si]; //swaping first and last elements for reversing the array
		input[si]=input[ei];
		input[ei]=temp;
		si++;
		ei--;
	}
}
void rotate(int *input, int d, int n)
{
	reverse(input,0,n-1);
	reverse(input,0,n-d-1);
	reverse(input,n-d,n-1);
}
int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}