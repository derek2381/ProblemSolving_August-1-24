// problem link
// https://leetcode.com/problems/longest-consecutive-sequence/description/


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int n = nums.size();

        if(n == 0)
        {
            return 0;
        }        
        sort(nums.begin(), nums.end());
        set<int> st;
        int count = 1, maxCount = 1;
        st.insert(nums[0]);

        for(int i = 1;i < n;i++){
            if(st.find(nums[i]-1) != st.end() && nums[i] != nums[i-1]){
                count++;
            }else if(st.find(nums[i]-1) != st.end() && nums[i] == nums[i-1]){
                count = count;
            }
            else{
                count = 1;
            }
            st.insert(nums[i]);

            if(count > maxCount){
                maxCount = count;
            }
        }

        return maxCount;
    }
};