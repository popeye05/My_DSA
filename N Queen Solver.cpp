//N Queens Brute Force Approach:\
(leetcode hard Q no51.)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class solution{
	private:
		//Here  I will Make The Other fxs, as I need them
		bool isSafe(int row, int col, vector<string> &board, int n)
		{
			int dupRow=row;
			int dupCol=col;
			
			//Upper Diagonal
			while(row>=0 &&col>=0)
			{
				if(board[row][col]=='Q') return false;
				row--;col--	;
			}
			//Lower Diagonal
			row=dupRow;
			col=dupCol;
			while(row<n &&col>=0)
			{
				if(board[row][col]=='Q') return false;
				row++;col--	;
			}
			row=dupRow;
			col=dupCol;
			while(col>=0)
			{
				if(board[row][col]=='Q') return false;
				col--;	
			}
			return true;
		}
		void solve(int col,vector<string> &board, vector<vector<string> > &ans, int n)
		{
			//i'll be using recursion
			//col is column and i am solving for each queen if it can be placed in each column
			if(col==n)//this is my base case
				{
					ans.push_back(board);
					return;
				}
			for(int row=0;row<n;row++)
			{
				//ill use a fx which will check if i can place a queen or not
	
				if(isSafe(row,col,board,n)) //if we can place
				{
					board[row][col]='Q';
					solve(col+1,board,ans,n);
					board[row][col]='.'; //Now I need to make it empty, Because we're backtracking
					
				}
				
			}
		}
	public:
		vector<vector<string> > Nqueens(int n)
		{
			vector<vector<string> > ans;
			vector<string> board(n);//I will use the string as one row of board, and vector for columns
			string	s(n,'.');//N size string init with '.'(means empty)
			for(int i=0;i<board.size();i++)
			{
				board[i]=s;
			}
			//I now have everything , and now my sol begins:
			solve(0,board,ans,n);
			return ans;
		}
};

int main()
{
	cout<<"This is a N queens solver: \n"<<"Enter The Row/Column of Your board: ";
	int n; cin>>n;
	vector<vector<string> > ans;
	solution s;
	ans = s.Nqueens(n);
	//Printing my result:
	/*for(int i=0;i<ans.size();i++)
	{
		for(int j=0;j<ans[i].size();j++)
		{
			cout<<ans[i][j]<<"\t";
		}cout<<"\n";
	}*/
	//With Proper format(GPT MODIFIED)
	for (int i = 0; i < ans.size(); i++) {
    cout << "Solution " << i+1 << ":\n";
    for (int j = 0; j < ans[i].size(); j++) {
        for (int k = 0; k < ans[i][j].size(); k++) {
            cout << ans[i][j][k] << " ";  // add space between chars
        }
        cout << "\n";
    }
    cout << "\n";
}
}
