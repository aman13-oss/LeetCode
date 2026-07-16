# 1050. Actors and Directors Who Cooperated At Least Three Times

**Difficulty:** Easy

## Problem

Table: `ActorDirector`

| Column Name | Type |
|---|---|
| actor_id | int |
| director_id | int |
| timestamp | int |

`timestamp` is the primary key of this table.

Each row records an actor and director who cooperated on a movie.

## Task

Write a solution to find all pairs `(actor_id, director_id)` where the actor and director have cooperated at least **three times**.

Return the result table in any order.

## Example

### Input

| actor_id | director_id | timestamp |
|---:|---:|---:|
| 1 | 1 | 0 |
| 1 | 1 | 1 |
| 1 | 1 | 2 |
| 1 | 2 | 3 |
| 1 | 2 | 4 |
| 2 | 1 | 5 |

### Output

| actor_id | director_id |
|---:|---:|
| 1 | 1 |

### Explanation

Actor `1` and director `1` cooperated three times.

No other pair cooperated at least three times.

## Solution

The SQL solution is available in `solution.sql`.