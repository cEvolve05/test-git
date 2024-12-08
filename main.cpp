#include <iostream>
#include "hhh.cpp"
#include<vector>
#include<string>
using namespace std;
int main() {
    cout << "Hello, World!" << endl;
    cout << "This is a test program." << endl;
    vector<string> v;
    v.push_back("apple");
    v.push_back("banana");
    v.push_back("orange");
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    // call the function from hhh.cpp
    return 0;

}

