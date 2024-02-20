class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n=len(nums)
        if n==1:
            return nums[0]
        ans=nums[0]
        for i in range(1,n):
            ans^=nums[i]
        return ans