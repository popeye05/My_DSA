class Solution {
public:
    int kDistinctChar(string& s, int k) {
        //your code goes here
    unordered_map<int,int> map;
    int l=0,r=0,maxlen=0;
    while(r < s.length())
    {
        if(!map.count(s[r]))    map[s[r]] = 1;
       else map[s[r]]++;

        if(map.size() > k )
        {
            while(map.size()>k) {
                map[s[l]]--;
                if(map[s[l]] == 0) map.erase(s[l]);
                l++;
                
            }
            
        }
        maxlen = max(maxlen,(r-l+1));
        r++;
    }
    return maxlen;

};
