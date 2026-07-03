/*
QUESTION:
Given a sorted array of integers arr[] of size N and an integer X,
find the index of the first element that is greater than or equal to X.

If no such element exists, return N.

Example 1:
Input:
arr = [1,2,4,4,5,6]
X = 4

Output:
2

Explanation:
The first element greater than or equal to 4 is arr[2] = 4.

--------------------------------------------------

Example 2:

Input:
arr = [1,2,4,4,5,6]
X = 3

Output:
2

Explanation:
The first element greater than or equal to 3 is 4,
which is present at index 2.

--------------------------------------------------

Example 3:

Input:
arr = [1,2,4,4,5,6]
X = 8

Output:
6

Explanation:
There is no element greater than or equal to 8.
Hence return N.
*/


int lowerBound(vector<int>& arr, int x)
{
    int n = arr.size();

    int low = 0;
    int high = n - 1;

    int ans = n;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;
}