/*
QUESTION:-
You are given an array 'A' of size 'N' and an integer 'K'. You need to print the length of the longest subarray of array 'A' whose sum = 'K'.
Example:
Input: 'N' = 7 'K' = 3
'A' = [1, 2, 3, 1, 1, 1, 1]
Output: 3
Explanation: Subarrays whose sum = '3' are:
[1, 2], [3], [1, 1, 1], [1, 1, 1]
Here, the length of the longest subarray is 3, which is our final answer.
*/

/*
/*
APPROACH:-
-> This approach works only when all array elements are positive (or non-negative).
-> Use two pointers 'start' and 'end' to maintain a sliding window.
-> Expand the window by moving 'end' and add a[end] to the current sum.
-> If the current sum becomes greater than K, shrink the window from the left
   until the sum becomes less than or equal to K.
-> Whenever the current sum becomes equal to K, update the answer with the
   current window size.
*/


// CODE:-
int longestSubarrayWithSumK(vector<int> a, long long k)
{
    int start = 0;
    int ans = 0;
    long long sum = 0;

    for (int end = 0; end < a.size(); end++)
    {
        sum += a[end];

        while (sum > k)
        {
            sum -= a[start];
            start++;
        }

        if (sum == k)
        {
            ans = max(ans, end - start + 1);
        }
    }

    return ans;
}

// TIME COMPLEXITY = O(N)
// SPACE COMPLEXITY = O(0)