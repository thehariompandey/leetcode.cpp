#include<iostream>
#include<vector>
using namespace std ;


vector<vector<int>> subsetgenerating(vector<int> nums){
    int n = nums.size();
    vector<vector<int>> result;

    for(int i = 0 ; i< (1<< n ) ; i++){
        vector<int> subset ;
        for(int j = 0; j< (1<<n) ; j++){
            if(i & (1<< j ))
            subset.push_back(nums[j]);
        }
        result.push_back(subset);
    }
    return result;

}

int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> result = subsetgenerating(nums);

    cout << "Subsets:\n";
    for (auto& subset : result) {
        cout << "{ ";
        for (int num : subset) cout << num << " ";
        cout << "}\n";
    }
    return 0;
}