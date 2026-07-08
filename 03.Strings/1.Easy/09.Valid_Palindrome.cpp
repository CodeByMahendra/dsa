/*
Question:
Given a string s, determine whether it is a palindrome,
considering only alphanumeric characters and ignoring cases.

Return true if the string is a palindrome; otherwise, return false.

Example:
Input:  s = "A man, a plan, a canal: Panama"
Output: true

Explanation:
After removing non-alphanumeric characters and converting to lowercase:
"amanaplanacanalpanama"
This string reads the same forward and backward.

Approach:
1. Use two pointers: one at the beginning and one at the end.
2. Skip all non-alphanumeric characters.
3. Convert both characters to lowercase and compare them.
4. If they are different, return false.
5. Continue until both pointers meet or cross.
6. If all characters match, return true.

Code:
*//*
Question:
Given a string s, determine whether it is a palindrome,
considering only alphanumeric characters and ignoring cases.

Return true if the string is a palindrome; otherwise, return false.

Example:
Input:  s = "A man, a plan, a canal: Panama"
Output: true

Explanation:
After removing non-alphanumeric characters and converting to lowercase:
"amanaplanacanalpanama"
This string reads the same forward and backward.

Approach:
1. Use two pointers: one at the beginning and one at the end.
2. Skip all non-alphanumeric characters.
3. Convert both characters to lowercase and compare them.
4. If they are different, return false.
5. Continue until both pointers meet or cross.
6. If all characters match, return true.

Code:
*/
class Solution {
public:
    bool isPalindrome(string s) {
        int start=0;
        int end=s.size()-1;

        for(char c:s){
            if(isanNum(c)){
                clean+=tolower(c);
            }
        }

        while(start<end){
            if(clean[start]!=clean[end]){
                return false;
            }
            start++;
            end--;
                        }
        return true;
    }
};