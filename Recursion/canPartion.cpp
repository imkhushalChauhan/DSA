class Solution {
public:

    bool solve(vector<int> nums, int index, int target){
        if(target==0) return true;
        if(index==nums.size()) return false;

        if(nums[index]>target){
           return solve(nums,index+1,target);
        }

        return solve(nums,index+1,target) || solve(nums,index+1,target-nums[index]);
    }

    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
        }
        if(sum%2!=0){
            return false;
        }
        else{
            return solve(nums,0,sum/2);
        }
    }
};