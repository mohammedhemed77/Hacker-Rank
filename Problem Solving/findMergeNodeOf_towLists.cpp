int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

auto cursor1 = head1 ; 
auto cursor2 = head2 ;

while (cursor1 != cursor2 ) 
    {
    if (cursor1->next == NULL)   cursor1 = head2;
    else cursor1 = cursor1->next;
     
    if (cursor2->next == NULL) cursor2 = head1; 
    else cursor2 = cursor2->next;
    } 
return cursor2->data;
}