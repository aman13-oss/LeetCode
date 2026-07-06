# 511. Game Play Analysis I

**Difficulty:** Easy

## Problem

Table: `Activity`

| Column Name | Type |
|---|---|
| player_id | int |
| device_id | int |
| event_date | date |
| games_played | int |

`(player_id, event_date)` is the primary key of this table.

This table shows the activity of players of some games.

Each row records a player who logged in and played a number of games (`games_played`) on a specific day using a specific device.

## Task

Write a solution to report the **first login date for each player**.

Return the result table in any order.

## Example 1

### Input

**Activity table:**

| player_id | device_id | event_date | games_played |
|---|---:|---|---:|
| 1 | 2 | 2016-03-01 | 5 |
| 1 | 2 | 2016-05-02 | 6 |
| 2 | 3 | 2017-06-25 | 1 |
| 3 | 1 | 2016-03-02 | 0 |
| 3 | 4 | 2018-07-03 | 5 |

### Output

| player_id | first_login |
|---|---|
| 1 | 2016-03-01 |
| 2 | 2017-06-25 |
| 3 | 2016-03-02 |

## Explanation

- Player `1` first logged in on `2016-03-01`.
- Player `2` first logged in on `2017-06-25`.
- Player `3` first logged in on `2016-03-02`.

## Solution

The SQL solution is available in `solution.sql`.