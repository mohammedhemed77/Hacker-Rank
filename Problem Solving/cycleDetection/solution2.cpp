bool has_cycle(SinglyLinkedListNode* head) 
{

auto fast = head;
auto slow = head;

while (fast && fast->next)
   {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast) return true; 
    }

return false;
}
