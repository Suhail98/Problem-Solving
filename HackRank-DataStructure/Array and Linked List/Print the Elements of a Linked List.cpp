void printLinkedList(SinglyLinkedListNode* head) {

    while(head != 0)
    {
        cout << head-> data << "\n";
        head = head-> next;
    }
}