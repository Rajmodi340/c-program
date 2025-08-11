#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int value){
        data=value;
        left=right=NULL;
    }
};

vector<int>levelorder(Node*root){
    vector<int>ans;
    if(!root)
    return ans;
queue<Node*>q;
q.push(root);
while(!q.empty()){
    Node*current=q.front();
    q.pop();
    ans.push_back(current->data);
    if(current->left)
    q.push(current->left);
    if(current->right)
    q.push(current->right);
}
return ans;
}


int main(){
     Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Performing level-order traversal
    vector<int> result = levelorder(root);

    // Printing the result
    cout << "Level-order traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    
    return 0;
}