#include<iostream>
using namespace std;

int fact(int n){
    if(n <= 1)
    return 1;
    return n * fact(n-1);

}

int main(){
    int n ;
    cout << "enter the number" << endl;
    cin >> n ;

    cout <<"factorial of n number is " <<  fact(n) << endl;

    return 0;
}