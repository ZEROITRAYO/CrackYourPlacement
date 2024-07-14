class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int point=1;
        for  (int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[point]=nums[i];
                point=point+1;
            }
        }
        return point;
    }
};