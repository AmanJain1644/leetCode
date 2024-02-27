class Solution(object):
    def findTheDifference(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: str
        """
        s=sorted(s)
        t=sorted(t)
        n=len(s)
        m=len(t)
        i=0
        j=0
        while i<n and j<m:
            if s[i]!=t[i]:
                return t[i]
            i+=1
            j+=1
        return t[-1]