# lru_cache: memoize a function by its arguments (arguments must be hashable)

from functools import lru_cache


@lru_cache(maxsize=None)
def fib(n: int) -> int:
    return n if n < 2 else fib(n - 1) + fib(n - 2)


print(fib(80))  # 23416728348467685
print(fib.cache_info())  # hits / misses / current size

# top-down dp: number of paths in a grid
@lru_cache(maxsize=None)
def paths(r: int, c: int) -> int:
    if r == 0 or c == 0:
        return 1
    return paths(r - 1, c) + paths(r, c - 1)


print(paths(10, 10))  # 184756

fib.cache_clear()  # reset between test cases if the function depends on globals
