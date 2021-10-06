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

TreeNode<int> *TakeInput()
{
    int rootdata;
    cout << "enter data" << endl;
    cin >> rootdata;
    int nodes;
    cout << "Enter the number of nodes of " <<rootdata<< endl;
    cin >> nodes;
    TreeNode<int> *root = new TreeNode<int>(rootdata);
    for (int i = 0; i < nodes; i++)
    {
        TreeNode<int> *child = TakeInput();
        root->children.push_back(child);
    }
    return root;
}
void printtree(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ::  ";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << "  ";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printtree(root->children[i]);
    }
}
int main()
{
    // TreeNode<int>* node_1=new TreeNode<int>(1);
    // TreeNode<int>* node_2=new TreeNode<int>(2);
    // TreeNode<int>* node_3=new TreeNode<int>(3);
    // TreeNode<int>* node_4=new TreeNode<int>(4);
    // TreeNode<int>* node_5=new TreeNode<int>(5);
    // TreeNode<int>* node_6=new TreeNode<int>(6);
    // TreeNode<int>* node_7=new TreeNode<int>(7);
    // TreeNode<int>* node_8=new TreeNode<int>(8);
    // TreeNode<int>* node_9=new TreeNode<int>(9);

    // node_1->children.push_back(node_2);
    // node_1->children.push_back(node_3);
    // node_1->children.push_back(node_4);

    // node_2->children.push_back(node_5);
    // node_2->children.push_back(node_6);

    // node_3->children.push_back(node_7);

    // node_4->children.push_back(node_8);
    // node_4->children.push_back(node_9);

    TreeNode<int> *root = TakeInput();
    printtree(root);
    return 0;
}