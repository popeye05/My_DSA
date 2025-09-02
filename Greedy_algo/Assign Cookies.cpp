
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
      int  n1=g.size(),n2=s.size(),l=0,r=0;
      sort(g.begin(),g.end());
      sort(s.begin(),s.end());
      //I'll need two pointers l (or cookies )and h(it'll utesrate through chilren). It'll iterate through thr g&s respectively..
      while(l<n2 && r < n1 )
      {
        if(g[r]<=s[l]) //if size of cookie is <= to children greed, then we satisfy.. and r++
        {
          r++;
        } //If greed satisfied, then move to next
        l++;
      }return r;
    }
};
