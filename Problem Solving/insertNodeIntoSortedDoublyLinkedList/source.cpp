DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
typedef DoublyLinkedListNode* nodePtr;
auto cursor = head;
nodePtr temp;
// create new node 
DoublyLinkedListNode* newNode = new DoublyLinkedListNode (data);
// if list is empty 
if (head == NULL)
{
 head = newNode; 
 return head;
} 

else if (head->data >= data){ 
newNode->next = head; 
head->prev = newNode;
head = newNode;    
}

else 
{
while (cursor->next != NULL && cursor->next->data < data) 
      cursor = cursor->next; 
       
        newNode->next = cursor->next; 
        // if the new node is not inserted 
        // at the end of the list 
        if (cursor->next != NULL) 
            newNode->next->prev = newNode; 
  
        cursor->next = newNode; 
        newNode->prev = cursor;
}
return head;
}
