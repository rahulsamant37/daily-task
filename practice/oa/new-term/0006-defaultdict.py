# defaultdict: dict that creates a default value for missing keys

from collections import defaultdict

words = ["tea", "eat", "tan", "ate", "nat", "bat"]

# group anagrams without checking "if key in dict"
groups = defaultdict(list)
for w in words:
    groups["".join(sorted(w))].append(w)
print(list(groups.values()))  # [['tea', 'eat', 'ate'], ['tan', 'nat'], ['bat']]

# counting
freq = defaultdict(int)
for ch in "mississippi":
    freq[ch] += 1
print(dict(freq))  # {'m': 1, 'i': 4, 's': 4, 'p': 2}

# gotcha: reading a missing key inserts it
d = defaultdict(int)
_ = d["x"]
print("x" in d)  # True
