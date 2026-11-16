#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int h,w,n,q;
    cin>>h>>w>>n>>q;
    vector<int> row(n);
	vector<int> col(n);
	for (int i = 0; i < n; i++)
	{
		int r,c;
		cin>>r>>c;
		row[r]++;
		col[c]++;
	}

	vector<int> row_prefix(h+1,0);
	row_prefix[0]=row[0];
	for (int i = 1; i <= h; i++)
	{
		row_prefix[i]=row_prefix[i-1]+row[i];
	}
	vector<int> col_prefix(w+1,0);
	col_prefix[0]=col[0];
	for (int i = 1; i <= w; i++)
	{
		col_prefix[i]=col_prefix[i-1]+col[i];
	}

	for (int i = 0; i < q; i++)
	{
		int type,l,c;
		cin>>type>>l>>c;
		if(type==1)
		{
			cout<<row_prefix[c]-row_prefix[l-1]<<endl;
		}
		else if(type==2)
		{
			cout<<col_prefix[c]-col_prefix[l-1]<<endl;
		}
	}
}
