# 176. Second Highest Salary

**Difficulty:** Medium

## Problem

Table: `Employee`

| Column Name | Type |
|---|---|
| id | int |
| salary | int |

`id` is the primary key column for this table.

Each row of this table contains information about the salary of an employee.

Write a solution to find the **second highest distinct salary** from the `Employee` table.

If there is no second highest salary, return `null`.

## Example 1

### Input

**Employee table:**

| id | salary |
|---|---|
| 1 | 100 |
| 2 | 200 |
| 3 | 300 |

### Output

| SecondHighestSalary |
|---|
| 200 |

### Explanation

The highest salary is `300`, and the second highest distinct salary is `200`.

## Example 2

### Input

**Employee table:**

| id | salary |
|---|---|
| 1 | 100 |

### Output

| SecondHighestSalary |
|---|
| null |

### Explanation

There is only one distinct salary, so there is no second highest salary.

## Example 3

### Input

**Employee table:**

| id | salary |
|---|---|
| 1 | 100 |
| 2 | 100 |

### Output

| SecondHighestSalary |
|---|
| null |

### Explanation

There is only one distinct salary (`100`), so there is no second highest distinct salary.

## Requirements

- The salary must be **distinct**.
- Return the **second highest** salary.
- If no second highest salary exists, return `null`.

## Solution

The SQL solution is available in `solution.sql`.