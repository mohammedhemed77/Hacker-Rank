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


while(!s1.empty()) {cout<<s1.top()<<endl; s1.pop(); }

}
