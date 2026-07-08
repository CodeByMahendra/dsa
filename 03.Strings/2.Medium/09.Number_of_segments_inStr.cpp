/*
Question:
Given a string s, return the number of segments in the string.
A segment is a contiguous sequence of non-space characters.

Example:
Input:  s = "Hello, my name is John"
Output: 5

Explanation:
The segments are:
"Hello,"
"my"
"name"
"is"
"John"

Approach:
1. Traverse the string from left to right.
2. Skip all spaces.
3. Whenever a non-space character is found after a space (or at the beginning), count it as a new segment.
4. Continue until the end of the string.
5. Return the total number of segments.

Code:
*/

int countSegments(string s){
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=' ' && (i==0 || s[i-1]==' ')){
            count++;
        }
    }
    return count;
}
