int getNode(SinglyLinkedListNode* head, int positionFromTail) {
   
   auto cursor = head; 
   positionFromTail +=1;
   vector<int> vec; 
   while(cursor) {vec.push_back(cursor->data); cursor = cursor->next;}
   return *(vec.end() - positionFromTail);
}
