# 2882. Drop Duplicate Rows

**Difficulty:** Easy

## Problem

Given a DataFrame `customers` with columns `customer_id`, `name`, and `email`, remove all duplicate rows based on the `email` column.

Keep only the first occurrence of each email.

Return the resulting DataFrame.

## Example

### Input

```text
+-------------+-------+----------------+
| customer_id | name  | email          |
+-------------+-------+----------------+
| 1           | John  | john@email.com |
| 2           | Alice | alice@email.com|
| 3           | John  | john@email.com |
+-------------+-------+----------------+