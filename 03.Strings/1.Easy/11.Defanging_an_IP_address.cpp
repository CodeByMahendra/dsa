/*
Question:
Given a valid IPv4 address, return its defanged version.
A defanged IP address replaces every '.' with "[.]".

Example:
Input:  address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"

Explanation:
Replace each '.' in the IP address with "[.]".

Approach:
1. Initialize an empty string to store the result.
2. Traverse each character of the input string.
3. If the character is '.', append "[.]" to the result.
4. Otherwise, append the character itself.
5. Return the modified string.

Code:
*/

string defangIPaddr(string address){
    string ans="";

    for(char c:address){
        if(c=='.'){
            ans+="[.]";
        }
        else{
            ans+=c;
        }
    }
    return ans;
}