#include<stdio.h>
#include<stdlib.h>
typedef struct node node;

   struct node
   {
      int data;
      struct node* next; 
   };
   //function to create a single node
   node* create_node(int data){
      struct node* new_node = (struct node*) malloc(sizeof(struct node));
      new_node->data=data;
      new_node->next=NULL;
      return new_node;
  
   }

   //function to create entire linked list
   node *create_linked_list(){
      node *head=NULL;
   int i;
   for ( i = 0; i <=6; i++)
   {
      node *new_node=create_node(i);
      if(head==NULL){
         head=new_node;
      }
      else
      {
         node *last=head;
         
         while(last->next!=NULL)
               last=last->next;
         last->next=new_node;
      }
      
   }
   return head;

   }

   //function for removing node by data*******************
   node *delete_node(node *head,int num){
      node *last=head;
      node *prev_node=NULL;
      while(last!=NULL){
         if(last->data==num && last==head){
            head=last->next;
         }
         else if(last->data==num && last->next==NULL){
            prev_node=NULL;
         }
         else if(last->data==num){
            prev_node->next=last->next;
         }
         prev_node=last;
         last=last->next;
      }
   
      
      return head;

   }
void main(){
   node *head=create_linked_list();
   node *last=head;
   while(last!=NULL){
      printf("%d\t",last->data);
      last=last->next;
   }
   printf("\n");
   head=delete_node(head,3);
   
   last=head;
   while(last!=NULL){
      printf("%d\t",last->data);
      last=last->next;
   }

   
   
   
   
}
