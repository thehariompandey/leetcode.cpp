#include<iostream>
using namespace std ;

bool isprime(int x) {
    if (x < 2) return false;

    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}

int good_count(string s ){
    int count = 0;
    int n = s.size();

    for(int i = 0 ; i< n ; i++){
        int digit = s[i] -'0';
        
        if(i % 2 == 0){
            if(digit % 2 == 0){
                count++ ;
            }
        }
        else{
            if(isprime(digit)){
                count++ ;
            }
        }
    }
  return count;
}

int main(){
    string s ;
    cout << "enter the string" << endl;
    cin >> s ;

    cout << good_count(s) << endl;
    
    return 0;
}