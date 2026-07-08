/*
QUESTION:-
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
*/

/*
APPROACH:-
-> The idea is while traversing the array if we found any zero then we have to swap it with next non-zero
*/

// CODE:-
// function to find the next non-zero element
int moveZeroes(vector((int) &nums)){
    int nextPos=0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]!=0){
            nums[nextPos++]=nums[i];
            nextPos++;
        }

    }
    for(int i=nextPos; i<nums.size(); i++){
        nums[i]=0;
    }

    return nums;    

}
// TIME COMPLEXITY = O(N) (as we moving j throught the array only once)
// SPACE COMPLEXITY = O(0)