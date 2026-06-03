class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int left=0, right=n-1, pos=n-1;
        while(left<=right){
            int leftIdx = nums[left]*nums[left];
            int rightIdx = nums[right]*nums[right];

            if(leftIdx >= rightIdx) {
                ans[pos] = leftIdx;
                left++;
            }else{
                ans[pos] = rightIdx;
                right--;
            }
            pos--;
        }
        return ans;
    }
};