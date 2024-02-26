class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        nums.sort()
        ans=[]
        n=len(nums)
        if n==2:
            return nums
        if nums[n-1]!=nums[n-2]:
            ans.append(nums[n-1])
        i=1
        while i<n and len(ans)<2:
            if nums[i-1]!=nums[i]:
                ans.append(nums[i-1])
                i+=1
            else:
                i+=2
        return ans

    
    