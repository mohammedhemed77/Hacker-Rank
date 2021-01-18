SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) 
{
if (head == NULL ) return NULL;
// code complexity = n + n ---> o(n)
typedef SinglyLinkedListNode* nodePtr ;
nodePtr cursor = head; 
stack<int> s1;

while (cursor != NULL) 
{
    s1.push(cursor->data);
    cursor = cursor->next;
}
cursor = head;  

head = cursor; 

while(!s1.empty()) 
{   
    cursor->data = s1.top();
    s1.pop();
    cursor = cursor->next;
}
return head ; 


}
