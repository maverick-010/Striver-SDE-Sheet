bool detectCycle(Node *head)
{
	  Node *fast=head;
    Node *slow=head;
    
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}
