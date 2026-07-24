# 1393. Capital Gain/Loss

**Difficulty:** Medium

## Problem

Table: `Stocks`

| Column Name | Type |
|---|---|
| stock_name | varchar |
| operation | enum |
| operation_day | int |
| price | int |

`(stock_name, operation_day)` is the primary key of this table.

The `operation` column contains either `Buy` or `Sell`.

## Task

Write a solution to report the **capital gain or loss** for each stock.

The capital gain/loss is calculated as:

`Total Sell Price - Total Buy Price`

Return the result table in any order.

## Example

### Input

| stock_name | operation | operation_day | price |
|---|---|---:|---:|
| Leetcode | Buy | 1 | 1000 |
| Corona Masks | Buy | 2 | 10 |
| Leetcode | Sell | 5 | 9000 |
| Handbags | Buy | 17 | 30000 |
| Corona Masks | Sell | 3 | 1010 |
| Corona Masks | Buy | 4 | 1000 |
| Corona Masks | Sell | 5 | 500 |

### Output

| stock_name | capital_gain_loss |
|---|---:|
| Corona Masks | 500 |
| Leetcode | 8000 |
| Handbags | -30000 |

## Solution

The SQL solution is available in `solution.sql`.