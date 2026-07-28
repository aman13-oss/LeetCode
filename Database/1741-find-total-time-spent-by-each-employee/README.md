# 1741. Find Total Time Spent by Each Employee

**Difficulty:** Easy

## Problem

Table: `Employees`

| Column Name | Type |
|---|---|
| emp_id | int |
| event_day | date |
| in_time | int |
| out_time | int |

`(emp_id, event_day, in_time)` is the primary key of this table.

Each row records the time an employee entered and left the office on a specific day.

## Task

Write a solution to calculate the **total time spent in the office** for each employee on each day.

The total time is calculated by summing:

`out_time - in_time`

for all events of the employee on that day.

Return the result table in any order.

## Example

### Input

| emp_id | event_day | in_time | out_time |
|---:|---|---:|---:|
| 1 | 2020-11-28 | 4 | 32 |
| 1 | 2020-11-28 | 55 | 200 |
| 1 | 2020-12-03 | 1 | 42 |
| 2 | 2020-11-28 | 3 | 33 |
| 2 | 2020-12-09 | 47 | 74 |

### Output

| event_day | emp_id | total_time |
|---|---:|---:|
| 2020-11-28 | 1 | 173 |
| 2020-12-03 | 1 | 41 |
| 2020-11-28 | 2 | 30 |
| 2020-12-09 | 2 | 27 |

## Solution

The SQL solution is available in `solution.sql`.