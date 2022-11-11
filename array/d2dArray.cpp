#include <iostream>
using namespace std;

void array2d(int r, int c)
{
    int **array = new int *[r];

}
int main(){
    int r,c;
    cout << "Enter Rows";
    cin>>r;
    cout << "Enter Cols";
    cin>>c;
    array2d(r,c);
    return 0;
}
