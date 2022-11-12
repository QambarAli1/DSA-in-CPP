#include <iostream>
using namespace std;

int main(){
    int rows =2;
    // cout<< "Enter Rows : "<<endl;
    // cin >> rows;
    int *col = new int[rows];
    int **array = new int *[rows];
    for(int i=0;i<rows;i++){
        cout << "Cols for row "<< i+1 << " ";
        cin >> col[i]; 
        array[i]=new int [col[i]];
    }

    //Taking Inputs Row wise
    for(int i=0;i<rows;i++){
		for(int j=0;j<col[i];j++){
			cout<<"Value at row "<<i+1<<" and column "<<j+1 << " ";;
			cin>>array[i][j];
		}
	}
	
	//Prinitng Values
	for(int i=0;i<rows;i++){
		for(int j=0;j<col[i];j++){
			cout<<array[i][j]<<"  ";
		}
		cout<<endl;
	}
    
    return 0;
}
