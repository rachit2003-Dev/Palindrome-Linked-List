bool isPalindrome(struct ListNode* head){
    struct ListNode* ptr=head;
    struct ListNode* p=head;
    struct ListNode* q=head;
    int count=0, top=-1;
    while(ptr!=NULL)
    {
        count++;
        ptr = ptr->next;
    }
    int s[count];
    while(p!=NULL)
    {
        top++;
        s[top]=p->val;
        p=p->next;
    }
    
    while(q!=NULL&&top!=-1)
    {
        if(q->val!=s[top])
            return false;
        q=q->next;
        top--;
    }
    return true;
}