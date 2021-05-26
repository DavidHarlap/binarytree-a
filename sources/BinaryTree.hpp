#include <iostream>
#include <stdbool.h>
using namespace std;
namespace ariel
{

    template <typename T>
    class BinaryTree
    {

        private:
        struct Node
        {
            
                T node_val;
                Node *r_node;
                Node *l_node;
                Node(const T &n_val, Node *r_n, Node *l_n)
                    : node_val(n_val), r_node(r_n), l_node(l_n){
            }
            /*public:
                T get_val()const{
                    return node_val;
                }*/

        };
        Node* root;

    public:
    
        BinaryTree(){ }
        ~BinaryTree(){ }
        BinaryTree <T> &add_root(const T &t1){
            return *this;
        }
        BinaryTree <T> &add_left(const T &t1, const T &t2){
            return *this;
        }
        BinaryTree <T> &add_right(const T &t1, const T &t2){
            return *this;
        }

        friend ostream &operator<<(ostream &os, const BinaryTree &Bt){
            return os<<"TREE";
        } 

 
        

        
        class Pre_iterator
        {
            private:
                Node *curr_node;
            public:
            
                Pre_iterator(Node* ptr= nullptr): curr_node(ptr){
                    
                }
                T& operator*() const{
                    return curr_node->node_val;
                }

                T* operator->() const {
                    return &(curr_node->node_val);
                }

                Pre_iterator &operator ++()
                {
                    curr_node=curr_node->r_node;
                    return *this;
                }

                bool operator==(const Pre_iterator& other) const
                {
                    return curr_node==other.curr_node;
                }
                bool operator!=(const Pre_iterator& other) const
                {
                    return curr_node!=other.curr_node;
                }
            

        };

        class Post_iterator
        {
            private:
                Node *curr_node;
            public:
            
                Post_iterator(Node* ptr= nullptr): curr_node(ptr){
                    
                }
                T& operator*() const{
                    return curr_node->node_val;
                }

                T* operator->() const {
                    return &(curr_node->node_val);
                }

                Post_iterator &operator ++()
                {
                    curr_node=curr_node->r_node;
                    return *this;
                }

                bool operator==(const Post_iterator& other) const
                {
                    return curr_node==other.curr_node;
                }
                bool operator!=(const Post_iterator& other) const
                {
                    return curr_node!=other.curr_node;
                }
            

        };

        class In_iterator
        {
            private:
                Node *curr_node;
            public:
                In_iterator(Node* ptr= nullptr): curr_node(ptr){
                    
                }
                T& operator*() const{
                    return curr_node->node_val;
                }

                T* operator->() const {
                    return &(curr_node->node_val);
                }

                In_iterator &operator ++()
                {
                    //curr_node=curr_node->r_node;
                    return *this;
                }
                bool operator==(const In_iterator& other) const
                {
                    return curr_node==other.curr_node;
                }
                bool operator!=(const In_iterator& other) const
                {
                    return curr_node!=other.curr_node;
                }
            

        };

        In_iterator begin() {
            return In_iterator(root);
        }
        In_iterator end() {
            return In_iterator(root);
        }
        In_iterator begin_preorder() {
            return In_iterator(root);
        }
        In_iterator end_preorder() {
            return In_iterator(root);
        }
        In_iterator begin_inorder() {
            return In_iterator(root);
        }
        In_iterator end_inorder() {
            return In_iterator(root);
        }
        In_iterator begin_postorder() {
            return In_iterator(root);
        }
        In_iterator end_postorder() {
            return In_iterator(root);
        }
    
    };


}