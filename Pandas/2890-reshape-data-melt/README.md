# 2890. Reshape Data: Melt

**Difficulty:** Easy

## Problem

Given a DataFrame containing `id`, `name`, and multiple value columns, transform the DataFrame from wide format to long format using `pd.melt()`.

Return the resulting DataFrame.

## Example

### Input

```text
+----+-------+------+------+ 
| id | name  | math | sci  |
+----+-------+------+------+ 
| 1  | Alice | 90   | 85   |
| 2  | Bob   | 80   | 88   |
+----+-------+------+------+