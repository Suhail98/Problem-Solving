def insertNodeAtHead(llist, data):
    node = SinglyLinkedListNode(data)
    node.next = llist;
    return node