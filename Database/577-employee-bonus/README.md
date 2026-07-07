# 577. Employee Bonus

**Difficulty:** Easy

## Problem

Table: `Employee`

| Column Name | Type |
|---|---|
| empId | int |
| name | varchar |
| supervisor | int |
| salary | int |

`empId` is the primary key column for this table.

Each row of this table contains information about an employee, including their name, supervisor, and salary.

Table: `Bonus`

| Column Name | Type |
|---|---|
| empId | int |
| bonus | int |

`empId` is the primary key column for this table.

`empId` is a foreign key referencing the `empId` column of the `Employee` table.

## Task

Write a solution to report the name and bonus amount of each employee who satisfies **either** of the following conditions:

- The employee has a bonus **less than 1000**.
- The employee has **no bonus**.

Return the result table in **any order**.

## Example 1

### Input

**Employee table:**

| empId | name | supervisor | salary |
|---|---|---|---:|
| 3 | Brad | null | 4000 |
| 1 | John | 3 | 1000 |
| 2 | Dan | 3 | 2000 |
| 4 | Thomas | 3 | 4000 |

**Bonus table:**

| empId | bonus |
|---|---:|
| 2 | 500 |
| 4 | 2000 |

### Output

| name | bonus |
|---|---:|
| Brad | null |
| John | null |
| Dan | 500 |

### Explanation

- Brad has no bonus.
- John has no bonus.
- Dan has a bonus of `500`, which is less than `1000`.
- Thomas has a bonus of `2000`, so he is not included.

## Solution

The SQL solution is available in `solution.sql`.