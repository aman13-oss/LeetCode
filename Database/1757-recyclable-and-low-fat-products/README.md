# 1757. Recyclable and Low Fat Products

**Difficulty:** Easy

## Problem

Table: `Products`

| Column Name | Type |
|---|---|
| product_id | int |
| low_fats | enum |
| recyclable | enum |

`product_id` is the primary key of this table.

The `low_fats` column contains either `Y` or `N`.

The `recyclable` column contains either `Y` or `N`.

## Task

Write a solution to find the IDs of products that are both:

- **Low fat**
- **Recyclable**

Return the result table in any order.

## Example

### Input

| product_id | low_fats | recyclable |
|---:|---|---|
| 0 | Y | N |
| 1 | Y | Y |
| 2 | N | Y |
| 3 | Y | Y |
| 4 | N | N |

### Output

| product_id |
|---:|
| 1 |
| 3 |

### Explanation

Products `1` and `3` are both low fat and recyclable.

## Solution

The SQL solution is available in `solution.sql`.