# 2879. Display the First Three Rows

## Problem

Given a DataFrame `employees`, display the first 3 rows of the DataFrame.

## Example

Input:

| employee_id | name      | department  | salary |
|-------------|-----------|-------------|--------|
| 3           | Bob       | Operations  | 48675  |
| 90          | Alice     | Sales       | 11096  |
| 9           | Tatiana   | Engineering | 33805  |
| 60          | Annabelle | InformationTechnology | 37678 |
| 49          | Jonathan  | HumanResources | 23793 |
| 43          | Khaled    | Administration | 40454 |

Output:

| employee_id | name    | department  | salary |
|-------------|---------|-------------|--------|
| 3           | Bob     | Operations  | 48675  |
| 90          | Alice   | Sales       | 11096  |
| 9           | Tatiana | Engineering | 33805  |

## Approach

Use the Pandas `head()` method to select the first 3 rows of the DataFrame.

```python
employees.head(3)