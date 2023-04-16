SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
SinglyLinkedListNode* head = llist;
while(llist != 0 && llist->next!= 0)
{
    while( llist->next != 0 && llist->data == llist->next->data )
        llist->next = llist->next->next;
    llist = llist->next;
}
return head;
}