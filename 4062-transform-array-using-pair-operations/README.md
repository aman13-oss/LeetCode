# 4062. Transform Array Using Pair Operations

**Difficulty:** Medium

## Problem

You are given two integer arrays `source` and `target`.

In one operation, you may choose two distinct indices `i` and `j` in `source`, along with any integer `delta`.

Then update `source` as follows:

- `source[i] = source[i] + source[j] - delta`
- `source[j] = delta`

Return `true` if it is possible to make `source` equal to `target` after performing the operation any number of times, including zero times.

Otherwise, return `false`.

## Example 1

**Input:**
```text
source = [1,2,3]
target = [0,2,4]