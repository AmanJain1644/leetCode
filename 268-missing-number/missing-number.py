class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        sumi=0
        n=len(nums)
        orgsum=(n*(n+1))//2
        for i in nums:
            sumi+=i
        if sumi==orgsum:
            return 0
        return orgsum-sumi
        