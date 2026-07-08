/*
Question:
Given a string s consisting of words and spaces, return the length of the last word.
A word is a sequence of non-space characters.

Example:
Input:  s = "Hello World"
Output: 5

Explanation:
The last word is "World", which has 5 characters.

Approach:
1. Start from the end of the string.
2. Skip all trailing spaces.
3. Count the characters of the last word until a space or the beginning of the string is reached.
4. Return the count.

Code:
*/

//using 2 pointer 

int find_length(string &s){
    int start=s.size()-1;
    int end=start;
    while(end>=0 && s[end]==" "){
        end--;
    }

    start=end;
    while(start>=0 && s[start]!=" "){
        start--;
    }
    return end-start;
    
}