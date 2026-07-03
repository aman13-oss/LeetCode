# 181. Employees Earning More Than Their Managers

**Difficulty:** Easy

## Problem

Table: `Employee`

| Column Name | Type |
|---|---|
| id | int |
| name | varchar |
| salary | int |
| managerId | int |

`id` is the primary key column for this table.

Each row of this table indicates the ID, name, salary, and manager of an employee.

The `managerId` column contains the `id` of the employee's manager.

## Task

Write a solution to find the employees who earn **more than their managers**.

Return the result table in **any order**.

The result should contain the names of the employees who earn more than their managers.

## Example 1

### Input

**Employee table:**

| id | name | salary | managerId |
|---|---|---:|---:|
| 1 | Joe | 70000 | 3 |
| 2 | Henry | 80000 | 4 |
| 3 | Sam | 60000 | null |
| 4 | Max | 90000 | null |

### Output

| Employee |
|---|
| Joe |

### Explanation

Joe is the only employee who earns more than his manager.

- Joe earns `70000`, while Sam earns `60000`.
- Henry earns `80000`, while Max earns `90000`.

Therefore, Joe is the only employee who earns more than their manager.

## Solution

The SQL solution is available in `solution.sql`.