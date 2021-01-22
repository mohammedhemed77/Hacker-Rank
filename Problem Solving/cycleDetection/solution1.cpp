bool has_cycle(SinglyLinkedListNode* head) {
/*
auto fast = head;
auto slow = head;

while (fast && fast->next)
{
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast) return true;
}
return false;
*/
typedef SinglyLinkedListNode* nodePtr;
vector<nodePtr>vec;
auto cursor  = head; 
int listSize = 1000; 
while(cursor) 
{
    if (std::find(vec.begin(), vec.end(), cursor) != vec.end())
       return true; 
    else vec.push_back(cursor);
     
    cursor = cursor->next;
}

return false;
}
