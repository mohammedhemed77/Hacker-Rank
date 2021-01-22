SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
 auto cursor = head; 
 auto temp   = head;
 vector<int> vec;  
   while (cursor)
   {
    vec.push_back(cursor->data);   
    cursor = cursor->next;
   }
   std::sort(vec.begin(),vec.end());
   auto index = std::unique(vec.begin(),vec.end());
   vec.resize(std::distance(vec.begin(),index));

  SinglyLinkedList llist;
  for (auto i : vec) llist.insert_node(i);   
  return llist.head;
}
