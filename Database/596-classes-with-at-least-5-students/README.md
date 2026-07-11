# 596. Classes With at Least 5 Students

**Difficulty:** Easy

## Problem

Table: `Courses`

| Column Name | Type |
|---|---|
| student | varchar |
| class | varchar |

`(student, class)` is the primary key of this table.

Each row indicates the name of a student and the class they are enrolled in.

## Task

Write a solution to find all the classes that have **at least 5 students**.

Return the result table in any order.

## Example

### Input

| student | class |
|---|---|
| A | Math |
| B | English |
| C | Math |
| D | Biology |
| E | Math |
| F | Math |
| G | Computer |
| H | Math |
| I | Math |

### Output

| class |
|---|
| Math |

### Explanation

The Math class has at least 5 students, so it is included in the result.

## Solution

The SQL solution is available in `solution.sql`.