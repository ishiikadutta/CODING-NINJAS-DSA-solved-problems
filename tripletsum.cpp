/*Triplet sum

You have been given a random integer array/list(ARR) and a number X. Find and return the triplet(s) in the 
array/list which sum to X.

Note :
Given array/list can contain duplicate elements.

Sample Input 1:
1
7
1 2 3 4 5 6 7 
12
Sample Output 1:
5

Sample Input 2:
2
7
1 2 3 4 5 6 7 
19
9
2 -5 8 -6 0 5 10 11 -3
10
Sample Output 2:
0
5 */

#include <iostream>
#include <algorithm>
using namespace std;
int tripletSum(int *arr, int n, int num)
{
	sort(arr,arr+n);
    int count=0;
    for(int i=0;i<n-2;i++)
    {
        int j=n-1;
        int k=i+1;
        while(k<j)
        {
            int s=arr[k]+arr[j];
            if(s>num-arr[i])
            {
                j--;
            }

            else if(s<num-arr[i])
            {
                k++;
            }

            else
            {
                if(arr[k]==arr[j])
                {
                    int diff=j-k; //total elements =diff+1
                    count+=(diff*(diff+1))/2;
                    break;
                }
         
                int tempstarti=k+1;
                int tempendi=j-1;
                while(tempstarti<=tempendi && arr[tempstarti]==arr[k])
                {
                    tempstarti++;
                }
                while(tempstarti<=tempendi && arr[tempendi]==arr[j])
                {
                    tempendi--;
                }            
                int dup1=tempstarti-k;//duplicate from start
                int dup2=j-tempendi;//duplicate from end
                count+=dup1*dup2;
                k=tempstarti;
                j=tempendi;
            

            }
        }
    }
    return count; 

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