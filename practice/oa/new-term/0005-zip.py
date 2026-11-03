# zip: iterate several iterables in parallel, stops at the shortest

ids = [101, 102, 103]
prices = [9.5, 12.0, 7.25]

for order_id, price in zip(ids, prices):
    print(order_id, price)

# build a dict from two lists
price_by_id = dict(zip(ids, prices))
print(price_by_id[102])  # 12.0

# unzip with the star operator
pairs = [(1, "a"), (2, "b"), (3, "c")]
nums, letters = zip(*pairs)
print(nums, letters)  # (1, 2, 3) ('a', 'b', 'c')

# strict=True raises if lengths differ (3.10+)
try:
    list(zip([1, 2], [1], strict=True))
except ValueError as e:
    print("length mismatch:", e)
