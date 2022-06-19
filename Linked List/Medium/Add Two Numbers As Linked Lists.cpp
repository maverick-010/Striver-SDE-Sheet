Node *addTwoNumbers(Node *head1, Node *head2)
{
Node * dummy = new Node(1);
Node * temp = dummy;
int carry=0;
while(head1!=NULL || head2!=NULL || carry==1)
{
 int sum=0;
 if(head1!=NULL)
 {
  sum+=head1->data;
  head1=head1->next;
 }
 if(head2!=NULL)
 {
  sum+=head2->data;
  head2=head2->next;

 }
 sum +=carry;
 carry=sum/10;
 Node * sumation = new Node(sum%10);
 temp->next = sumation;
 temp=temp->next;

}
return dummy->next;
}
