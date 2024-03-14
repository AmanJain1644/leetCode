class Solution(object):
    def maxProfit(self, prices, fee):
        n=len(prices)
        minv,maxv=1000000,0
        maxprofit=0
        for i in range(n):
            if maxv > prices[i]+fee:
                maxprofit+=max(0,maxv-minv-fee)
                minv=maxv=prices[i]
            else:
                minv=min(minv,prices[i])
                maxv=max(maxv,prices[i])
        maxprofit+=max(0,maxv-minv-fee)
        return maxprofit