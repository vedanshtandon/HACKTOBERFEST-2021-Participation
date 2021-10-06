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

TreeNode<int> *TakeInputLevelWise()
{
    int n, rootdata;
    cout << "Enter root data" << endl;
    cin >> rootdata;
    TreeNode<int> *root = new TreeNode<int>(rootdata);
    queue<TreeNode<int> *> pendingnodes;
    pendingnodes.push(root);
    while (pendingnodes.size() != 0)
    {
        TreeNode<int> *front = pendingnodes.front();
        pendingnodes.pop();

        cout << "enter number of daughter nodes " << front->data << endl;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int childdata;
            cout << "enter " << i << "  th child data of " << front->data << endl;
            cin >> childdata;
            TreeNode<int> *child = new TreeNode<int>(childdata);
            front->children.push_back(child);
            pendingnodes.push(child);
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
   TreeNode<int>* root=TakeInputLevelWise();
   printtree(root);
   return 0;
}
