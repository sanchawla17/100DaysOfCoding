//82
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        ListNode* newlist=new ListNode();
        ListNode* temp2=newlist;
        map<int,int>m;
        while(temp)
        {
            m[temp->val]++;
            temp=temp->next;
        }
        for(auto i=m.begin();i!=m.end();i++)
        {
            if(i->second==1)
            {
                cout<<i->first<<endl;
                ListNode* node=new ListNode(i->first);
                temp2->next=node;
                temp2=temp2->next;
            }
        }
        return newlist->next;
    }
    
};
