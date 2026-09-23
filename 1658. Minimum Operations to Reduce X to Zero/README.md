# Minimum Operations to Reduce X to Zero

You are given an integer array `nums` and an integer `x`.

In one operation, you may remove either the leftmost or rightmost element of `nums` and subtract its value from `x`. The array changes after every removal.

Return the minimum number of operations needed to reduce `x` to exactly `0`. If it is not possible, return `-1`.

## Examples

### Example 1

**Input**

```text
nums = [1, 1, 4, 2, 3], x = 5
```

**Output**

```text
2
```

**Explanation**

Remove `3` and then `2` from the right side.

### Example 2

**Input**

```text
nums = [5, 6, 7, 8, 9], x = 4
```

**Output**

```text
-1
```

**Explanation**

No combination of removals from the two ends can reduce `x` to exactly `0`.

### Example 3

**Input**

```text
nums = [3, 2, 20, 1, 1, 3], x = 10
```

**Output**

```text
5
```

**Explanation**

Remove `3, 2` from the left and `3, 1, 1` from the right.

## Constraints

- `1 <= nums.length <= 10^5`
- `1 <= nums[i] <= 10^4`
- `1 <= x <= 10^9`
