class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        m = {}
        for index , value in enumerate(nums):
            d = target - value
            if len(m) > 0 and m.get(d) != None:
                return [m[d],index]
            else:
                m[value] = index
        return []