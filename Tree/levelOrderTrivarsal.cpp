#include <iostream>
#include <queue>
#include<vector>
using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int v)
    {
        this->value = v;
        this->left = this->right = NULL;
    }
};

void preorder(Node *&root)
{
    if (!root)
        return;
    cout << root->value << " ";
    preorder(root->left);
    preorder(root->right);
    return;
}

// void levelorder(Node* &root){
//     if(!root) return ;
//     queue <Node*> q;
//     q.push(root);
//     while(!q.empty()){
//         int NodeAtCurrentLevel=q.size();
//         while(NodeAtCurrentLevel--){
//             Node* CurrNode=q.front();
//             q.pop();
//             if(CurrNode->left){
//                 q.push(CurrNode->left);
//             }
//             if(CurrNode->right){
//                 q.push(CurrNode->right);
//             }
//             cout<<CurrNode->value<<" ";
//         }
//         cout<<endl;
//     }
// }

void levelorder(Node *&root)
{
    if (!root)return;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int currlevel = q.size();
        while (currlevel--)
        {
            Node *currNode = q.front();
            q.pop();
            if (currNode->left)
            {
                q.push(currNode->left);
            }
            if (currNode->right)
            {
                q.push(currNode->right);
            }
            cout << currNode->value << " ";
        }
        cout << endl;
    }
}

// check BST or NOT..............
void inordertrivrsal(Node* root,vector<int> &v){
    if(!root) return;
    inordertrivrsal(root->left,v);
    v.push_back(root->value);
    inordertrivrsal(root->right,v);
    return;
}
//cheack sorted or Not........
bool isSorted(vector<int> v,int n){
    if(n==1 || n==0) return true;
    if(v[n-1] < v[n-2]) return false;
    return isSorted(v,n-1);
}


int main()
{
    Node *root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(10);
    root->left->left = new Node(6);
    root->left->right = new Node(5);
    root->left->right->right = new Node(6);
    root->right->right = new Node(11);
    levelorder(root);
    // preorder(root);
    vector<int> v;
    inordertrivrsal(root,v);
    if(isSorted(v,v.size())){
        cout<<endl<<"Bst";
    }else cout<<"not BST";
    return 0;
}