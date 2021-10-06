#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &v,int l,int m,int h)
{
	vector<int> temp;
	int left = l;
	int right = m+1;
	while(left<=m && right<=h)
	{
		if(v[left]<=v[right])
		{
			temp.push_back(v[left++]);
		}
		else
		{
			temp.push_back(v[right++]);
		}
	}
	while(left<=m)
	{
		temp.push_back(v[left++]);
	}
	while(right<=h)
	{
		temp.push_back(v[right++]);
	}
	for(int i=l;i<=h;i++)
	{
		v[i] = temp[i-l];
	}
}
void mergeSort(vector<int> &v,int l,int h)
{
	if(l<h)
	{
		int m = (l+h)/2;
		mergeSort(v,l,m);
		mergeSort(v,m+1,h);
		merge(v,l,m,h);
	}
}
int main()
{
	int n,i;
	vector<int> v;
	cin>>n;
	v.resize(n);
	for(i=0;i<n;i++)
	{
		cin>>v[i];
	}
	mergeSort(v,0,n-1);
	for(i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}