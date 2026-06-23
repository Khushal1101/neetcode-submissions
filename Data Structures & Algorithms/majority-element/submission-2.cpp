class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int element;
        int count = 0;
        for (int i = 0; i <= n - 1; i++) {
            if (count == 0) {
                element = nums[i];
            }
            if (nums[i] == element) {
                count++;
            } else {
                count--;
            }
        }
        int check = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == element) {
                check++;
            }
        }
        if(check>n/2){
            return element;
        }
        else{
            return -1;
        }
    }
};