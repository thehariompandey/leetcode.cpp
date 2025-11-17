#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int reverseInt(int n)
{
    int ans = 0;
    while(n !=0){
        int digit = n %10 ;
        // to protect it from overflow
        if(ans > INT_MAX || (ans == INT_MAX / 10 && digit> 7))
        return 0;
        if(ans < INT_MIN || ( ans == INT_MIN/10 && digit < -8))
        return 0;
        ans = ans * 10 + digit ;
        n = n / 10;
    }
    return ans;
}

int main()
{
    int n;
    cout << "enter the no " << endl;
    cin >> n;

    cout << "your reverse digit is " << reverseInt(n) << endl;
}