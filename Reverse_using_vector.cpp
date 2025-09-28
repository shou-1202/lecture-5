#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec(7);
    cout<<"Enter elements:";
    for(int i = 0; i<7;i++){
        cin>>vec[i];
    }

    cout<<"Original vector: ";
    for(int i = 0; i <7;i++){
        cout<<vec[i]<<"\t";
    }

    for(int i = 0; i <3;i++){
        int temp = vec[i];
        vec[i] = vec[6-i];
        vec[6-i] = temp;
    }

    cout<<"Reversed vector: ";
    for(int i = 0; i <7;i++){
        cout<<vec[i]<<"\t";
    }
}