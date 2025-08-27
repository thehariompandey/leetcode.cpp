#include <iostream>
#include <string>
using namespace std;

bool rotateString(string s, string goal) {
    if (s.size() != goal.size()) return false;
    string doubled = s + s;
    return doubled.find(goal) != string::npos;
}

int main() {
    string s = "abcde";
    string goal = "bcdea";
    cout << rotateString(s, goal) << endl; // Output: 1 (true)
}
