LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
   LinkedListNode<int> *cur=NULL;
    while(head){
        LinkedListNode<int> *next=head->next;
        head->next=cur;
        cur=head;
        head=next;
    }
    return cur;
}
