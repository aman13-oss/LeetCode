# 175. Combine Two Tables

**Difficulty:** Easy

## Problem

Table: `Person`

| Column Name | Type |
|---|---|
| personId | int |
| lastName | varchar |
| firstName | varchar |

`personId` is the primary key column for this table.

Table: `Address`

| Column Name | Type |
|---|---|
| addressId | int |
| personId | int |
| city | varchar |
| state | varchar |

`addressId` is the primary key column for this table.

`personId` is a foreign key of `Address` referencing the `personId` of `Person`.

Each row of this table contains information about the address of a person.

## Task

Write a solution to report the following information for each person in the `Person` table:

- `firstName`
- `lastName`
- `city`
- `state`

If the address of a `personId` is not present in the `Address` table, report `null` instead.

Return the result table in **any order**.

## Example 1

### Input

**Person table:**

| personId | lastName | firstName |
|---|---|---|
| 1 | Wang | Allen |
| 2 | Alice | Bob |

**Address table:**

| addressId | personId | city | state |
|---|---|---|---|
| 1 | 2 | New York City | New York |
| 2 | 3 | Leetcode | California |

### Output

| firstName | lastName | city | state |
|---|---|---|---|
| Allen | Wang | null | null |
| Bob | Alice | New York City | New York |

### Explanation

There is no address information for `personId = 1`, so the result contains `null` for the city and state.

The address information for `personId = 2` is available, so its city and state are returned.

## Approach

Use a `LEFT JOIN` between the `Person` and `Address` tables using `personId`.

A `LEFT JOIN` ensures that **every person** from the `Person` table is included, even if they do not have a corresponding address.

## Solution

The SQL solution is available in `solution.sql`.