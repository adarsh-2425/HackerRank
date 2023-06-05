//Insert a Node at the Tail of a Linked List

// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    //declaring newnode and temp
    SinglyLinkedListNode *newnode, *temp;
    
    newnode = (SinglyLinkedListNode*) malloc (sizeof(SinglyLinkedListNode));
    
    if(head == NULL) {
        newnode -> data = data;
        newnode -> next = NULL;
        return newnode;
    }
    
    //inserting at end
    newnode -> data = data;
    newnode -> next = NULL;
    
    //linking last node to end
    temp = head;
    while(temp -> next != NULL) {
        temp = temp -> next;
    }
    temp -> next = newnode;
    
    //returning pointer to head
    return head;

}
