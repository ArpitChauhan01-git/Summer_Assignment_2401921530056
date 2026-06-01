class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size(),k=1,i=1,flag=nums[0];
        while(i<n){
            if(nums[i] != nums[i-1] && nums[i] != flag){
                flag=nums[i];
                swap(nums[i], nums[k]);
                k++;
            }
            i++;
        }
        return k;
    }
    
};