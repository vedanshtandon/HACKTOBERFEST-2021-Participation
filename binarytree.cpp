#include <bits/stdc++.h>
using namespace std;
template <typename T>
class BinaryTreeNode
{
   public :
    T data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    BinaryTreeNode(T a)
    {
        data=a;
        left=NULL;
        right=NULL;
    }
};
void PrintTree(BinaryTreeNode<int>* root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<"  :  ";
    if(root->left!=NULL)
    {
        cout<<"  L "<< root->left->data;
    }
    if(root->right!=NULL)
    {
        cout<<"  R "<< root->right->data;
    }
    cout<<endl;
    PrintTree(root->left);
    PrintTree(root->right);
}
BinaryTreeNode<int>* TakeInput()
{
    int rootdata;
    cout<<"enter root data"<<endl;
    cin>>rootdata;

    if(rootdata==-1)
    {
        return NULL;
    }
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootdata);
    BinaryTreeNode<int>* leftchild=TakeInput();
    BinaryTreeNode<int>* rightchild=TakeInput();
    root->left=leftchild;
    root->right=rightchild;

    return root;
}
int main()
{
    BinaryTreeNode<int>* root=TakeInput();
    PrintTree(root);

    return 0;
}