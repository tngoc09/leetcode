class Solution {
    public:
        vector<int> pivotArray(vector<int>& nums, int pivot) {
            queue<int>big;
            queue <int>small;
            queue <int>piv;
            queue <int>kq;
            for (int i=0; i<nums.size();i++)
            {
                if (nums[i]<pivot)
                {
                    small.push(nums[i]);
                }
                else if (nums[i]>pivot)
                {
                    big.push(nums[i]);
                }
                else piv.push(nums[i]);
            }
            int n=small.size();
            int m=big.size();
            int v=piv.size();
             while (!small.empty())
            {
                kq.push(small.front());
                small.pop();
            }
            while (!piv.empty())
            {
                kq.push(piv.front());
                piv.pop();
            }
           while (!big.empty())
            {
                kq.push(big.front());
                big.pop();
            }
            for (int i=0;i<nums.size();i++)
            {
                if (!kq.empty()) 
                {
                nums[i]=kq.front();
                kq.pop();
                }
            }
            return nums;
        }
    };