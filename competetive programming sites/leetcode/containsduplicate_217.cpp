class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int check = 0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1]){
                check=1;
            }
        }
        if(check==1){
            return true;
        }
        else{
            return false;
        }
    }
};