# 620. Not Boring Movies

**Difficulty:** Easy

## Problem

Table: `Cinema`

| Column Name | Type |
|---|---|
| id | int |
| movie | varchar |
| description | varchar |
| rating | float |

`id` is the primary key of this table.

Each row contains information about a movie.

## Task

Write a solution to report the movies with:

- An odd-numbered `id`
- A description that is not `"boring"`

Return the result table ordered by `rating` in descending order.

## Example

### Input

| id | movie | description | rating |
|---:|---|---|---:|
| 1 | War | great 3D | 8.9 |
| 2 | Science | fiction | 8.5 |
| 3 | Irish | boring | 6.2 |
| 4 | Ice song | Fantacy | 8.6 |
| 5 | House card | Interesting | 9.1 |

### Output

| id | movie | description | rating |
|---:|---|---|---:|
| 5 | House card | Interesting | 9.1 |
| 1 | War | great 3D | 8.9 |

## Solution

The SQL solution is available in `solution.sql`.