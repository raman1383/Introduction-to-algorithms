def twoSum(nums: list[int], target: int) -> list[int]:
    prevMap = {}

    for i, n in enumerate(nums):
        diff = target - n
        if diff in prevMap:
            return [prevMap[diff], i]
        prevMap[n] = i
    return


nums = [2, 11, 15, 7]
target = 9

print(twoSum(nums, target))
