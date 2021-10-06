#include <bits/stdc++.h>
using namespace std;
template <typename T>
class BinaryTreeeNode
{
    public:
    T data;
    BinaryTreeeNode* left;
    BinaryTreeeNode* right;

    BinaryTreeeNode(T a)
    {
        data=a;
        left=NULL;
        right=NULL;
    }
};

BinaryTreeeNode<int>* TakeInput()
{
    int rootdata;
    cout<<"enter root data"<<endl;
    cin>>rootdata;

    if(rootdata==-1)
    {
        return NULL;
    }
    BinaryTreeeNode<int>*root=new BinaryTreeeNode<int>(rootdata);
    queue<BinaryTreeeNode<int>*> pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size()!=0)
    {
        BinaryTreeeNode<int>* front=pendingnodes.front();
        pendingnodes.pop();

        cout<<"enter left chid of "<<front->data<<endl;
        int leftchilddata;
        cin>>leftchilddata;
        if(leftchilddata!=-1)
        {
           BinaryTreeeNode<int>* leftchild=new BinaryTreeeNode<int>(leftchilddata);
           front->left=leftchild;
           pendingnodes.push(leftchild);
        }


         cout<<"enter right chid of "<<front->data<<endl;
        int rightchilddata;
        cin>>rightchilddata;
        if(rightchilddata!=-1)
        {
           BinaryTreeeNode<int>* rightchild=new BinaryTreeeNode<int>(rightchilddata);
           front->right=rightchild;
           pendingnodes.push(rightchild);
        }
    }
    return root;
}
void PrintTree(BinaryTreeeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " : ";
    if (root->left != NULL)
    {
        cout << "L." << root->left->data << "  ";
    }
    if (root->right != NULL)
    {
        cout << "R." << root->right->data << "  ";
    }
    cout << endl;
    PrintTree(root->left);
    PrintTree(root->right);
}
int main()
{
    BinaryTreeeNode<int>* root=TakeInput();
    PrintTree(root);
    return 0;
}
