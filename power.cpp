#include<iostream>
using namespace std;

double myPow(double x , int n){
    // double ans = 1.0;

    // for(int i = 0; i< n ; i++){
    //     ans = ans * x;
    // }
    // return ans;

    long long expo = n ;
    if(expo < 0){
        x = 1/x;
        expo = -expo;
    }

    double ans = 1.0;
    while(expo > 0){
        if(expo % 2 == 1){
            ans = ans * x;
            x *= x;
            expo /= 2;
        }
        else{
            x *= x;
            expo /= 2;
        }
    }
    return ans;
}

int main(){
    cout << myPow(2,10);
    return 0;
}