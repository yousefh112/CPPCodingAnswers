# Problem Statement: Katryoshka

The Egyptian football team is in Russia for the World Cup, and they want to buy souvenirs for their families. Fortunately, they've encountered the king of souvenirs, Matryoshka, renowned for his masterpiece Katryoshka. Matryoshka is crafted using different wooden pieces: eyes, mouths, and bodies. There are three combinations to create a Katryoshka:

1. Two eyes and one body.
2. Two eyes, one mouth, and one body.
3. One eye, one mouth, and one body.

If the king has n eyes, m mouths, and k bodies, what is the largest number of Katryoshkas he can make?

## Input
- Only one line containing three numbers n, m, and k (0 ≤ n, m, k ≤ 10^18) – the number of eyes, mouths, and bodies, respectively.

## Output
- Print the largest number of Katryoshkas he can make.

## Examples
### Example 1
#### Input
```
1 2 3
```
#### Output
```
1
```
### Example 2
#### Input
```
0 11 2
```
#### Output
```
0
```
### Example 3
#### Input
```
90 24 89
```
#### Output
```
57
```

In the first example, the king can create one Katryoshka using two eyes and one body.

In the second example, there are not enough eyes to create even a single Katryoshka.

In the third example, the king can create 57 Katryoshkas using the available eyes, mouths, and bodies.