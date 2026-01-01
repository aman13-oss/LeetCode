# 3498. Reverse Degree of a String

**Difficulty:** Easy

## Problem

Given a string `s`, calculate its reverse degree.

The reverse degree of a string is calculated as follows:

- The reverse alphabetical value of a letter is `26 - (alphabetical position of the letter) + 1`.
- For each character in the string, multiply its reverse alphabetical value by its position in the string, where the first character has position `1`.
- Return the sum of these values.

### Example 1

**Input:**
```text
s = "abc"