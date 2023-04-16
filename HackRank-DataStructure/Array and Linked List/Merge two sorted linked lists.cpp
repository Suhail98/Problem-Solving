SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

        SinglyLinkedListNode* head;
        if(head1->data < head2->data)
         {head = head1;
         head1 = head1->next;}
        else 
        {head = head2;
        head2 = head2->next;}
        SinglyLinkedListNode* ans = head;
        while(head1 != 0 && head2 != 0)
        {
            if(head1->data < head2->data)
                {head->next = head1; head1 = head1->next;}
            else
                {head->next = head2;head2 = head2->next;}
            head = head->next;
        }
        if(head1 != 0)
        {
            head->next = head1;
        }
        if(head2 != 0)
            {
                head->next = head2;
            }
            
        return ans;
}