class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0, one=0, two=0;
        for(int i=0;i<nums.size();i++){
            zero=nums[i]==0?zero+1:zero;
            one=nums[i]==1?one+1:one;
            two=nums[i]==2?two+1:two;
        }
        int i=0;
        while(zero){
            nums[i]=0;
            ++i;
            --zero;
        }
        while(one){
            nums[i]=1;
            ++i;
            --one;
        }
        while(two){
            nums[i]=2;
            ++i;
            --two;
        }
    }
};