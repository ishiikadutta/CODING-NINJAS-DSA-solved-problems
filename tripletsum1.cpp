#include <iostream>
#include <algorithm>
using namespace std;
int pairSum(int *arr, int i,int j, int num)//i=start index,j=end index
{
	int count=0;
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

int tripletSum(int *arr, int n, int num)
{
    sort(arr,arr+n);
    int tripletcount=0;
    for(int i=0;i<n-2;i++)
    {
        int sumforpair=num-arr[i];
        int paircount=pairSum(arr,i+1,n-1,sumforpair);
        tripletcount+=paircount;
    }
    return tripletcount;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}