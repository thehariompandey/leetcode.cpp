#include<iostream>
using namespace std ;

int getLength(const string& s){
    int i = 0, cnt = 0;
    while(s[i]){
        i++ ;
        cnt++ ;
    }
    return cnt;

}

int findch(string& s, char ch){
    int n = s.size();
    for(int i = 0; i< n ; i++){
        if(s[i] == ch)
            return i;
        
    }
    return -1;
}

string insertion(string& s , char ch, int pos){
    string res = "";

    for(int i = 0; i< s.length() ; i++){
        if(i == pos)
        res.push_back(ch);

        res.push_back(s[i]);
    }

        // you want to add in last 
        if(pos >= s.length()){
            res.push_back(ch);
        }

        return res;
    
}


int main(){
    string s = "Hari";
    char ch = 'z';


    // cout << s.size() << endl;  // by using built in function
    // cout << getLength(s) << endl;

    cout << findch(s , ch ) << endl;

    return 0;
}