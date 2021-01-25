DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
DoublyLinkedListNode* temp ;
auto cursor = head; 
if (head == NULL) return NULL;

while (cursor->next != NULL) cursor = cursor->next; 
head = cursor ; 

while (cursor->prev != NULL)
{
    temp = cursor->prev; 
    cursor->next = temp ;
    temp->next = temp->prev;
    cursor = cursor->prev;
}
cursor->next = NULL; 
return head; 
}