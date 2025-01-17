class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     vector<int>ans;
     for(int i=1;i<nums.size();++i){
        for(int j=0;j<i;++j){
            if(nums[i]+nums[j]==target){
                int index1=i;
                int index2=j;
                ans.push_back(index1);
                ans.push_back(index2);
            }
        }
     }
     return ans;   
    }
};