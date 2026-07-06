/*
Question: You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.

Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, which causes all the following ones to be bad.

You are given an API bool isBadVersion(version) which returns whether version is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.

APPROACH:

We can use the binary search approach to find the first bad version.
1. Initialize low = 1 and high = n, where n is the number of versions.
2. While low < high, calculate mid = low + (high - low) / 2.
3. If isBadVersion(mid) is true, it means the first bad version is on the left side of mid, so update high = mid.
4. Otherwise, the first bad version is on the right side of mid, so update low = mid + 1.
5. After the loop ends, low will be pointing to the first bad version index.
6. Return low as the result.

CODE:
*/

bool isBadVersion(int version) {
    // Dummy implementation - replace with actual API call
    return version >= 4; // Example: 4th version is the first bad one
}

int firstBadVersion(int n) {
    int start = 1, end = n;
    while (start < end) {
        int mid = start + (end - start) / 2;
        if (isBadVersion(mid)) {
            end = mid; // First bad version is in the left half including mid
        } else {
            start = mid + 1; // First bad version is in the right half
        }
    }
    return start; // When start == end, we've found the first bad version
}

// TIME COMPLEXITY: O(log n)
// SPACE COMPLEXITY: O(1)