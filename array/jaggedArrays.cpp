#include <iostream>
using namespace std;

int main(){
    int rows;
    cout<< "Enter Rows : "<<endl;
    cin >> rows;
    int *col = new int[rows];
    int **array = new int *[rows]; //rows

    // Taking Cols Inp for each Row
    for(int i=0;i<rows;i++){
        cout << "Cols for row "<< i+1 << " : ";
        cin >> col[i]; 
        array[i]=new int [col[i]]; //cols
    }

    // Taking Inputs Row wise
    for(int i=0;i<rows;i++){
		for(int j=0;j<col[i];j++){
			cout<<"Value at row "<<i+1<<" and column "<<j+1 << " : ";;
			cin>>array[i][j];
		}
	}
	
    // cout << "array[0] " << *array[0] <<endl;
	// Prinitng Values
	for(int i=0;i<rows;i++){
		for(int j=0;j<col[i];j++){
			cout<<array[i][j]<<"  ";
		}
		cout<<endl;
	}
    return 0;
}
