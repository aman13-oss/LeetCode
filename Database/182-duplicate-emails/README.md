# 182. Duplicate Emails

**Difficulty:** Easy

## Problem

Table: `Person`

| Column Name | Type |
|---|---|
| id | int |
| email | varchar |

`id` is the primary key column for this table.

Each row of this table contains an email address. The email addresses will not contain uppercase letters.

## Task

Write a solution to report all the duplicate emails.

An email is considered a duplicate if it appears **more than once** in the `Person` table.

Return the result table in **any order**.

## Example 1

### Input

**Person table:**

| id | email |
|---|---|
| 1 | a@b.com |
| 2 | c@d.com |
| 3 | a@b.com |

### Output

| Email |
|---|
| a@b.com |

### Explanation

The email `a@b.com` occurs twice in the `Person` table, so it is reported as a duplicate.

The email `c@d.com` occurs only once, so it is not included in the result.

## Solution

The SQL solution is available in `solution.sql`.