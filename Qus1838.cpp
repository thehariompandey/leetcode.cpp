#include<iostream>
#include<vector>
using namespace std;

int max_freq(vector<int>nums, int n, int k){
    int ans = 1;
    for (int i = 0; i < n; i++) {
        int target = nums[i];
        int count = 0, ops = 0;
        for (int j = 0; j < n; j++) {
            if (nums[j] <= target) {
                ops += (target - nums[j]);
                if (ops <= k) count++;
                else break;
            }
        }
        ans = max(ans, count);
    }
    return ans;
}

int main(){
    vector<int> nums = {1,2,4};
    int n = nums.size();
    int k = 5;
    cout << max_freq(nums,n , k);

    return 0;


}