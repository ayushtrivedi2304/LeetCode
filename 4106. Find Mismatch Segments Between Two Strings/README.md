# Find Mismatched Segments

## Problem Statement

You are given two strings `s1` and `s2` of the same length.

A **mismatched segment** is a maximal contiguous range of indices where the characters of `s1` and `s2` differ at every index.

Return a 2D array containing `[sub1, sub2]` for each mismatched segment, where:
- `sub1` is the corresponding substring from `s1`.
- `sub2` is the corresponding substring from `s2`.

Return the segments in increasing order of their starting indices.

If there are no mismatched segments, return an empty array.

A **substring** is a contiguous non-empty sequence of characters within a string.

## Examples

### Example 1

**Input:**
```text
s1 = "earth"
s2 = "empty"
```

**Output:**
```text
[["ar", "mp"], ["h", "y"]]
```

**Explanation:**
- The characters at indices 1 and 2 differ, forming the mismatched segment `["ar", "mp"]`.
- The characters at index 4 differ, forming the mismatched segment `["h", "y"]`.

### Example 2

**Input:**
```text
s1 = "action"
s2 = "nation"
```

**Output:**
```text
[["ac", "na"]]
```

**Explanation:**

The characters at indices 0 and 1 differ, forming the mismatched segment `["ac", "na"]`. All remaining characters are equal in both strings.

### Example 3

**Input:**
```text
s1 = "hot"
s2 = "hot"
```

**Output:**
```text
[]
```

**Explanation:**

The two strings are identical, so there are no mismatched segments.

## Constraints

- `1 <= s1.length == s2.length <= 100`
- `s1` and `s2` consist of lowercase English letters.

## Approach

Use **Linear Traversal (Two Pointers)** to identify mismatched segments.

1. Traverse both strings using an index `i`.
2. If `s1[i] == s2[i]`, move to the next index.
3. If `s1[i] != s2[i]`, mark the beginning of a mismatched segment.
4. Continue traversing until the characters become equal or the end of the strings is reached.
5. Extract the corresponding substrings from both strings and add them to the answer.

## Complexity Analysis

- **Time Complexity:** `O(n)` – Each character is visited at most once.
- **Auxiliary Space Complexity:** `O(1)` – Excluding the space required to store the output.
