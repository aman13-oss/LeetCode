# 4031. Find All Numbers Disappeared in an Array II

## Problem

You are given an integer array `nums` and two integers `lower` and `upper`.

A **missing integer** is an integer in the inclusive range `[lower, upper]` that does not appear in `nums`.

Return a 2D integer array where each element is of the form `[start, end]`, representing a **contiguous** range of missing integers.

Return the ranges in **increasing** order. If there are no missing integers, return an empty array.

Consecutive missing integers should be grouped into a single range.

## Example 1

**Input:**

`nums = [3,9,7], lower = 1, upper = 12`

**Output:**

`[[1,2],[4,6],[8,8],[10,12]]`

**Explanation:**

The missing integers are `[1, 2, 4, 5, 6, 8, 10, 11, 12]`.

Grouping consecutive missing integers gives:

`[1,2]`, `[4,6]`, `[8,8]`, and `[10,12]`.

## Example 2

**Input:**

`nums = [1,1], lower = 5, upper = 7`

**Output:**

`[[5,7]]`

## Example 3

**Input:**

`nums = [2,3,5], lower = 2, upper = 3`

**Output:**

`[]`

## Constraints

- `1 <= nums.length <= 10^5`
- `1 <= nums[i] <= 10^5`
- `1 <= lower <= upper <= 10^5`

## Approach

- Store all elements of `nums` in a set.
- Traverse every number from `lower` to `upper`.
- If a number is missing, start or continue a missing range.
- When a present number is found, close the current range.
- Add the final range if it is still open.

## Complexity

- Time: O(n + (upper - lower + 1) log n)
- Space: O(n)