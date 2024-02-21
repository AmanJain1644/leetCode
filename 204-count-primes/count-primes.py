class Solution(object):
    def countPrimes(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n==0 and n==1:
            return 0
        count=0
        prime=[True]*(n)
        i=2
        while i*i<=n:
            if prime[i]==True:
                j=i*i
                while j<n:
                    prime[j]=False
                    j+=i
            i+=1

        for i in range(2,n):
            if prime[i]:
                count+=1
        return count
