# 1965. Employees With Missing Information

**Difficulty:** Easy

## Problem

Write a solution to report the IDs of all the employees with missing information.

The information of an employee is missing if:

- The employee's name is missing, or
- The employee's salary is missing.

Return the result table in any order.

## Example

### Input

**Employees**

| employee_id | name |
|---|---|
| 2 | Crew |
| 4 | Haven |
| 5 | Kristian |

**Salaries**

| employee_id | salary |
|---|---:|
| 5 | 76071 |
| 1 | 22517 |
| 4 | 63539 |

### Output

| employee_id |
|---:|
| 1 |
| 2 |