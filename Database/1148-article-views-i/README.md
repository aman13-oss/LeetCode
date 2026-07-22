# 1148. Article Views I

**Difficulty:** Easy

## Problem

Table: `Views`

| Column Name | Type |
|---|---|
| article_id | int |
| author_id | int |
| viewer_id | int |
| view_date | date |

There is no primary key for this table, so duplicate rows may exist.

Each row indicates that some viewer viewed an article written by some author on a certain date.

## Task

Write a solution to find all authors that viewed at least one of their own articles.

Return the result table sorted by `id` in ascending order.

## Example

### Input

| article_id | author_id | viewer_id | view_date |
|---:|---:|---:|---|
| 1 | 3 | 5 | 2019-08-01 |
| 1 | 3 | 6 | 2019-08-02 |
| 2 | 7 | 7 | 2019-08-01 |
| 2 | 7 | 6 | 2019-08-02 |
| 4 | 7 | 1 | 2019-07-22 |
| 3 | 4 | 4 | 2019-07-21 |
| 3 | 4 | 4 | 2019-07-21 |

### Output

| id |
|---:|
| 4 |
| 7 |

## Solution

The SQL solution is available in `solution.sql`.