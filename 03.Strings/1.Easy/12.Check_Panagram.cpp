/*
Question:
Given a string s, check whether it is a Pangram.
A pangram is a sentence that contains every letter of the English
alphabet ('a' to 'z') at least once.

Return true if the string is a pangram; otherwise, return false.

Example:
Input:  s = "thequickbrownfoxjumpsoverthelazydog"
Output: true

Explanation:
The string contains every lowercase English letter at least once.

Approach:
1. Create a boolean array (or set) of size 26 to track visited letters.
2. Traverse the string character by character.
3. Mark each alphabet character as visited.
4. Count the number of unique letters visited.
5. If all 26 letters are present, return true; otherwise, return false.

Code:
*/

bool checkPanagram(string s){
    vector<bool>visited(26,false);

    for(int i=0;i<s.size();i++){
        if(isalpha(s[i])){
            visited[tolower(s[i])- 'a'] = true;
        }
    }

    for(int i=0;i<26;i++){
        if(!visited[i]){
            return false;
        }
    }
    return true;
}