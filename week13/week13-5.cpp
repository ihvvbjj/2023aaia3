class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ///ListNode* ans=new list1;
        ///ListNode* ans=new ListNode(99); �s�W��99
        ListNode* ans=new ListNode();
        ListNode* now=ans ;
        while(list1 !=nullptr || list2 !=nullptr){
            if(list1==nullptr){
                now->next=list2;
                list2 = nullptr;
            }else if(list2==nullptr){
                now->next=list1;
                list1 = nullptr;
            }
            else if(list1->val <list2->val){
                now->next = new ListNode(list1->val);
                list1 = list1->next;
            }else{
                now->next = new ListNode(list2->val);
                list2 = list2->next;
            }
             now=now->next;
        }

        return ans->next;
    }
};
