SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) 
{
    typedef SinglyLinkedListNode* nodePtr;
    nodePtr temp;
    // new list 
    SinglyLinkedList llist;
    vector<int> vec ;
    while(head1)    {vec.push_back(head1->data);    head1=head1->next;}  
    while(head2)    {vec.push_back(head2->data);    head2=head2->next;}
    sort(vec.begin(),vec.end());
    for (auto it = vec.begin(); it!=vec.end(); ++it)
    {
        llist.insert_node(*it);
    }
    return llist.head;
}