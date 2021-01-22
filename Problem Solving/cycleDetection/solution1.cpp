bool has_cycle(SinglyLinkedListNode* head) {

typedef SinglyLinkedListNode* nodePtr;
vector<nodePtr>vec;
auto cursor  = head; 
  
while(cursor)   
    {
    if (std::find(vec.begin(), vec.end(), cursor) != vec.end())
       return true; 
    else vec.push_back(cursor);
     
    cursor = cursor->next;
    }

return false;
}
