# 1179. Reformat Department Table

**Difficulty:** Easy

## Problem

Reformat the table so that there is a department row for each department and a column for each month.

Each row should contain the department ID and the revenue for January through December.

If there is no revenue for a particular month, the value should be `null`.

Return the result table in any order.

## Example

### Input

**Department**

| id | revenue | month |
|---:|---:|:---|
| 1 | 8000 | Jan |
| 2 | 9000 | Jan |
| 3 | 10000 | Feb |
| 1 | 7000 | Feb |

### Output

| id | Jan_Revenue | Feb_Revenue |
|---:|---:|---:|
| 1 | 8000 | 7000 |
| 2 | 9000 | null |
| 3 | null | 10000 |