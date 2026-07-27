# 1693. Daily Leads and Partners

**Difficulty:** Easy

## Problem

Table: `DailySales`

| Column Name | Type |
|---|---|
| date_id | date |
| make_name | varchar |
| lead_id | int |
| partner_id | int |

There may be duplicate entries in the table.

Each row contains information about a sale lead and partner for a specific date and product manufacturer.

## Task

For each `date_id` and `make_name`, report:

- The number of **distinct leads**
- The number of **distinct partners**

Return the result table in any order.

## Example

### Input

| date_id | make_name | lead_id | partner_id |
|---|---|---:|---:|
| 2020-12-8 | toyota | 0 | 1 |
| 2020-12-8 | toyota | 1 | 0 |
| 2020-12-8 | toyota | 1 | 0 |
| 2020-12-8 | honda | 0 | 1 |
| 2020-12-8 | honda | 1 | 2 |
| 2020-12-7 | toyota | 0 | 2 |
| 2020-12-7 | toyota | 0 | 1 |
| 2020-12-7 | toyota | 0 | 2 |

### Output

| date_id | make_name | unique_leads | unique_partners |
|---|---|---:|---:|
| 2020-12-7 | toyota | 1 | 2 |
| 2020-12-8 | honda | 2 | 2 |
| 2020-12-8 | toyota | 2 | 2 |

## Solution

The SQL solution is available in `solution.sql`.