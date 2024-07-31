#include<stdio.h>
#include<stdlib.h>
struct Node {

    int data;
    struct Node *next;
};
struct Node *head=NULL;
void insertNodeinthebegining(int i);
void insertNodeintheEnd();
void displayData();
void sortLinkedList(struct Node* head) ;
int searchNode(struct Node *head,int searchKey);
void deleteNodeintheBegining();
int main()
{

    insertNodeinthebegining(10);
    insertNodeinthebegining(30);
    insertNodeinthebegining(50);
    //insertNodeinthebegining(5);
    insertNodeintheEnd();
    sortLinkedList(head);
    deleteNodeintheBegining();
    displayData();
   int result=searchNode(head,80);



   if(result){
    printf("SearchKey exists in the linked list");
   }
   else
      printf("SearchKey doesn't exists in the linked list");


}
void insertNodeinthebegining(int i)
{
   struct Node* newnode;
   newnode= (struct Node*)malloc(sizeof(struct Node));
//    printf("Enter the data to insert into the node: ");
//    scanf("%d",&newnode->data);
   newnode->data=i;
   newnode->next=NULL;

   if(head==NULL)// Linked List is empty 
   { 
    head=newnode;  // now we are assigning the newnode to the head --> means head is refferring to the first node
    return;
   }
   else{

   newnode->next=head;
   head=newnode;
   }

}

void insertNodeintheEnd()
{

    struct Node* newnode;
    newnode= (struct Node*)malloc(sizeof(struct Node));
    newnode->data=20;
    newnode->next=NULL;

// Linked List is empty 
    if(head==NULL){

        head=newnode;
        return;
    }
    else{

    struct Node* tempnode=head;

    while(tempnode->next!=NULL){

        tempnode=tempnode->next;
    }

    tempnode->next=newnode;

    }
    
}

void displayData(){

    if(head==NULL)
	{
		printf("Linked List is Empty\n");
		return;
	}
    printf("LinkedList: ");
	struct Node* ptr = head;
	while(ptr!=NULL)  
	{
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}
    printf("\n");
}

// Sort the linked list
void sortLinkedList(struct Node* head) {
  struct Node *current = head, *index = NULL;
  int temp;

  if (head == NULL) {
    return;
  } else {
    // Outer loop
    while (current != NULL) {
      // index points to the node next to current
      index = current->next;
  //inner loop
  	while (index != NULL) {
        if (current->data > index->data) {
          temp = current->data;
          current->data = index->data;
          index->data = temp;
    	  }
    	  index = index->next;
  	}
  	current = current->next;
    }
  }
}

int searchNode(struct Node *head,int searchKey){

    struct  Node* current=head;

    while (current!=NULL){
        if(current->data==searchKey){
            return 1;
        }
        current=current->next;
    }

    return 0;
}

void deleteNodeintheBegining(){

    if(head==NULL)
    {
        printf("Dude Your linked list is empty.. ");
        return;
    }
    else{
        struct  Node* temp=head;

         head= head->next;

        free(temp);// Delete the previously pointed head node.
        printf("Node is deleted");
    }
}


