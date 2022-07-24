def containsDuplicate(nums: list[int]) -> bool:
    hashSet = set()

    for n in nums:
        if n in hashSet:
            return True
        hashSet.add(n)
    return False


nums = [4, 1, 74, 85, 456, 37, 76]
print(containsDuplicate(nums))

nums2 = [4, 4, 1, 74, 85, 456, 37, 76]
print(containsDuplicate(nums2))
