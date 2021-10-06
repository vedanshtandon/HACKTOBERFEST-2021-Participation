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

int countnodes(TreeNode<int>* root)
{
    int a=1;
    for(int i=0;i<root->children.size();i++)
    {
        a=a+ countnodes(root->children[i]);
    }
    return a;
}
TreeNode<int>* TakeInput()
{
    int n,rootdata;
    cout<<"enter the rootdata value "<<endl;
    cin>>rootdata;
    
    TreeNode<int>* root=new TreeNode<int>(rootdata);
    queue<TreeNode<int>*> pendingnodes;
    pendingnodes.push(root);

    while(pendingnodes.size()!=0)
    {
        TreeNode<int>* front=pendingnodes.front();
        pendingnodes.pop();
        int n;
        cout<<"enter thenumber of daughter nodes "<<endl;
        cin>>n;

        for(int i=0;i<n;i++)
        {
            cout<<"enter the data value"<<endl;
            int childdata;
            cin>>childdata;
            TreeNode<int>* child=new TreeNode<int>(childdata);
            pendingnodes.push(child);
            front->children.push_back(child);
        }
    }
    return root;
}

void printTree(TreeNode<int>* root)
{ 
    if(root==NULL)
    {
        return;
    }
     queue<TreeNode<int>*> pendingnodes;
     pendingnodes.push(root);

     while(pendingnodes.size()!=0)
     {
         TreeNode<int>* front=pendingnodes.front();
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
int main()
{
    TreeNode<int>* root=TakeInput();
    printTree(root);

    cout<<endl;
    cout<<endl;
    cout<<"the total number of nodes are "<<countnodes(root)<<endl;
    return 0;
}