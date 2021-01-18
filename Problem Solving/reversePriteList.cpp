void reversePrint(SinglyLinkedListNode* head) 
{
// code complexity = n + n ---> o(n)
typedef SinglyLinkedListNode* nodePtr ;
nodePtr cursor = head; 
stack<int> s1;

while (cursor != NULL) 
{
    s1.push(cursor->data);
    cursor = cursor->next;
}

}