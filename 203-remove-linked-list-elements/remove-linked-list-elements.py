# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def removeElements(self, head, val):
        """
        :type head: ListNode
        :type val: int
        :rtype: ListNode
        """
        if not head:
            return
        x=head
        while x.next:

            if x.next.val==val:
                t=x.next
                x.next=t.next
                t.next=None   
            else: 
                x=x.next
        if head.val==val:
            head=head.next

        return head
    