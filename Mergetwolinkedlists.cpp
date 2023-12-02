SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedList* sllist= new SinglyLinkedList();
    while(head1!=nullptr||head2!=nullptr){
         if(head1!=nullptr && head2!=nullptr){
             if(head1->data<=head2->data){
                 sllist->insert_node(head1->data);
                 head1=head1->next;
                 continue;
                 }
             else{
                 sllist->insert_node(head2->data);
                 head2=head2->next;
                 continue;
                 }
             }
         else{
             if(head1==nullptr){
                 sllist->insert_node(head2->data);
                 head2=head2->next;
                }
             else{
                  sllist->insert_node(head1->data);
                  head1=head1->next;
                 }
             }
         }
    return sllist->head;
}