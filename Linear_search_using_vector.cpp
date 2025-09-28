#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> nums(7);
    for(int val: nums){
        cout<<"Enter value:\t";
        cin>>val;
        nums.push_back(val);
    }
    int value;
    cout<<"Enter target value: ";
    cin>>value;
    bool flag = false;
    for(int val1: nums){
        if(value==val1){
            flag = true;
            break;
        }
    }
    if(flag){
        cout<<"Target value found!";
    }
    else{
        cout<<"Target value not found!";
    }
}