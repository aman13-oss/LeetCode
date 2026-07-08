# 584. Find Customer Referee

**Difficulty:** Easy

## Problem

Table: `Customer`

| Column Name | Type |
|---|---|
| id | int |
| name | varchar |
| referee_id | int |

`id` is the primary key column for this table.

Each row of this table indicates the ID, name, and referee of a customer.

## Task

Find the names of the customer that are **not referred by the customer with id = 2**.

Return the result table in any order.

## Example 1

### Input

**Customer table:**

| id | name | referee_id |
|---|---|---:|
| 1 | Will | null |
| 2 | Jane | null |
| 3 | Alex | 2 |
| 4 | Bill | null |
| 5 | Zack | 1 |
| 6 | Mark | 2 |

### Output

| name |
|---|
| Will |
| Jane |
| Bill |
| Zack |

### Explanation

Customers `Alex` and `Mark` were referred by the customer with `id = 2`, so they are excluded.

All other customers are included in the result.

## Solution

The SQL solution is available in `solution.sql`.