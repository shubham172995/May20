class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int idx=1, count=1, size=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                ++count;
                if(count<=2){
                    nums[idx]=nums[i];
                    ++idx;
                    ++size;
                }
            }
            else{
                nums[idx]=nums[i];
                count=1;
                ++size;
                ++idx;
            }
        }
        return size;
    }
};