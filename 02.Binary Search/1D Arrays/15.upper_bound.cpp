/*
QUESTION:
Given a sorted array of integers arr[] of size N and an integer X,
find the index of the first element that is strictly greater than X.

If no such element exists, return N.

Example 1:

Input:
arr = [1,2,4,4,5,6]

X = 4

Output:
4

Explanation:
The first element strictly greater than 4
is 5 at index 4.

--------------------------------------------------

Example 2:

Input:
arr = [1,2,4,4,5,6]

X = 3

Output:
2

Explanation:
The first element greater than 3 is 4.

--------------------------------------------------

Example 3:

Input:
arr = [1,2,4,4,5,6]

X = 6

Output:
6

Explanation:
There is no element greater than 6.
Return N.
*/


int upperBound(vector<int>& arr, int x)
{
    int n = arr.size();

    int low = 0;
    int high = n - 1;

    int ans = n;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(arr[mid] > x)
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