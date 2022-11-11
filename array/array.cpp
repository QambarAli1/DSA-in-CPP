#include <iostream>
using namespace std;

// SWAP FUNCTION
void swap(int a, int b){
    int c=a;
    a=b;
    b=c;
    cout<<'a'<<a<<endl;
    cout<<'b'<<b<<endl;
}

void dynamicArray(int size){
    int* dArray = new int[size];
    for(int i=0; i<size; i++){
        cin>>dArray[i];
    }
    for(int i=0; i<size; i++){
        // cout << dArray[i] << " ";
        cout << *(dArray + i) << " ";

    }
    cout<< dArray <<endl;
    // cleanup 
    delete[]dArray;
    dArray = NULL;
    cout<< dArray <<endl;
};
void array2d()
{
    int arr[2][6]={
        {1,2,3,4,5,6},
        {7,8,9,10,11,12}
    };
    for(int i=0;i<2;i++){
        for(int j=0;j<6;j++){
            cout<< arr[i][j] << " ";
        }
        cout<<endl;
    }
}
int main(){
    // cout<<"Hello"<<endl;
    int x = 4;
    int y = 6;
    // swap(x,y);
    dynamicArray(5);
    // array2d();
    return 0;
}