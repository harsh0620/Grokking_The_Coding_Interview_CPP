class Solution
{
public:
    vector<int> findAnagrams(string s, string pat)
    {
        int n = s.length();
        int k = pat.length();
        vector<int> ans;
        vector<int> st(256, 0);
        vector<int> patt(256, 0);
        if (n < 0 || k < 0 || n < k)
            return {};
        for (int i = 0; i < k; i++)
        {
            st[256 - s[i]]++;
            patt[256 - pat[i]]++;
        }
        if (st == patt)
            ans.push_back(0);
        for (int i = k; i < n; i++)
        {
            st[256 - s[i]]++;
            st[256 - s[i - k]]--;
            if (patt == st)
            {
                ans.push_back(i - k + 1);
            }
        }
        return ans;
    }
};
Time Complexity : O(l1 + l2);
Auxiliary space : O(l1 + l2);