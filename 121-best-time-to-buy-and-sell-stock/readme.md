# 121. Best Time to Buy and Sell Stock

## Problem

You are given an array `prices` where `prices[i]` is the price of a given stock on the `i-th` day.

Choose a single day to buy one stock and choose a different day in the future to sell that stock.

Return the maximum profit you can achieve.

## Example

Input:
`[7,1,5,3,6,4]`

Output:
`5`

## Approach

Keep track of the minimum price seen so far.

For every price:

- Update the minimum buying price.
- Calculate the profit if we sell on the current day.
- Keep track of the maximum profit.

## Complexity

- Time: O(n)
- Space: O(1)