# 627. Swap Sex of Employees

**Difficulty:** Easy

## Problem

Table: `Salary`

| Column Name | Type |
|---|---|
| id | int |
| name | varchar |
| sex | ENUM |
| salary | int |

`id` is the primary key column for this table.

The `sex` column contains either `m` or `f`.

## Task

Write a solution to swap all `f` and `m` values.

You must do this using a single `UPDATE` statement and without creating an intermediate table.

## Example

### Input

| id | name | sex | salary |
|---:|---|---|---:|
| 1 | A | m | 2500 |
| 2 | B | f | 1500 |
| 3 | C | m | 5500 |
| 4 | D | f | 500 |

### Output

| id | name | sex | salary |
|---:|---|---|---:|
| 1 | A | f | 2500 |
| 2 | B | m | 1500 |
| 3 | C | f | 5500 |
| 4 | D | m | 500 |

## Solution

The SQL solution is available in `solution.sql`.