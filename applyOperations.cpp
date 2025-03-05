class Solution {
    public:
        vector<int> applyOperations(vector<int>& nums) {
            for (int i=0; i<nums.size()-1;i++)
            {
                if(nums[i]==nums[i+1])
                {
                    nums[i]*=2;
                    nums[i+1]=0;
                }
            }
            vector<int> res(nums.size());
            int j=0;
            for (int k=0; k<nums.size();k++)
            {
                if(nums[k]!=0)
                {
                    res[j]=nums[k];
                    j+=1;
                }
            }
            while (j<nums.size())
            {
                res[j]=0;
                j++;
            }
            return res;
        }
    };