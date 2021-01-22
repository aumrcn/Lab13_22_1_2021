#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void showMatrix(const bool bobo[N][N]){
    int i,j;
    for(i = 0; i<N; ++i){
        for(j = 0 ; j<N; ++j){
            cout << bobo[i][j] << " ";
        }
    cout << endl;
    }
    return;
}

void inputMatrix(double bobo[][N]){
    int i,j;
    for(i = 0 ; i < N ; ++i){
        cout << "Row " << i+1 << ": ";
        for(j = 0 ; j < N ; ++j){
            cin >> bobo[i][j];
        }    
    }
    return;
}

void findLocalMax(const double arr1[][N], bool arr2[][N]){
    for(int i = 0 ; i < N ; ++i){
        for(int j = 0 ; j < N ; ++j){
            arr2[i][j] = 0;
        }
    }
    for(int i = 1 ; i < N-1 ; ++i){
        for(int j = 1 ; j < N-1 ; ++j){
            if(arr1[i][j] >= arr1[i - 1][j] && 
            arr1[i][j] >= arr1[i][j + 1] && 
            arr1[i][j] >= arr1[i + 1][j] && 
            arr1[i][j] >= arr1[i][j - 1]){
                arr2[i][j] = 1;
            }
        }
    }
    return;
}