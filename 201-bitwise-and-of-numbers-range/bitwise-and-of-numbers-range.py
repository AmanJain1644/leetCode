class Solution(object):
    def rangeBitwiseAnd(self, left, right):
        """
        :type left: int
        :type right: int
        :rtype: int
        """
        c=0
        while left!=right:
            left//=2
            right//=2
            c+=1
        return left<<c