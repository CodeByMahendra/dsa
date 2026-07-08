/*
Question:
Given a string s, repeatedly remove all adjacent duplicate characters until no adjacent duplicates remain.
Return the final string after all possible removals.

Example:
Input:  s = "abbaca"
Output: "ca"

Explanation:
"abbaca"
-> remove "bb" -> "aaca"
-> remove "aa" -> "ca"

Approach:
1. Use a stack (or string as a stack) to process each character.
2. If the current character matches the top of the stack, remove the top (duplicate found).
3. Otherwise, push the current character onto the stack.
4. After processing all characters, the stack contains the final string.

Code:
*/

string removeDuplicates(string s){

    // 1. Initialize an empty string (or stack) to store the result.
    string ans="";

    // 2. Traverse each character of the input string.
    for(char ch:s){
        // 3. If the current character matches the top of the stack, remove the top (duplicate found).
        if(!ans.empty() && ans.back()==ch){
            ans.pop_back();
        }
        // 4. Otherwise, push the current character onto the stack.
        else{
            ans.push_back(ch);
        }
    }
    
    // 5. Return the result.
    return ans;
}