class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int> > res;
        set<vector<int> > ans;
        vector<int> temp;
        if(nums.size()==0){
            res.push_back(temp);
            return res;
        }
        int max=pow(2, nums.size())-1;
        int k=0;
        while(k<=max){
            int i=0;
            /*if(k==0){
                temp.push_back(nums[0]);
                ans.push_back(temp);
                temp.clear();
                ++k;
                continue;
            }*/
            int abc=k+1;
            while(k){
                if(k%2==1){
                    temp.push_back(nums[i]);
                }
                k/=2;
                ++i;
            }
            sort(temp.begin(), temp.end());
            ans.insert(temp);
            temp.clear();
            k=abc;
        }
        for(set<vector<int> >::iterator it=ans.begin();it!=ans.end();it++)
            res.push_back(*it);
        return res;
    }
};