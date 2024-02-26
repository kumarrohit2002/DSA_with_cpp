#include <iostream>
#include <stack>
#include <queue>
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

stack<int> reverselevelorder(Node *&root)
{
    stack<int> s;
    if (!root) return s;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int currlevel = q.size();
        while (currlevel--)
        {
            Node *currNode = q.front();
            q.pop();
            if (currNode->right)
            {
                q.push(currNode->right);
            }
            if (currNode->left)
            {
                q.push(currNode->left);
            }
            s.push(currNode->value);
        }
    }
    return s;
}

int main()
{
    Node *root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(6);
    root->left->left = new Node(8);
    root->left->right = new Node(10);
    root->right->right = new Node(14);
    root->right->left = new Node(16);
    root->left->left->right = new Node(12);
    stack<int> ans = reverselevelorder(root);
    while(!ans.empty()){
        cout << ans.top()<<" ";
        ans.pop();
    }
    return 0;
}