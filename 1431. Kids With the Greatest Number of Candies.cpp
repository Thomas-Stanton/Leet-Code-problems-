/*
O(1) runtime, 2 minutes to code. 99th percentile runtime. 92 percentile memory usage with pointer to array.

*/


class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
     {
        vector<bool> mostCandies;
        int max = *max_element(candies.begin(), candies.end());
        for(int i =0; i < candies.size(); i++)
        {
            if(candies.at(i) + extraCandies >= max )
            {
                mostCandies.push_back(true);
            }
            else
            {
                mostCandies.push_back(false);
            }
        }
        return mostCandies;
    }
};
