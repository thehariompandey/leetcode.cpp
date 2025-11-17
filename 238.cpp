#include<iostream>
#include<vector>
using namespace std;

vector<int> product(vector<int>& nums){
    int n = nums.size();
    vector<int> result(n);

    // Step 1: Left products
    result[0] = 1;
    for(int i = 1; i < n; i++){
        result[i] = result[i - 1] * nums[i - 1];
    }

    // Step 2: Right products
    int right = 1;
    for(int i = n - 1; i >= 0; i--){
        result[i] = result[i] * right;
        right *= nums[i];
    }

    return result;
}

int main(){
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans = product(nums);

    for(int x : ans){
        cout << x << " ";
    }
}
