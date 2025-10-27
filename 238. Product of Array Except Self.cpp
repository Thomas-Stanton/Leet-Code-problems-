/*

// MY ATTEMPT BECAME A O(^2) RUNTIME. FAILED CONSTRAINTS OF THE O(N) RUNTIME.

  class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer;
        // have a double for loop. run through each position
        int notSimple = accumulate(nums.begin(), nums.end(), 1, std::multiplies<int>());
        if(2 <= nums.size() <= 10^(5))
        {
            if(notSimple != 1 || notSimple != -1)
            {
                for(int i =0; i < nums.size(); i++)
                {
                    vector<int> tempNums = nums;
                    tempNums.erase(tempNums.begin() + i);

                    answer.push_back(accumulate(tempNums.begin(), tempNums.end(), 1, std::multiplies<int>()));
                }
            }
            else
            {
                for(int i =0; i < nums.size(); i++)
                {
                    answer.push_back(nums.at(i));
                }
            }
        }
        return answer;
    
        }
};
*/

//THE FOLLOWING IS A OPTIMIZED CODE WITH A O(N) RUNTIME USING PREFIX&SUFFIX MULTIPLICATION
// I understand that the most optimal way to approach this problem is to handle through simplified tasks with one aspect being calculated at a time to avoid
//significant operation overhead.

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
    int n = nums.size();
        vector<int> answer(n, 1);
    
        // Calculate prefix products
        int prefix = 1;
        for (int i = 0; i < n; i++) 
        {
            answer[i] = prefix;
            prefix *= nums[i];
        }
    
        // Calculate suffix products and combine with prefix
        int suffix = 1;
        for (int i = n - 1; i >= 0; i--)   
        {
            answer[i] *= suffix;
            suffix *= nums[i];
        }
    
        return answer;
    
    }
};
