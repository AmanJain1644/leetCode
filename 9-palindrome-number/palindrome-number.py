class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x==0:
            return True
            
        if x<0 or not x%10:
            return False
        if x==0:
            return True

        if x>=0 and x<=9:
            return True
        num=[]
        while x:
            num.append(x%10)
            x//=10
        n=len(num)
        for i in range((n//2)+1):
            if not num[i]==num[n-i-1]:
                return False
        return True
        
        
