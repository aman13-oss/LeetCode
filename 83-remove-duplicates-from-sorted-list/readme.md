# 83. Remove Duplicates from Sorted List

## Problem

Given the head of a sorted linked list, delete all duplicates such that each element appears only once.

Return the linked list sorted as well.

## Example

Input:
`[1,1,2]`

Output:
`[1,2]`

## Approach

Since the linked list is already sorted, duplicate values will always be next to each other.

- Traverse the linked list.
- If the current node and next node have the same value, skip the next node.
- Otherwise, move to the next node.
- Return the head.

## Complexity

- Time: O(n)
- Space: O(1)