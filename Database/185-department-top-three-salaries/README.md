# 185. Department Top Three Salaries

**Difficulty:** Hard

## Problem

A company's executives are interested in seeing who earns the most money in each of the company's departments.

A high earner in a department is an employee who has a salary in the top three unique salaries for that department.

Write a solution to find the employees who are high earners in each of the departments.

Return the result table in any order.

## Example

### Input

**Employee**

| id | name | salary | departmentId |
|---|---|---:|---:|
| 1 | Joe | 85000 | 1 |
| 2 | Henry | 80000 | 2 |
| 3 | Sam | 60000 | 2 |
| 4 | Max | 90000 | 1 |
| 5 | Janet | 69000 | 1 |
| 6 | Randy | 85000 | 1 |
| 7 | Will | 70000 | 1 |

**Department**

| id | name |
|---|---|
| 1 | IT |
| 2 | Sales |

### Output

| Department | Employee | Salary |
|---|---|---:|
| IT | Max | 90000 |
| IT | Joe | 85000 |
| IT | Randy | 85000 |
| IT | Janet | 69000 |
| Sales | Henry | 80000 |
| Sales | Sam | 60000 |

## Solution

The solution is implemented in `solution.sql`.