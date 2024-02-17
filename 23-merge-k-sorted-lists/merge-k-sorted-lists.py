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
        if lists==[]:
            return

        n=len(lists)
        i=1
        while i<n:
            if not lists[i]:
                i+=1
                continue
            if not lists[0]:
                lists[0]=lists[i]
                i+=1
                if i==n:
                    return lists[0]
                if not lists[i]:
                    continue
            if not lists[0]:
                return

            if lists[0].val>lists[i].val:
                t=lists[0]
                v=lists[i].next
                lists[0]=lists[i]
                lists[i]=v
                lists[0].next=t

            x=lists[0]
            temp=lists[i]    
            
            while temp and x.next:
                y=temp
                
                if y.val<x.next.val:
                    t=x.next
                    x.next=y
                    temp=temp.next
                    y.next=t
                x=x.next
    
            if temp:
                x.next=temp
            i+=1

    

        return lists[0]
