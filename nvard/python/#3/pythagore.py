#!/usr/bin/env python3
list = [(i, j, k) for i in range(1, 28) for j in range(i + 1, 29) for k in range(i + 2, 30) if k ** 2 == i ** 2 + j ** 2]
print(list)
