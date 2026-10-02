//Adjacency List approach
class Solution {
private:
    void dfs(vector<int> adjLs[],int i, vector<int> &vis)
    {
        vis[i] = 1;       
            for(auto it: adjLs[i])
            {
                if(vis[it] != 1)
                dfs(adjLs,it,vis);
            }
        
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        vector<int> adjLs[100];
        //This is to convert this given adj matrix into adj List
        for(int i= 0;i<isConnected.size();i++)
        {
            for(int j=0;j<isConnected[0].size();j++)
            {
                if(isConnected[i][j] == 1 && i!=j) //i.e theyre not self loop)
                {
                    adjLs[i].push_back(j);
                    adjLs[j].push_back(i);
                }
            }
        }
        //Now the main solution
        vector<int> vis(100,0);
        int cnt = 0;
        for(int i = 0;i<isConnected.size();i++)
        {
        
            if(vis[i] != 1)
            {
                cnt++; 
                dfs(adjLs,i,vis);
            }
        }
        return cnt;
    }
};
//Direct Matrix approach
class Solution {
private:
    void dfs(vector<vector<int>>& isConnected, int i, vector<int>& vis) {
        vis[i] = 1;
        for (int j = 0; j < isConnected.size(); j++) {
            if (isConnected[i][j] == 1 && !vis[j]) {
                dfs(isConnected, j, vis);
            }
        }
    }

public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> vis(n, 0);
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                cnt++;
                dfs(isConnected, i, vis);
            }
        }
        return cnt;
    }
};
