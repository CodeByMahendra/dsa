/*
Question:
Given a parentheses string s consisting of '(' and ')',
return the minimum number of parentheses you must add
to make the string valid.

A parentheses string is valid if:
1. Every opening parenthesis '(' has a corresponding closing parenthesis ')'.
2. Parentheses are properly matched.

Example:
Input:  s = "())"
Output: 1

Explanation:
Add one ')' at the end to make the string "()()".

Approach:
1. Traverse the string from left to right.
2. If the current character is '(', push it into the stack (or increase the open count).
3. If the current character is ')':
   - If there is an unmatched '(', match it (pop/decrease open count).
   - Otherwise, one '(' is needed, so increment the answer.
4. After traversal, any remaining unmatched '(' also need ')' to become valid.
5. Return: answer + remaining unmatched '('.

Code:
*/

int minAddToMakeParent(string s){
    int opened=0;
    int add=0;

    for(char ch:s){
        if(ch=='('){
            opened++;
        }
        else{
            if(opened>0){
                opened--;
            }
            else{
                add++;
            }
        }
    }
    return add+opened;
}