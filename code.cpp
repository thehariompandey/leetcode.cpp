#include<iostream>
using namespace std;

int  sum(int num , int j ){
    if(num >j){
        return 0;
    }
    else{
        return num + sum(num + 1, j);
    }
}

int main(){
    int j ;
    int i ;
    cout << "enter the number" << endl;
    cin >> i >> j;

   cout << "sum of the no is  " <<  sum(i,j) << endl;
    return 0;


}