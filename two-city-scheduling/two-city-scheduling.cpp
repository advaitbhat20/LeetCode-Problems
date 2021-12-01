class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n = costs.size();
        vector<vector<int>> diff(n, vector<int>(2, 0));
        
        for(int i=0; i<n; i++)
        {
            diff[i][0] = i;
            diff[i][1] = abs(costs[i][0] - costs[i][1]);
        }
        
        
        sort(diff.begin(), diff.end(), 
            [](vector<int> &a, vector<int> &b)
             {
                 return (a[1]>b[1]);
             });
        
        
        int a = n/2;
        int b = n/2;
        int ans = 0;
        
        for(int i=0; i<n; i++)
        {
            int index = diff[i][0];
            if(costs[index][0] < costs[index][1])
            {
                if(a>0)
                {
                    ans += costs[index][0];
                    a--;
                }
                else
                {
                   ans += costs[index][1];
                    b--; 
                }
            }
            else
            {
                if(b>0)
                {
                    ans += costs[index][1];
                    b--;
                }
                else
                {
                   ans += costs[index][0];
                    a--; 
                }
            }
            
        }
        
        return ans;
    }
};