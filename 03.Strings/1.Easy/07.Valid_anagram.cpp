/*
QUESTION:-
Given two strings s and t, return true if t is an anagram of s, and false otherwise.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false

Problem: Valid Anagram

Approach:
1. Create an unordered map to store the count of each character in string `s`.
2. Iterate over each character in `s` and increment its count in the map.
3. Iterate over each character in `t`.
   - If the character is not present in the map or its count is zero, return false.
   - Decrement the count of the character in the map.
   - If the count becomes zero, remove the character from the map.
4. After iterating through all characters in `t`, if the map is empty, return true; otherwise, return false.

Code:
*/
  // using sorting 
class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size())
            return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
    }
};




 // using array frquency wit lowercase leteer
class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size())
            return false;

        vector<int> freq(26, 0);

        for (char ch : s)
            freq[ch - 'a']++;

        for (char ch : t)
            freq[ch - 'a']--;

        for (int count : freq) {
            if (count != 0)
                return false;
        }

        return true;
    }
};



// using aarya frquency with both lowercase and uppercase letters
class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size())
            return false;

        vector<int> freq(128, 0);

        for (char ch : s)
            freq[ch]++;

        for (char ch : t)
            freq[ch]--;

        for (int x : freq) {
            if (x != 0)
                return false;
        }

        return true;
    }
};

/* 
Time complexity: O(max(s.length(), t.length()))
Space complexity: O(s.length())
*/