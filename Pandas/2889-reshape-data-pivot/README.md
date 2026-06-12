# 2889. Reshape Data: Pivot

**Difficulty:** Easy

## Problem

Given a DataFrame containing `date`, `name`, and `value`, reshape the data using `date` as the index and `name` as columns.

The values should come from the `value` column.

Return the pivoted DataFrame.

## Example

### Input

```text
+------------+-------+-------+
| date       | name  | value |
+------------+-------+-------+
| 2024-01-01 | A     | 10    |
| 2024-01-01 | B     | 20    |
| 2024-01-02 | A     | 30    |
+------------+-------+-------+