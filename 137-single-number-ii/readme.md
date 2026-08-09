# 137. Single Number II

## Problem

Given an integer array `nums` where every element appears three times except for one element which appears exactly once, find the single element.

## Example

Input:
`[2,2,3,2]`

Output:
`3`

## Approach

Count the bits at every position for all numbers.

Since every number except one appears three times, the count of each bit will be a multiple of 3 except for the bits belonging to the single number.

Take each bit count modulo 3 to construct the answer.

## Complexity

- Time: O(n)
- Space: O(1)