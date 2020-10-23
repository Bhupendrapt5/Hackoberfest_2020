class Solution {
private:
      ListNode*merge(ListNode*a,ListNode*b){
        ListNode*res=NULL;
        if(a==NULL){
            return b;
        }
        else if(b==NULL){
            return a;
        }
        if(a->val<=b->val){
            res=a;
            res->next=merge(a->next,b);
        }
        else{
           res=b;
           res->next=merge(a,b->next); 
        }
        return res;
    }
    ListNode*utils(vector<ListNode*>& lists,int s,int e){
        if(s==e){
            return lists[s];
        }
        int mid=(s+e)/2;
        ListNode*m1=utils(lists,s,mid);
        ListNode*m2=utils(lists,mid+1,e);
        return merge(m1,m2);
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0||(lists[0]==NULL&&lists.size()==1 ))
            return NULL;
        ListNode*res=NULL;
        res=utils(lists,0,lists.size()-1);
        return res;
    }
};
