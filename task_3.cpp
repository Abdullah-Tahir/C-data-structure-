#include<iostream>
#include<string>



using namespace std;
struct node {
    int data;
    struct node* next;
};

node* first, * last, * more_Node, * temp, * temp1 = NULL;
void add(int data)

{
  
    more_Node = new node;
    more_Node->data = data;
    more_Node->next = NULL;

    
    if (first == NULL) {
       
        first = more_Node;
        last= more_Node;
    }
    else {
         
        last->next = more_Node;
         
        last = more_Node;
    }
}





void next_find()
{
    
    ; int* ptr = NULL;
    temp = first;
    int x = 0;
    cout << "insert value you want to chcek: " << endl;
    cin >> x;
    while (temp != NULL)
    {
        if (temp->data ==x)
        {
    
            temp1 = new node;
            temp1 = first;
            while (temp1 != NULL)
            {
      
                if (temp1->data > x)
                {

                    cout << " next greater value will be " << x << " is =  " << temp1->data << endl;

                    return;
                    
                }
               
                temp1 = temp1->next;
            }

        }
        temp = temp->next;
    }


}
void stream_line() {

    struct node* on_point = first, * input = NULL;
    int temp;

    if (first == NULL) {
        return;
    }
    else {
        while (on_point != NULL) {

            input = on_point->next;

            while (input != NULL) {

                if (on_point->data > input->data) {
                    temp = on_point->data;
                    on_point->data = input->data;
                    input->data = temp;
                }
                input = input->next;
            }
            on_point = on_point->next;
        }
    }
}

void display() {
    
    struct node* on_point = first;
    if (first == NULL) {
        cout<<"List is empty \n";
        return;
    }
    while (on_point != NULL) {
      
        cout << on_point->data;
       on_point = on_point->next;
    }
    cout<<"\n";
}

int main()
{
      
    add(10);
    
    add(12);
    
    add(25);
   
    add(514);
  
    add(43);

  
    cout << "given list:,enter any element from(10,12,25,514,43)" << endl;

    display();

    stream_line();

    
    cout<<"making it in the ascending order";
    display();

   next_find();

    return 0;
}


