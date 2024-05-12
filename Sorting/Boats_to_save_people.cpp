#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numRescueBoats(vector<int> &people, int limit)
    {
        int n = people.size();
        int count = n;
        int j = 0;
        int i = n - 1;
        sort(people.begin(), people.end());
        while (i > j)
        {
            if (people[i] + people[j] <= limit)
            {
                count--;
                j++;
                i--;
            }
            else
            {
                i--;
            }
        }
        return count;
    }
};
