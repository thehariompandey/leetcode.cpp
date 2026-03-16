#include<iostream>
using namespace std;

class Animal {
    public: 
    int weight ;
    int height;
    int color;

    public:
    void speak(){
        cout << "speaking" << endl;
    }
};

class Dog : public Animal{

};

int main(){
    Dog M1;
    M1.speak();
    M1.height

    return 0;
}