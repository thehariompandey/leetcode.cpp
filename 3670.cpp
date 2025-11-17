#include <iostream>
#include <vector>
using namespace std;

int compareAndProduct(int a, int b) {
    bool allSame = true;

    for (int bit = 0; bit < 32; bit++) {
        int abit = (a >> bit) & 1;
        int bbit = (b >> bit) & 1;

        if (abit != bbit) {
            allSame = false; // at least one difference
        }
    }

    if (allSame) {
        return 0;           // sab bits same
    } else {
        return a * b;       // kuch bits different
    }
}

int main() {
    vector<int> nums = {1,2,3,4,5,6,7};

    int n = nums.size();
    int maxproduct = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            int a = nums[i];
            int b = nums[j];

            int result = compareAndProduct(a, b);

            if(result > maxproduct){
                maxproduct = result;
            }

            cout << "maxproduct is " << maxproduct << endl;
        
        }
    }

    return 0;
}
