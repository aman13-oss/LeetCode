# 1587. Bank Account Summary II

**Difficulty:** Easy

## Problem

Table: `Users`

| Column Name | Type |
|---|---|
| account | int |
| name | varchar |

`account` is the primary key of this table.

Table: `Transactions`

| Column Name | Type |
|---|---|
| trans_id | int |
| account | int |
| amount | int |
| transacted_on | date |

`trans_id` is the primary key of this table.

Each transaction represents money deposited into or withdrawn from an account.

## Task

Write a solution to report the name and balance of users whose balance is **greater than $10,000**.

The balance is calculated as the sum of all transaction amounts for that user.

Return the result table in any order.

## Example

### Input

Users:

| account | name |
|---:|---|
| 900001 | Alice |
| 900002 | Bob |
| 900003 | Charlie |

Transactions:

| trans_id | account | amount | transacted_on |
|---:|---:|---:|---|
| 1 | 900001 | 7000 | 2020-08-01 |
| 2 | 900001 | 7000 | 2020-09-01 |
| 3 | 900001 | -3000 | 2020-09-01 |
| 4 | 900002 | 10000 | 2020-08-01 |
| 5 | 900003 | 5000 | 2020-08-01 |

### Output

| name | balance |
|---|---:|
| Alice | 11000 |

## Solution

The SQL solution is available in `solution.sql`.