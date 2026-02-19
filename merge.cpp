#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> arr2 = {1,2,7};

    for(int i = 0 ; i<arr2.size() ; i++){
            if(find(arr.begin(), arr.end(), arr2[i]) == arr.end()){
                arr.push_back(arr2[i]);
            }
    }
    sort(arr.begin(), arr.end());
    
    for(auto x : arr){
        cout << x << " "; 
    }
    
    return 0;
}