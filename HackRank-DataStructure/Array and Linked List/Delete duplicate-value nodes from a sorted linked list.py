def removeDuplicates(llist):
    head = llist
    while(llist != None and llist.next != None):
        while(llist.next != None and llist.data == llist.next.data):
            llist.next = llist.next.next
        llist = llist.next
    return head