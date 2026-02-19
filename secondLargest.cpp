#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>unique(vector<int>arr, int n){
    vector<int>ans;
    for(int i = 0 ; i< n ; i++){
        if(ans.empty()|| ans.back() != arr[i]){
            ans.push_back(arr[i]);
        }
    }
    return ans;
    
}

int main(){
    vector<int>arr = {8,8,7,5,5,9,3,6,2};
    int n = arr.size();
    
    vector<int> result = unique(arr, n);
    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());
    
       cout << "second largest is equal to " << result[1] << endl;
       cout << *max_element(result.begin(), result.end()) << endl;
    
    for(auto x : result){
        cout << x << " ";
    }
    
    return 0;
}