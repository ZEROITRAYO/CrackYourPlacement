class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        if(nums.size()==1) return 0;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(mid==0 && nums[mid]>nums[mid+1]) return mid;
            else if(mid==nums.size()-1 && nums[mid]>nums[mid-1]) return mid; 
            if(mid>0 && mid<nums.size()-1)
            {
                if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])return mid;
            } 
            if(nums[mid+1]>nums[mid]) start=mid+1; 
            else end=mid-1; 
        }
        return 0;
}
   

};