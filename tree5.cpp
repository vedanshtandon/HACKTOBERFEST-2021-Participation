// in this code we will takelevel wiseinput with the help of queue

#include <bits/stdc++.h>
using namespace std;
template <typename T>
class TreeNode
{
public:
    T data;
    vector<TreeNode*> children;

    TreeNode(T a)
    {
        data=a;
    }
};

//taking input BfS breadth first search

TreeNode<int> *TakeInput()
{
    int n, rootdata;
    cout << "enter the value of root data " << endl;
    cin >> rootdata;

    TreeNode<int> *root = new TreeNode<int>(rootdata);

    queue<TreeNode<int> *> pendingnodes;
    pendingnodes.push(root);
    while (pendingnodes.size() != 0)
    {
        cout << "enter the number of daughter nodes " << endl;
        cin >> n;

        TreeNode<int> *front = pendingnodes.front();
        pendingnodes.pop();

        for (int i = 0; i < n;i++)
        { 
            int childdata;
            cout<<"enter the value of "<<i<<" th daught node of"<<front->data <<endl;
            cin>>childdata;

            TreeNode<int>* child=new TreeNode<int>(childdata);
            pendingnodes.push(child);
            front->children.push_back(child);
        }
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