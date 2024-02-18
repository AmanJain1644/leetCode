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
        dummy=ListNode()
        tail=dummy
        x=head
        while x:
            if x.val==val:
                x=x.next
            else:
                t=x.next
                tail.next=x
                x.next=None
                tail=tail.next
                x=t
        return dummy.next