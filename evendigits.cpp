class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0,digit;
        for(int i=0;i<nums.size();i++)
        {
            digit=log10(nums[i])+1;
            if(digit%2==0)
            {
                count++;
            }
        }
        return count;
    }
};
