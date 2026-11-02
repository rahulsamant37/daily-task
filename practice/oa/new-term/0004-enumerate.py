# enumerate: loop with index and value together, optional start offset

names = ["alice", "bob", "carol"]

for i, name in enumerate(names):
    print(i, name)

# start=1 is handy for 1-based ranks / line numbers
for rank, name in enumerate(names, start=1):
    print(f"{rank}. {name}")

# index of first element matching a condition
first_b = next((i for i, n in enumerate(names) if n.startswith("b")), -1)
print(first_b)  # 1
