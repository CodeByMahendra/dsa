/*
Question:
Given a string s, remove all adjacent duplicate characters until no adjacent duplicates remain.
Return the final string.

Example:
Input:  s = "abbaca"
Output: "ca"

Explanation:
"abbaca"
-> remove "bb" -> "aaca"
-> remove "aa" -> "ca"

Approach:
1. Initialize an empty string (or stack) to store the result.
2. Traverse each character of the input string.
3. If the current character is the same as the last character of the result, remove the last character.
4. Otherwise, append the current character to the result.
5. After processing all characters, return the result.

Code:
*/
int find_index(string s,string target){
    int n=s.size();
    int m=target.size();

    for(int i=0;i<n-m+1;i++){

        string temp=s.substr(i,m);

        if(temp==target){
            return i;
        }
    }
    return -1;
}


// without substr

int find_index(string s,string target){
    int n=s.size();
    int m=target.size();

    if(m>n){
        return -1;
    }

    for(int i=0;i<n-m+1;i++){

        int j=0;
        while(j<m && s[i+j]==target[j]){
            j++;
        }

        if(j==m){
            return i;
        }
    }
    return -1;
}