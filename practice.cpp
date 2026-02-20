// qus find missing no ;

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {0,1,2,3,5};
    for(int i = 0 ; i< 5 ; i++){
        if(arr[i] != i){
            cout << i;
            break;
        }
    }
    return 0;
}