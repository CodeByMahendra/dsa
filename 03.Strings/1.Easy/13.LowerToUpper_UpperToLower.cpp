/*
Question:
Given a string s, convert all lowercase letters to uppercase
and all uppercase letters to lowercase.

Return the modified string after changing the case of every alphabet.

Example:
Input:  s = "HeLLo123"
Output: "hEllO123"

Explanation:
'H' -> 'h'
'e' -> 'E'
'L' -> 'l'
'L' -> 'l'
'o' -> 'O'
Digits and special characters remain unchanged.

Approach:
1. Traverse the string character by character.
2. If the current character is lowercase, convert it to uppercase.
3. If the current character is uppercase, convert it to lowercase.
4. Leave digits and special characters unchanged.
5. Return the modified string.

Code:
*/