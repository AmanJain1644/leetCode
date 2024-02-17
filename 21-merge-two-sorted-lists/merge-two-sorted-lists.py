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
        if not list1 and not list2:
            return
        elif not list1:
            return list2
        elif not list2:
            return list1
        if list2.val<list1.val:
            t=list1
            v=list2.next
            list1=list2
            list1.next=t
            list2=v

        x=list1
        y=list2
        while y and x.next:
            temp=y
            if temp.val<x.next.val:
                t=x.next
                x.next=temp
                y=y.next
                temp.next=t
            x=x.next
        
        if y:
            x.next=y
        return list1

        