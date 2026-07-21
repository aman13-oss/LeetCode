# 1068. Product Sales Analysis I

**Difficulty:** Easy

## Problem

Table: `Sales`

| Column Name | Type |
|---|---|
| seller_id | int |
| product_id | int |
| buyer_id | int |
| sale_date | date |
| quantity | int |
| price | int |

This table contains information about product sales.

Table: `Product`

| Column Name | Type |
|---|---|
| product_id | int |
| product_name | varchar |
| unit_price | int |

`product_id` is the primary key of this table.

## Task

Write a solution to report the `product_name`, `year`, and `price` for each sale.

Return the result table in any order.

## Example

### Input

Sales:

| seller_id | product_id | buyer_id | sale_date | quantity | price |
|---:|---:|---:|---|---:|---:|
| 1 | 100 | 1 | 2008-12-01 | 10 | 5000 |
| 1 | 200 | 2 | 2009-01-01 | 1 | 1000 |

Product:

| product_id | product_name | unit_price |
|---:|---|---:|
| 100 | Nokia | 100 |
| 200 | Apple | 1000 |

### Output

| product_name | year | price |
|---|---:|---:|
| Nokia | 2008 | 5000 |
| Apple | 2009 | 1000 |

## Solution

The SQL solution is available in `solution.sql`.