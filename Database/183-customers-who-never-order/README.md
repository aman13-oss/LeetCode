# 183. Customers Who Never Order

**Difficulty:** Easy

## Problem

Table: `Customers`

| Column Name | Type |
|---|---|
| id | int |
| name | varchar |

`id` is the primary key column for this table.

Each row of this table indicates the ID and name of a customer.

Table: `Orders`

| Column Name | Type |
|---|---|
| id | int |
| customerId | int |

`id` is the primary key column for this table.

`customerId` is a foreign key referencing the `id` column of the `Customers` table.

## Task

Write a solution to find all customers who **never order anything**.

Return the result table in **any order**.

The result should contain the names of the customers who have never placed an order.

## Example 1

### Input

**Customers table:**

| id | name |
|---|---|
| 1 | Joe |
| 2 | Henry |
| 3 | Sam |
| 4 | Max |

**Orders table:**

| id | customerId |
|---|---|
| 1 | 3 |
| 2 | 1 |

### Output

| Customers |
|---|
| Henry |
| Max |

### Explanation

Joe and Sam have placed orders.

Henry and Max have never placed an order, so they are included in the result.

## Solution

The SQL solution is available in `solution.sql`.