// input output by usig DFS
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
        data=a;
    }
};

TreeNode<int>* TakeInput()
{
    int n,rootdata;
    cout<<"enter the data value "<<endl;
    cin>>rootdata;
    cout<<"enter number of nodes of root data "<<endl;
    cin>>n;

    TreeNode<int>* root=new TreeNode<int>(rootdata);

    for(int i=0;i<n;i++)
    {
        TreeNode<int>* child=TakeInput();
        root->children.push_back(child);
    }
    return root;
}

void printTree(TreeNode<int>* root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<"  ::  ";
    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<"   ";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        printTree(root->children[i]);
    }
}
int main()
{
    TreeNode<int>* root=TakeInput();
    printTree(root);
    return 0;
}