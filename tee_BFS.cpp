// aprogram to dmonstrate the BSF algorithm
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

// taking input level wise of breadth wise
TreeNode<int> *TakeInput()
{
    int n, rootdata;
    cout << "enter the root data " << endl;
    cin >> rootdata;

    TreeNode<int> *root = new TreeNode<int>(rootdata);

    queue<TreeNode<int> *> pendngnodes;
    pendngnodes.push(root);

    while (pendngnodes.size() != 0)
    {
        int n;
        TreeNode<int> *front = pendngnodes.front();
        pendngnodes.pop();
        cout << "enter number of daughter node of " << front->data << endl;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int childdata;
            cout << "enter the data value of " << i << " th daughter node of " << front->data << endl;
            cin >> childdata;

            TreeNode<int> *child = new TreeNode<int>(childdata);
            front->children.push_back(child);
            pendngnodes.push(child);
        }
    }
    return root;
}

// printing the tree
void printTree(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<TreeNode<int> *> pendingnodes;
    pendingnodes.push(root);
    cout << endl;
    while (pendingnodes.size() != 0)
    {
        TreeNode<int> *front = pendingnodes.front();
        pendingnodes.pop();

        int childsize = front->children.size();
        cout << front->data << ":";
        if (childsize)
        {
            cout << front->children[0]->data;
            pendingnodes.push(front->children[0]);
        }
        for (int i = 1; i < front->children.size(); i++)
        {
            cout << "," << front->children[i]->data;
            pendingnodes.push(front->children[i]);
        }
        cout << endl;
    }
}
int mian()
{
    TreeNode<int> *root = TakeInput();
    printTree(root);
    return 0;
}