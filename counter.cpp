#include<iostream>

using namespace std;


using namespace std;


struct node {
    int data;
    node* next;
    node* head;
};


 
void add( node **head, int x)
{
    node* temp = new node();
     temp-> data = x;
    temp->next = *head;
    *head = temp;
}


int count(node* head)
{
    int count = 0;

    while (head!= NULL) {

        // Starting from the next node 
        node* ptr = head->next;
        while (ptr != NULL) {

 
            if (head->data == ptr->data) {
                if (count++) {
                    break;
                }
            }
            ptr = ptr->next;
        }

        head = head->next;
    }

 
    return count;
}


int main()
{
    node* head = NULL;
    add(&head, 3);
    add(&head, 1);
    add(&head, 4);
    add(&head, 2);
    add(&head, 2);
    add(&head, 3);
    add(&head, 5);
    add(&head, 3);
    
   

    cout << count(head);

    return 0;
}