# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def mergeKLists(self, lists):
        """
        :type lists: List[ListNode]
        :rtype: ListNode
        """
        n=len(lists)
        if not lists or n==0:
            return 
        elif n==1:
            return lists[0]
        while len(lists)>1:
            mergeList=[]
            for i in range(0,len(lists),2):
                l1=lists[i]
                l2=lists[i+1] if (i+1)<len(lists) else None
                mergeList.append(self.merge(l1,l2)) 
            lists=mergeList
        return lists[0]

    def merge(self,l1,l2):
        dummy=ListNode()
        tail=dummy
        x=l1
        y=l2
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