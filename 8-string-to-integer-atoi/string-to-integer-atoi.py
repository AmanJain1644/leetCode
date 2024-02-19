class Solution(object):
    def myAtoi(self, s):
        """
        :type s: str
        :rtype: int
        """
        s=s.strip()
        if not s:
            return 0
        ch=False
        num=0
        if s[0]=='-':
            ch=True
        elif s[0]=='+':
            ch=False
        elif not s[0].isnumeric():
            return 0
        else:
            num=ord(s[0])-ord('0')
        for i in range(1,len(s)):
            if s[i].isnumeric():
                num*=10
                num+=ord(s[i])-ord('0')
                if not ch and num>=2147483647:
                    return 2147483647
                if ch and num>=2147483648:
                    return -2147483648
            else:
                break
        if ch:
            num*=-1
        return num
