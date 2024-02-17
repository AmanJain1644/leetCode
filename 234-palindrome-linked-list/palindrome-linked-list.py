# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def isPalindrome(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        fast=head
        slow=head
        while fast and fast.next:
            fast=fast.next.next
            slow=slow.next

        prev=None
        while slow:
            t=slow.next
            slow.next=prev
            prev=slow
            slow=t
        
        left=head
        right=prev
        while right:
            if not left.val == right.val:
                return False
            left=left.next
            right=right.next
        return True
            

        