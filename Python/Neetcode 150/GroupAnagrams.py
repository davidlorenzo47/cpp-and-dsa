from collections import defaultdict
def ip(arr):
    my_dict = defaultdict(list)
    results = []

    for i in arr:
        sorted_item = tuple(sorted(i))
        my_dict[sorted_item].append(i)

    for i in my_dict.values():
        results.append(i)

    return results


arr = ["eat","tea","tan","ate","nat","bat"]
print(ip(arr))