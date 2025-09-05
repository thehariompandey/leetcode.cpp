#include<iostream>
#include<algorithm>
using namespace std;

string convert2binary(int n){
    string res =" ";

    while(n >0){
        if(n % 2 == 1) res += "1" ;
        else{
            res += "0";
        }
        n = n/2;
    }
    reverse(res.begin(), res.end());
    return res;
}

double convert2string(bool n){

}

int main(){
    cout << convert2binary(13) << endl;
    return 0;

}