SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
if(position == 0)
    return llist->next;
SinglyLinkedListNode* head = llist;
   
for(int i = 0;i < position - 1;i++)
        llist = llist->next;
    llist->next = llist->next->next;
return head;
}