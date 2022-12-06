vector<long long> printFirstNegativeInteger(long long int a[],
                                            long long int n, long long int k)
{
    vector<long long int> ans;
    vector<long long int> temp;
    int i = 0, j = 0;
    while (j < n)
    {
        if (a[j] < 0)
        {
            temp.insert(temp.begin(), a[j]);
        }
        if (j - i + 1 < k)
        {
            j++;
        }
        else
        {
            if (temp.size() == 0)
            {
                ans.push_back(0);
            }
            else
            {
                ans.push_back(temp.back());
                if (a[i] == temp.back())
                {
                    temp.pop_back();
                }
            }
            i++;
            j++;
        }
    }
    return ans;
}
Time Complexity : O(n);
Auxiliary Space : O(n - k + 1);