#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start = start+1;
        }
    }
    return -1;
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int arraysize;
    arraysize = sizeof(arr)/sizeof(arr[0]);
    cout<< arraysize <<endl;
    cout<< binarySearch(arr, arraysize, 4 ) <<endl;
    return 0;
}