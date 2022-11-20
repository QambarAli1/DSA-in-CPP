#include <iostream>
#include <cstring>
using namespace std;


void addKey (int num, int HS,int *HT){
    int HI = num % HS;
    if(HT[HI]==-1){
        HT[HI] = num;
        // cout << "Number " << num <<  " added at index "<< HI << endl;
    }
    else{
        int i = HI;
        int count = 0;
        while(HT[i] != -1){
            count++;
            if(i == (HS-1)){
                i = (i+1)%HS;
            }
            else{
                i++;
            }
            if(count == HS){
                cout << "Array is filled "<< endl;
                break;
            }
        }
        if (HT[i] == -1)
        {
            HT[i] = num;
        // cout << "Number " << num <<  " added at index "<< i << endl;
        }
    }
}

void DisplayHashT(int HS, int *HT){
    for (int i = 0; i < HS; i++){
        cout << i << ": " << HT[i] << endl;
    }
}


void Search(int num , int HS , int *HT){
    int HI = num % HS;
    if (HT[HI] == num){
        cout << "Number found at index " << HI;
    }
    else{
        int i = HI;
        int count = 0;
        while (HT[i] != num || HT[i]==-1)
        {
            count++;
            if (i == (HS - 1))
            {
                i = (i + 1) % HS;
            }
            else
            {
                i++;
            }
            if (count == HS)
            {
                break;
            }
        }
        if (HT[i] == num)
        {
            cout << "Number found at index: " << i;
        }
        else
        {
            cout << "Number not found";
        }
    }
};


int main(){
    int HS;
    // cout << "Enter hash table size : " << endl;
    // cin >> HS;
    HS = 10;
    int *HT;
    HT = new int[HS];
    for(int i=0; i< HS; i++){
        HT[i] = -1;
    }
    addKey(12,HS,HT);
    addKey(2,HS,HT);
    addKey(14,HS,HT);
    addKey(4,HS,HT);
    addKey(16,HS,HT);
    DisplayHashT(HS , HT);
    Search(14, HS, HT);
    return 0;
}