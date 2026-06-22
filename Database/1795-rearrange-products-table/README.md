# 1795. Rearrange Products Table

**Difficulty:** Easy

## Problem

Write a solution to rearrange the products table so that each row represents a product and its price for a particular store.

The result should contain the columns:

- `product_id`
- `store`
- `price`

Return the result table in any order.

## Example

### Input

**Products**

| product_id | store1 | store2 | store3 |
|---:|---:|---:|---:|
| 0 | 95 | 100 | 105 |
| 1 | 70 | null | 80 |

### Output

| product_id | store | price |
|---:|:---|---:|
| 0 | store1 | 95 |
| 0 | store2 | 100 |
| 0 | store3 | 105 |
| 1 | store1 | 70 |
| 1 | store3 | 80 |