class Solution(object):
    def mySqrt(self, x):
        """
        :type x: int
        :rtype: int
        """
        if x==0 or x==1:
            return x
        start=0
        end=x
        while start<=end:
            mid=start+(end-start)//2
            if mid*mid>x:
                 end=mid-1
            elif mid*mid<x:
                start=mid+1
                res=mid
            else:
                return mid
        return res

        