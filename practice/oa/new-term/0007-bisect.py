# bisect: binary search on a sorted list

from bisect import bisect_left, bisect_right, insort

a = [1, 3, 3, 3, 7, 9]

print(bisect_left(a, 3))   # 1 -> first index with a[i] >= 3
print(bisect_right(a, 3))  # 4 -> first index with a[i] > 3

# count of occurrences of x in O(log n)
print(bisect_right(a, 3) - bisect_left(a, 3))  # 3

# number of elements strictly less than x
print(bisect_left(a, 8))  # 5

# insert while keeping the list sorted (O(n) because of the shift)
insort(a, 5)
print(a)  # [1, 3, 3, 3, 5, 7, 9]
