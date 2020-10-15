class Solution {
    public ListNode mergeKLists(ListNode[] lists) {
        if(lists == null || lists.length == 0){
            return null;
        }
        int len = lists.length;
        
        int i = 0;
        int j = len - 1;
        
        
        while(i < j){
            lists[i] = merge2(lists[i] , lists[j]);
            i++;
            j--;
            if(i >= j){
                i = 0;
            }
        }
        
        return lists[0];
    }
    
    
    public ListNode merge2(ListNode a, ListNode b){
        ListNode dummy = new ListNode(-1);
        ListNode head = dummy;
        
        while(a != null && b != null){
            if(a.val < b.val){
                head.next = a;
                a = a.next;
            }else{
                head.next = b; 
                b = b.next;
            }
            head = head.next;
        }
        
        if(a != null){
            head.next = a;
        }
        else if(b != null){
            head.next = b;
        }
        
        return dummy.next;
    }
}
