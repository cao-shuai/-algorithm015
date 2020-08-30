class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        // 终结条件
        if(l1==nullptr && l2==nullptr){
            return nullptr;
        } else if(l1 == nullptr && l2 !=nullptr){
            return l2;
        }else if(l2==nullptr && l1 != nullptr){
            return l1;
        }
        // 处理当前层逻辑
        int value= l1->val<l2->val?l1->val:l2->val;
        ListNode* head= new ListNode(value);

        //drill down
        head->next=mergeTwoLists(l1->val<l2->val?l1->next:l1,l1->val<l2->val?l2:l2->next);
        return head;
    }
};