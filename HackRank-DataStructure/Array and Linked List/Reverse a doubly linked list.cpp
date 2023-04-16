DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
if(llist == 0) return 0;
swap(llist->next,llist->prev);
if(llist->prev!=0)
    return  reverse(llist->prev);
return llist;
}