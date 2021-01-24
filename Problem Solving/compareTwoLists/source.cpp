bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
vector<int> v1 ;
vector<int> v2 ;
auto cursor1 = head1; auto cursor2 = head2; 
while(cursor1) {v1.push_back(cursor1->data); cursor1 = cursor1->next;}
while(cursor2) {v2.push_back(cursor2->data); cursor2 = cursor2->next;}
if (v1 == v2) return true;
return false;
}
