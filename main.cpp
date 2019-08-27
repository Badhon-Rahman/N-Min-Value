#include <iostream>

using namespace std;

int FindMinN(int arr[], int arrSize, int smallestN, int j){
    int minValue = arr[0] , x = 0;
    int tempArr[arrSize - 1];

    for(int i = 0; i < arrSize; i++){
        minValue = min(minValue, arr[i]);
    }
    for(int i = 0; i < arrSize; i++){
        if(arr[i] != minValue){
            tempArr[x] = arr[i];
            x++;
        }
    }
    if(j == smallestN){
        return 0;
    }
    else{
        cout << minValue << " ";
        return FindMinN(tempArr, arrSize - 1, smallestN , j+1);
    }

}


int main()
{
    int arrSize;
    cout << "Enter Array size: ";
    cin >> arrSize;

    int arr[arrSize], smallestN;
    cout << "Enter Array Elements: ";
    for(int i = 0; i < arrSize; i++){
        cin >> arr[i];
    }
    cout << "Enter wanted Smallest elements Number: ";
    cin >> smallestN;

    FindMinN(arr, arrSize, smallestN, 0);

    return 0;
}
