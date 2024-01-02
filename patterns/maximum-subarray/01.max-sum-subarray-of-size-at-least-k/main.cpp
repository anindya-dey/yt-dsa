#include <iostream>
using namespace std;

class Solution
{
public:
    long long int maxSumWithK(long long int a[], long long int n, long long int k)
    {
        long long int sum = 0;

        for (long long int i = 0; i < k; i++)
        {
            sum += a[i];
        }

        long long int last = 0;
        long long int j = 0;
        long long int ans = LLONG_MIN;
        ans = max(ans, sum);

        for (long long int i = k; i < n; i++)
        {
            sum += a[i];
            last += a[j++];
            ans = max(ans, sum);

            if (last < 0)
            {
                sum -= last;
                ans = max(ans, sum);
                last = 0;
            }
        }

        return ans;
    }
};
