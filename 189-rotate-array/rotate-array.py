class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        n=len(nums)
        k%=n
        ans=[0]*n
        for i in range(k):
            ans[k-1-i]=nums[n-1-i]
        for i in range(n-k):
            ans[k+i]=nums[i]
        for i in range(n):
            nums[i]=ans[i]
        
        