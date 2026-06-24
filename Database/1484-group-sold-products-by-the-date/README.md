# 1484. Group Sold Products By The Date

**Difficulty:** Easy

## Problem

Write a solution to find for each date the number of different products sold and the names of those products.

The product names for each date should be sorted lexicographically.

Return the result table ordered by `sell_date`.

## Example

### Input

**Activities**

| sell_date | product |
|:---|:---|
| 2020-05-30 | Headphone |
| 2020-05-30 | Pencil |
| 2020-05-30 | Mask |
| 2020-06-01 | Mask |
| 2020-06-01 | Pencil |

### Output

| sell_date | num_sold | products |
|:---|---:|:---|
| 2020-05-30 | 3 | Headphone,Mask,Pencil |
| 2020-06-01 | 2 | Mask,Pencil |