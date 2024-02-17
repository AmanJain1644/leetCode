class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x<0:
            return False
        elif x>=0 and x<=9:
            return True
        elif not x%10:
            return False
        rev=0
        num=x
        while x:
            rev*=10
            rev+=x%10
            x//=10
        return rev==num
        