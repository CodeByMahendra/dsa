/*
Question:
Given a string s, check whether it is a palindrome.
A palindrome is a string that reads the same forward and backward.

Return true if the string is a palindrome; otherwise, return false.

Example:
Input:  s = "madam"
Output: true

Explanation:
Forward : "madam"
Backward: "madam"
Both are the same, so the string is a palindrome.

Approach:
1. Initialize two pointers: left = 0 and right = s.length() - 1.
2. Compare characters at both pointers.
3. If they are different, return false.
4. Otherwise, move left forward and right backward.
5. Continue until both pointers meet or cross.
6. If all characters match, return true.

Code:
*/

bool checkPalindrome(string s){
    int start=0;
    int end=s.size()-1;

    while(start<end){
        if(s[start]!=s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}