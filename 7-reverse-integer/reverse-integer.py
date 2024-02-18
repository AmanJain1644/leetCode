class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        max=2147483647
        l=max%10
        if x==0:
            return x
        org=x
        if x<0:
            x*=-1
        while not x%10:
            x//=10
        num=x
        rev=0
        while num:
            rev*=10
            rev+=num%10
            num//=10
        if rev>max:
            return 0
        if rev//10==max//10:
            if rev%10>max%10:
                return 0
        if org<0:
            rev*=-1
        
        return rev
        