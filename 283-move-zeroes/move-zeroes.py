class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        n=len(nums)
        nz=0
        for i in range(n):
            if nums[i]:
                nums[nz],nums[i]=nums[i],nums[nz]
                nz+=1