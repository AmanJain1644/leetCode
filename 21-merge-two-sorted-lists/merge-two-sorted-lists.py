# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def mergeTwoLists(self, list1, list2):
        """
        :type list1: Optional[ListNode]
        :type list2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        dummy=ListNode()
        tail=dummy
        x=list1
        y=list2
        while x and y:
            if x.val<y.val:
                t=x.next
                tail.next=x
                x=t
                tail=tail.next
            else:
                t=y.next
                tail.next=y
                y=t
                tail=tail.next
        if x:
            tail.next=x
        elif y:
            tail.next=y
        return dummy.next
        