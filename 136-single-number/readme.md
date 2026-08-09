# 136. Single Number

## Problem

Given a non-empty array of integers `nums`, every element appears twice except for one.

Find that single one.

## Example

Input:
`[2,2,1]`

Output:
`1`

## Approach

Use the XOR operator.

The important XOR properties are:

- `x ^ x = 0`
- `x ^ 0 = x`

Therefore, all numbers that appear twice cancel each other out, leaving only the single number.

## Complexity

- Time: O(n)
- Space: O(1)