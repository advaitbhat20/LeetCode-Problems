class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int count = 0;
        
        if(strs.size() == 0)
        {
            return ans;
        }
        
        if(strs.size() == 1)
        {
            return strs.at(0);
        }
        
        while (count < strs.at(0).length())
        {
            for(int i=0; i<(strs.size()-1); i++)
            {
                if(strs.at(i).length() > count && strs.at(i+1).length() > count)
                {
                    if(strs.at(i).at(count) != strs.at(i+1).at(count))
                    {
                        return ans;
                    }
                    if(i == strs.size()-2)
                    {
                        ans += strs.at(i).at(count);
                    }
                }
                else
                {
                    return ans;
                }
            }
            count++;
        }
    
        return ans;
    }
};