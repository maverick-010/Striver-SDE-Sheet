int findIntersection(Node *firstHead, Node *secondHead)
{
    Node* first=firstHead,*second=secondHead;
        while(first!=second)
        {
            if(first!=NULL) first=first->next;
            else first=secondHead;
            if(second!=NULL) second=second->next;
            else second=firstHead;
        }
        if(first!=NULL) return first->data;
        else return -1;
}
