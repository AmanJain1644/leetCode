class Solution(object):
    def mySqrt(self, x):
        """
        :type x: int
        :rtype: int
        """
        if x==0:
            return 0
        elif x==1:
            return 1
        i=1
        while i*i<=x:
            i+=1
        return i-1