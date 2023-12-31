/*You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the array/list.
 Note:
Unique element is always present in the array/list according to the given condition.

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test 
cases follow.
First line of each test case or query contains an integer 'N' representing the size of the array/list.
Second line contains 'N' single space separated integers representing the elements in the array/list.

Output Format :
For each test case, print the unique element present in the array.
Output for every test case will be printed in a separate line.

Sample Input 1:
1
7
2 3 1 6 3 6 2
Sample Output 1:
1
Sample Input 2:
2
5
2 4 7 2 7
9
1 3 1 3 6 6 7 10 7
Sample Output 2:
4
10 */

#include <iostream>
using namespace std;
//int findUnique(int arr[], int n) {
//  int flag; 
//     for(int i=0;i<n;i++)
//     {
//         flag=1;
//         for(int j=0;j<n;j++)
//         {
//             if(i==j)
//             {
//                 continue;
//             }
//             if(arr[i]==arr[j])
//             {
//                 flag=0;   
//             }
//          }
//         if(flag==1)
//         {
//             return arr[i];
//         }
     
//      }

//  }

/*
	Time Complexity : O(n)
    Space Complexity : O(1)
    where n is the size of input array
*/

int findUnique(int *arr, int n){
    int XOR=0;
    for(int i=0;i<n;i++)
    {
        XOR=XOR^arr[i];
    }
    return XOR;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; ++i) {
            cin >> input[i];
        }

        cout << findUnique(input, size) << endl;
    }

    return 0;
}