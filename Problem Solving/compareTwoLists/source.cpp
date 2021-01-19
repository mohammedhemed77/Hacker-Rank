bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
typedef SinglyLinkedListNode* nodePtr; 
nodePtr cursor1 = head1 ;
nodePtr cursor2 = head2 ; 
int length1 = 0 , length2 = 0 ;
// if two lists are empty 
if ((head1 == NULL) && (head2 == NULL)) return true;  
if ((head1 == NULL) ^ (head2 == NULL))  return false;

while ((cursor1 != NULL) || (cursor2 !=NULL)) 
{  
    
    if ((cursor1 !=NULL)&&(cursor1 !=NULL))
        if ((cursor1->data) != (cursor2->data ))
             return false; 
    
    if (cursor1!= NULL) {cursor1 = cursor1->next ; length1++; }
    if (cursor2!= NULL) {cursor2 = cursor2->next ; length2++; }
}
return (length1 == length2) ? true : false;
}
