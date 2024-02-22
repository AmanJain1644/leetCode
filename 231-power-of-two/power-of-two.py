class Solution(object):
    def isPowerOfTwo(self, n):
        """
        :type n: int
        :rtype: bool
        """
        check=1
        while n>1 and n&check==0:
            n=n>>1
        return True if n==1 else False