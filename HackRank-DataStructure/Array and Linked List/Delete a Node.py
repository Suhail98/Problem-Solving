def deleteNode(llist, position):
    if(position == 0):
        return llist.next
    head = llist
    for i in range(position - 1):
        llist = llist.next
    llist.next = llist.next.next
    return head