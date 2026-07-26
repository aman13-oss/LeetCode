# 1683. Invalid Tweets

**Difficulty:** Easy

## Problem

Table: `Tweets`

| Column Name | Type |
|---|---|
| tweet_id | int |
| content | varchar |

`tweet_id` is the primary key of this table.

Each row contains the content of a tweet.

## Task

Write a solution to find the IDs of the **invalid tweets**.

A tweet is considered invalid if the number of characters in its content is **strictly greater than 15**.

Return the result table in any order.

## Example

### Input

| tweet_id | content |
|---:|---|
| 1 | Let us Code |
| 2 | Everyone should code |

### Output

| tweet_id |
|---:|
| 2 |

### Explanation

Tweet `1` contains fewer than 15 characters.

Tweet `2` contains more than 15 characters, so it is invalid.

## Solution

The SQL solution is available in `solution.sql`.