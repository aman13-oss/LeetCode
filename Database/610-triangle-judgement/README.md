# 610. Triangle Judgement

**Difficulty:** Easy

## Problem

Table: `Triangle`

| Column Name | Type |
|---|---|
| x | int |
| y | int |
| z | int |

`(x, y, z)` is the primary key of this table.

Each row contains three line segments.

## Task

For each row, determine whether the three line segments can form a triangle.

Return the result table in any order.

The result should contain the original `x`, `y`, `z` values and an additional column named `triangle`.

The value of `triangle` should be `Yes` if the three sides can form a triangle, otherwise `No`.

## Example

### Input

| x | y | z |
|---:|---:|---:|
| 13 | 15 | 30 |
| 10 | 20 | 15 |

### Output

| x | y | z | triangle |
|---:|---:|---:|---|
| 13 | 15 | 30 | No |
| 10 | 20 | 15 | Yes |

## Solution

The SQL solution is available in `solution.sql`.