#include<iostream>
#include<math.h>
using namespace std;
struct node {
    int data;
    node* left, * right;
};
class complete_binary_tree {
    node* root;
    int height1 = 0;

public:

    complete_binary_tree()
    {
        root = NULL;

    }

    node* get_node()
    {
        return root;
    }

    node* newNode(int key)
    {
        node* temp1 = new node;
        temp1->data = key;
        temp1->left = temp1->right = NULL;

        return temp1;
    }

   
    void CBT_inseration(node* temp, int data)
    {
        node* ptr;
        ptr = newNode(data);
        if (root == NULL)
        {
            root = ptr;
            return;
        }
        else
        {



            height1 = MIXIMAXA(temp->left);
            
            int excepted_node = pow(2, height1) - 1;
            int left_tree_node_count = count_nodes(temp->left);
            int right_tree_node_count = count_nodes(temp->right);

            if (left_tree_node_count == right_tree_node_count)
            {
                if(temp->left!=NULL){
                     CBT_inseration(temp->left, data);
                }
                if(temp->left==NULL){
                temp->left = newNode(data);
                return;
                }
            } 
            else if (excepted_node != left_tree_node_count)
            {
               
             
                if (temp->left == NULL)
                {
                  
                    temp->left = newNode(data);
                    return;
                }
            
                    CBT_inseration(temp->left, data);
                 
                
            }
            else if (temp->right == NULL)
             {temp->right = newNode(data);
                return;
                } 
            else {CBT_inseration(temp->right, data);
             }
        }
    }
    void print(node* root) {
        if (root == NULL)
            return;
        print(root->left);
        cout << root->data<<" ";
        print(root->right);
    }
    int MIXIMAXA(node* root)
    {
       
        if (root == NULL)
            return 0;
        else {
          
            int l_height = MIXIMAXA(root->left);
            int r_height = MIXIMAXA(root->right);
            if (l_height >= r_height)
                return l_height + 1;
            else
                return r_height + 1;
        }
        
    }




   
     int count_nodes(node* root)
     {

         if (root == NULL)
             return 0;
         else
             return(count_nodes(root->left) + 1 + count_nodes(root->right));

     }
     
   



};
int main()
{
    complete_binary_tree obj;
    node* r = NULL;
    obj.CBT_inseration(obj.get_node(), 16);
    obj.CBT_inseration(obj.get_node(), 28);
    obj.CBT_inseration(obj.get_node(), 7);
    obj.CBT_inseration(obj.get_node(), 61);
    obj.CBT_inseration(obj.get_node(), 54);
      obj.CBT_inseration(obj.get_node(), 2);
    obj.CBT_inseration(obj.get_node(), 4);
    
    
    
    obj.print(obj.get_node());
    return 0;
}