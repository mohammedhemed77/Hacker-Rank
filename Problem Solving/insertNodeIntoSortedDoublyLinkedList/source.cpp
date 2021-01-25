DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
typedef DoublyLinkedListNode* nodePtr;
auto cursor = head;
nodePtr temp;
if (head == NULL)
{
 DoublyLinkedListNode* newNode = new DoublyLinkedListNode (data);
 head = newNode; 
 return head;
} 

while (cursor->next)
{
temp = cursor->prev;    
if (cursor->data < data) cursor = cursor->next;
else {
 DoublyLinkedListNode* newNode = new DoublyLinkedListNode (data);
 cursor->prev = newNode;
 newNode->next = cursor;
 
 newNode->prev = temp; 
 temp->next =newNode;
 //cursor->prev= newNode;   
}

}
return head;
}
