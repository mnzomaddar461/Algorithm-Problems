#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
        Node(int val){
            data = val;
            left = right = NULL;
        }
};

void preorder(Node* root, int &count, int target,int &pos, int &foundPos)
{
    if(root == NULL) return;
    pos++;
    cout << root->data << " ";
    count++;

    if(root->data == target && foundPos == -1){
        foundPos = pos;
    }

    preorder(root->left, count, target, pos, foundPos);
    preorder(root->right, count, target, pos,  foundPos);
}

int main(){
    Node* root = new Node(0);
    root->left = new Node(6);
    root->right = new Node(10);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    root->right->left = new Node(20);
    root->right->right = new Node(30);
    root->left->left->left = new Node(2);
    root->left->right->left = new Node(3);
    root->left->right->right = new Node(7);

    int target, count = 0, pos = 0, foundPos = -1;
    
    cout << "Enter target value in tree: ";
    cin >> target;

    cout << "Preorder: ";
    preorder(root, count, target, pos, foundPos);
    cout << "Total Nodes: " << count <<endl;

    if(foundPos != -1){
        cout << "Target Founded and Depth:  " << foundPos << endl;
    }
    else{
        cout << "Target Not Found !" << endl;
    }
    
    return 0;
}