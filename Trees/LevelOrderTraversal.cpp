// this is same as doing BFS for a binary tree

#include <bits/stdc++.h>

using namespace std;

class Node {
    public: 
    int data;
    Node *left;
    Node *right;

    Node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root) {
    cout << "Enter Data: " << endl;
    int data;
    cin >> data;

    root = new Node(data);

    if (data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << " : " << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for inserting in right of " << data << " : " << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(Node *&root) {
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL) {
            // this marks the seperation of levels
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        } else {
            cout << temp->data << " ";

            if (temp -> left) {
                q.push(temp->left);
            } 
            if (temp -> right) {
                q.push(temp->right);
            }
        }
    }
}

int main() {
    Node *root = new Node(0);

    // buildTree(root);

    root->left = new Node(3);
    root->right = new Node(2);

    levelOrderTraversal(root);
}