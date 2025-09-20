#include<iostream>
#include<vector>
using namespace std;

vector<int> rearrangeBySign(vector<int> nums , int n){

    vector<int> pos , neg , arr ;

    // separate positive and negative 
    for(int num : nums){
        if(num > 0){
            pos.push_back(num);
        }
        else{
            neg.push_back(num);
        }
    }

    // merge them alternatively 
    for(int i = 0 ; i < pos.size() ; i++){
        arr.push_back(pos[i]);
        arr.push_back(neg[i]);
    }
    return arr;

}

int main(){

    int n = 6;
    vector<int> nums{3,1,-2,-5,2,-4};


    vector<int> arr = rearrangeBySign(nums, n );

    for(int i = 0 ; i< arr.size() ; i++){
        cout << arr[i] << " ";
    }

    return 0;
}