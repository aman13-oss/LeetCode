# 1789. Primary Department for Each Employee

**Difficulty:** Easy

## Problem

Employees can belong to multiple departments. When an employee belongs to only one department, their primary department is that department.

When an employee belongs to multiple departments, their primary department is the department where `primary_flag` is `Y`.

Write a solution to report the primary department for each employee.

Return the result table in any order.

## Example

### Input

**Employee**

| employee_id | department_id | primary_flag |
|---:|---:|:---:|
| 1 | 1 | N |
| 1 | 2 | Y |
| 2 | 1 | Y |
| 3 | 3 | N |
| 3 | 4 | N |

### Output

| employee_id | department_id |
|---:|---:|
| 1 | 2 |
| 2 | 1 |
| 3 | 3 |
| 3 | 4 |