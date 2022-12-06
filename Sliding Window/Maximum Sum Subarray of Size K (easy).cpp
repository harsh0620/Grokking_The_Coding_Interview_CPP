class Solution
{
public:
    long maximumSumSubarray(int k, vector<int> &a, int n)
    {
        // code here
        long long int sum = 0, ans = LLONG_MIN;
        for (int i = 0; i < k; i++)
        {
            sum += a[i];
        }
        ans = max(ans, sum);
        for (int i = k; i < n; i++)
        {
            sum += a[i];
            sum -= a[i - k];
            ans = max(ans, sum);
        }
        return ans;
    }
};
Time Complexity : O(n);
Auxiliary Space : O(1);