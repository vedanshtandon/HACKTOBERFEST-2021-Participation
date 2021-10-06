// a program to demonstrate the input and output through DFS algorithm
#include <bits/stdc++.h>
using namespace std;
template <typename T>
class TreeNode
{
public:
    T data;
    vector<TreeNode *> children;

    TreeNode(T a)
    {
        data = a;
    }
};

//taking input
int countnodes(TreeNode<int> *root)
{
    int a = 1;
    for (int i = 0; i < root->children.size(); i++)
    {
        a = a + countnodes(root->children[i]);
    }
    return a;
}

TreeNode<int> *TakeInput()
{
    int rootdata, n;
    cout << "enter the value of the root data " << endl;
    cin >> rootdata;
    cout << "enter the number of the daughter nodes of " << rootdata << endl;
    cin >> n;

    TreeNode<int> *root = new TreeNode<int>(rootdata);

    for (int i = 0; i < n; i++)
    {
        TreeNode<int> *child = TakeInput();
        root->children.push_back(child);
    }
    return root;
}

//print the tree

void printTree(TreeNode<int> *root)
{
    cout << root->data << "  :  ";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << "  ";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}
int main()
{
    TreeNode<int> *root = TakeInput();
    // printTree(root);
    cout << "totalnumber of nodes are " << countnodes(root) << endl;
    return 0;
}