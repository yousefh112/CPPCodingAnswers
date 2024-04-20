### Problem Statement: One Prime

**Problem Description:**
Given a number \(X\), determine if the number is prime or not.

**Note:**
A prime number is a number that is greater than 1 and has only two factors which are 1 and itself. In other words, a prime number is divisible only by 1 and itself. Be careful that 1 is not considered prime.

**Input:**
- Only one line containing a number \(X\) (2 ≤ \(X\) ≤ \(10^5\)).

**Output:**
- Print "YES" if the number is prime, and "NO" otherwise.

**Examples:**
```
input
7
output
YES

input
15
output
NO
```

**Explanation:**
- For the first example, \(7\) is prime because it is not divisible by any number except \(1\) and itself.
- For the second example, \(15\) is not prime because it is divisible by \(3\) and \(5\).

---

This problem can be solved by checking if the given number has any divisors other than \(1\) and itself. If it does not have any other divisors, then it is prime, otherwise it is not prime.