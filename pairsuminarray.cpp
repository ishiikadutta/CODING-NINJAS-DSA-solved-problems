/*Pair sum in array

You have been given an integer array/list(ARR) and a number 'num'. Find and return the total number of pairs in the 
array/list which sum to 'num'.

Note:
Given array/list can contain duplicate elements. 

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test 
cases follow.
First line of each test case or query contains an integer 'N' representing the size of the first array/list.
Second line contains 'N' single space separated integers representing the elements in the array/list.
Third line contains an integer 'num'.

Output format :
For each test case, print the total number of pairs present in the array/list.
Output for every test case will be printed in a separate line.

Time Limit: 1 sec

Sample Input 1:
1
9
1 3 6 2 5 4 3 2 4
7
Sample Output 1:
7 */
#include <iostream>
#include <algorithm>
using namespace std;
void merge_sortarray(int arr[],int si,int ei,int mid)
{
	int i=si,j=mid+1,k=si;
	int *temp= new int[ei+1];
	while(i<=mid && j<=ei)
	{
		if(arr[i]<arr[j])
		{
			temp[k]=arr[i];
			i++;
			k++;
		}
		else
		{
			temp[k]=arr[j];
			j++;
			k++;
		}
	}

	while(i<=mid)
	{
		temp[k]=arr[i];
		k++;
		i++;
	}

	while(j<=ei)
	{
		temp[k]=arr[j];
		k++;
		j++;
	}

	for(int i=si;i<=ei;i++)
	{
		arr[i]=temp[i];
	}

	delete[] temp;
}
void merge_sort(int arr[],int si,int ei)
{
	if(si>=ei)
	{
		return;
	}
	int mid=(si+ei)/2;
	merge_sort(arr,si,mid);
	merge_sort(arr,mid+1,ei);
	merge_sortarray(arr,si,ei,mid);
}
int pairSum(int *arr, int n, int num)
{
	merge_sort(arr,0,n-1);
	int i=0,j=n-1,count=0;
	while(i<j)
	{
		int s=arr[i]+arr[j];
		if(s==num)
		{
			int start=arr[i];//i=start index
			int end=arr[j];//j=end index
			if(start==end)
			{
				int diff=j-i;//difference in index
				//this means total elements with same number from start to end=diff+1
				count+=(diff*(diff+1))/2; //sum of n natural no. 
				//refer dsa copy -e.g- 2 2 2 2 2 ,sum =4 ,count=4+3+2+1
				return count;
			}

			int tempstarti=i+1;//temp start index 
			int tempendi=j-1;//temp end index
			//for monitoring duplicates and multiplying it by counting it
			while(tempstarti<=tempendi && arr[tempstarti]==start)
			{
				tempstarti++;
			}

			while(tempendi>=tempstarti && arr[tempendi]==end)
			{
				tempendi--;
			}

			int diff1=tempstarti-i;//no. of duplicates of start
			int diff2=j-tempendi;//no. of duplicates of end

			count+=diff1*diff2;//total pair
			i=tempstarti;
			j=tempendi;

		}

		else if(s>num)
		{
			j--;
		}
		
		else
		{
			i++;
		}
	}

	return count;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cin >> x;

		cout << pairSum(input, size, x) << endl;
		delete[] input;
	}
	
	return 0;
}