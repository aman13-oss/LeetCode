# 595. Big Countries

**Difficulty:** Easy

## Problem

Table: `World`

| Column Name | Type |
|---|---|
| name | varchar |
| continent | varchar |
| area | int |
| population | int |
| gdp | bigint |

`name` is the primary key of this table.

Each row provides information about a country.

## Task

A country is considered **big** if:

- It has an area of at least `3,000,000 km²`, OR
- It has a population of at least `25,000,000`.

Write a solution to report the name, population, and area of the big countries.

Return the result table in any order.

## Example

### Input

| name | continent | area | population | gdp |
|---|---|---:|---:|---:|
| Afghanistan | Asia | 652230 | 25500100 | 20343000000 |
| Albania | Europe | 28748 | 2831741 | 12960000000 |
| Algeria | Africa | 2381741 | 37100000 | 188681000000 |
| Andorra | Europe | 468 | 78115 | 3712000000 |
| Angola | Africa | 1246700 | 20609294 | 100990000000 |

### Output

| name | population | area |
|---|---:|---:|
| Afghanistan | 25500100 | 652230 |

## Solution

The SQL solution is available in `solution.sql`.