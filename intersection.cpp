#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {2, 0, 7, 9, 6};
    int arr2[] = {4, 8, 0, 6, 7};

    cout << "Intersection of array is ";
    for (int i = 0; i < 5; i++)
    {
        bool flag = false;
        for (int j = 0; j < 5; j++)
        {
            if(arr1[i] == arr2[j]){
                flag = true;
                break;
            }
        }
        if(flag){
            cout<<arr1[i]<<"\t";
        }
    }
    return 0;
}