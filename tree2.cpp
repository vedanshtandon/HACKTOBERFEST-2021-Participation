#include <bits/stdc++.h>
using namespace std;
template <typename T>
class TreeNode
{
    public : 
    T data;
    vector<TreeNode*> children;

    TreeNode(T a)
    {
        data = a;
    }
};

TreeNode<int> *TakeInput()
{
    int n, rootdata;
    cout << "enter the value of the data" << endl;
    cin >> rootdata;
    cout << "enter the number of nodes of the data " << rootdata << endl;
    cin >> n;
    TreeNode<int> *root = new TreeNode<int>(rootdata);
    for (int i = 0; i < n; i++)
    {
        TreeNode<int> *child = TakeInput();
        root->children.push_back(child);
    }
    return root;
}

void printtree(TreeNode<int> *root)
{
    cout << root->data << "  ::  ";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout<<root->children[i]->data<<"   ";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        printtree(root->children[i]);
    }
}
int main()
{
    TreeNode<int>* root=TakeInput();
    printtree(root);
    return 0;
}