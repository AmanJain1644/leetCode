# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def removeNthFromEnd(self, head, n):
        """
        :type head: ListNode
        :type n: int
        :rtype: ListNode
        """
        l=0
        x=head
        while x:
            l+=1
            x=x.next
        n=l-n+1
        count=2
        if n==1:
            x=head
            head=x.next
            x.next=None
            return head
        x=head
        while x:
            if count==n:
                t=x.next
                x.next=t.next
                t.next=None
            x=x.next
            count+=1
        
        return head

        
        
        


        