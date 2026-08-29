# 4036. Lexicographically Largest String After Pair Transformations

## Problem

You are given an integer array `nums`.

For each integer `x` in `nums`, start with a string consisting of exactly `x` lowercase `'a'` characters.

You may perform the following operation any number of times (including zero):

- Choose two **adjacent equal** letters and replace them with the next letter in the alphabet.
- For example, `"aa"` can be replaced with `"b"`, and `"bb"` can be replaced with `"c"`.
- The pair `"zz"` cannot be replaced.

For each `x`, determine the **lexicographically largest** string that can be obtained.

Return an array of strings where the `ith` string is the answer for `nums[i]`.

A string `a` is lexicographically larger than a string `b` if, at the first position where they differ, `a` contains a letter that appears later in the alphabet than the corresponding letter in `b`. If the first `min(a.length, b.length)` characters are equal, the longer string is lexicographically larger.

## Example 1

**Input:**

`nums = [2,5,7]`

**Output:**

`["b","ca","cba"]`

**Explanation:**

- `nums[0] = 2`: `"aa"` → `"b"`.
- `nums[1] = 5`: `"aaaaa"` → `"baaa"` → `"bba"` → `"ca"`.
- `nums[2] = 7`: `"aaaaaaa"` → `"baaaaa"` → `"bbaaa"` → `"bbba"` → `"cba"`.

Therefore, `ans = ["b", "ca", "cba"]`.

## Example 2

**Input:**

`nums = [3,9,1]`

**Output:**

`["ba","da","a"]`

**Explanation:**

- `nums[0] = 3`: `"aaa"` → `"ba"`.
- `nums[1] = 9`: `"aaaaaaaaa"` → `"baaaaaaa"` → `"bbaaaaa"` → `"bbbaaa"` → `"bbbba"` → `"cbba"` → `"cca"` → `"da"`.
- `nums[2] = 1`: No transformation can be applied, so the result is `"a"`.

Therefore, `ans = ["ba", "da", "a"]`.

## Constraints

- `1 <= nums.length <= 10^5`
- `1 <= nums[i] <= 10^8`

## Approach

For each number `x`, start with `x` characters `'a'`.

Two equal characters can be combined to form the next character:

- `aa` → `b`
- `bb` → `c`
- `cc` → `d`
- and so on.

The process is similar to carrying in binary representation. We repeatedly combine pairs and construct the lexicographically largest possible string.

## Complexity

- Time: O(n log(max(nums)))
- Space: O(log(max(nums)))

## Performance

- **Accepted:** 999 / 999 testcases passed
- **Submitted:** Aug 29, 2026 20:27
- **Runtime:** 315 ms — Beats **33.33%**
- **Memory:** 216.16 MB — Beats **33.33%**