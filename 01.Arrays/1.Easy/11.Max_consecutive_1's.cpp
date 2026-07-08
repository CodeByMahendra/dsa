/*
QUESTION:-
Given a binary array nums, return the maximum number of consecutive 1's in the array.

Example 1:
Input: nums = [1,1,0,1,1,1]
Output: 3

Example 2:
Input: nums = [1,0,1,1,0,1]
Output: 2
*/

/*
APPROACH:-
-> Traverse the array.
-> Whenever a 1 is found, keep counting consecutive 1's using a while loop.
-> Update the maximum count using ans = max(ans, cnt).
-> Continue until the end of the array.
*/

// CODE
int findMaxConsecutiveOnes(vector<int> &nums)
{
    int ans = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        int cnt = 0;

        while (i < nums.size() && nums[i] == 1)
        {
            cnt++;
            i++;
        }

        ans = max(ans, cnt);
    }

    return ans;
}

// TIME COMPLEXITY = O(N)
// SPACE COMPLEXITY = O(1)