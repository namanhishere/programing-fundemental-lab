#include<iostream>

using namespace std;

int* zeros(int n) {
    if(n <= 0) return nullptr ; 
    int *a = new int[n] {1};
    return a;
}

void shallowCopy(int*& newArr, int*& arr) {
    newArr = arr;
}

int** deepCopy(int** matrix, int r, int c) {
    if(r <= 0 || c <= 0) return nullptr;
    int **newArr = new int*[r];
    for(int i = 0; i < r; i++){
        newArr[i] = new int[c];
        for(int j = 0; j < c; j++){
            *(*(newArr+i)+j) = *(*(matrix+i)+j);
        }
    } 
    return newArr;
}

int** readArray(){
    int **ar = new int*[10];
    int n;
    for(int i = 0 ; i < 10; i++){
        ar[i] = new int[10]{0};
        for(int j = 0; j < 10; j++){
            cin >> n ;
            if( n == 0) break;
            *(*(ar+i)+j) = n;
        }
    }

    return ar;
}

void deleteMatrix(int**& matrix, int r) {
    for(int i = 0; i < r; i++){
        free(*(matrix+i));
    }
    free(matrix);
}

void addElement(int*& arr, int n, int val, int index) {
    
}

int main(){
    // int n =3;
    // int *ar = zeros(3);
    // for (int i = 0; i <3; i++){
    //     cout << *(ar+i) <<endl;
    // }

    // int* arr = new int[2];
    // arr[0] = 2; arr[1] = 3;
    // int* newArr = nullptr;
    // shallowCopy(newArr, arr);
    // cout << newArr[0] << ' ' << newArr[1];
    // delete[] arr

    // int** m = new int*[2];
    // m[0] = new int[2]; m[0][0] = 1; m[0][1] = 2;
    // m[1] = new int[2]; m[1][0] = 1; m[1][1] = 3;
    // int** n = deepCopy(m, 2, 2);
    // cout << n[0][0] << ' ' << n[0][1] << '\n' << n[1][0] << ' ' << n[1][1];

    int a= 0, b= 0 , c= 0;
    cin  >> a >> b >>c;


    return 0;
}