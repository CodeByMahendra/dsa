/*
Question:
Given a string s, reverse the entire string and return the reversed string.

Example:
Input:  s = "hello"
Output: "olleh"

Explanation:
Reverse the order of all characters in the string.

Approach:
1. Initialize two pointers: left = 0 and right = s.length() - 1.
2. Swap the characters at both pointers.
3. Move left forward and right backward.
4. Repeat until both pointers meet or cross.
5. Return the reversed string.

Code:
*/

string reverseString(string s){
    int start=0;
    int end=s.size()-1;

    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    return s;
}