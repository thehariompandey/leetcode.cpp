#include<iostream>
using namespace std;

bool find(int arr[3][4], int target){
    for(int i = 0 ; i<3 ; i++ ){
        for(int j = 0 ; j< 4; j++){
            if(arr[i][j] == target){
                cout<< "found" << endl;
                return true;
            }
        }
    }
    cout << "not found" << endl;
    return false;
}

int RowSum(int arr[3][4]){
    for(int i = 0 ; i< 3; i++){
        int sum = 0;
        for(int j = 0 ; j< 4 ; j++){
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
}

// col wise sum 
int colsum(int arr[3][4]){
    for(int i = 0; i< 4; i++){
        int sum = 0;
        for(int j = 0 ; j< 3; j++){
            sum += arr[j][i];
        }
        cout << sum <<  " ";
    }
}

int main(){
    int arr[3][4];


    // row wise input
    // for(int row = 0 ; row< 3 ; row++){
    //     for(int col = 0 ; col < 4 ; col++){
    //         cin >> arr[row][col];
    //     }
    // }

     for(int row = 0 ; row< 4 ; row++){
        for(int col = 0 ; col < 3 ; col++){
            cin >> arr[col][row];
        }
    }

    //output
     for(int row = 0 ; row< 3 ; row++){
        for(int col = 0 ; col < 4 ; col++){
            cout<< arr[row][col] << " ";
        }
        cout << endl;
    }
    cout << "row wise sum ";
    RowSum(arr);

    cout << endl;
    cout << "col wise sum " ;
    colsum(arr);

    // find(arr, 15);

    return 0;
}