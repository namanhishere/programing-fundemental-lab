#include <iostream>

using namespace std;

int findMaxColumn(int arr[][1000], int row, int col) {
    int maxSum = 0;
    int inde = -1;

    for (int j = 0; j < col; ++j) {
        int currentSum = 0;
        for (int i = 0; i < row; ++i) {
            currentSum += arr[i][j];
        }

        if (currentSum > maxSum || (currentSum == maxSum && j > inde)) {
            maxSum = currentSum;
            inde = j;
        }
    }

    return inde;
}
int diagonalProduct(int arr[][1000], int row, int col) {
    int sum = 1;
    for(int i = 0; i < row; i++){
        sum *= arr[i][i];
    }
    return sum;
}

bool isSymmetric(int arr[][1000], int row, int col) {
    for(int i = 0; i < row; i ++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] != arr[j][i]) return false;
        }
    }
    return true;
}

int ascendingRows(int arr[][1000], int row, int col) {
    int sum = 0;
    for(int a = 0 ; a < row; a++){
        for(int b = 0; b < col-1; b++){
            // cout <<(int) (arr[a][b] > arr[a][b+1])<<endl;
            if(arr[a][b] > arr[a][b+1]) break;
            if(b == col-2) sum++;
        }
    }
    return sum;
}

int primeColumns(int arr[][1000], int row, int col) {
        int count = 0;

    for(int a = 0 ; a < col; a++){
        int sum =0;
        int stat = 1;
        for(int b = 0; b < row; b++){
            sum += arr[b][a];
        }
        // cout <<sum<<endl;
        // if(sum  < 0) sum = -sum;

        for(int i = 2; i  <sum; i++){
            // cout<<i;
            if(sum % i == 0) {
                stat = 0;
                break;
            }
        }

        if(sum  <= 1) stat = 0;

        count += stat;
    }
    return count;
}

int specialCells(int arr[][1000], int row, int col) {
    int count = 0 ;
    for(int a = 0; a < row; a++){
        for(int b = 0; b < col; b++){
            
            int sumRow = 0;
            int sumCol = 0;

            int stat = 1;

            for(int i = 0; i < row; i++) sumRow += arr[i][b];
            for(int i = 0; i < col; i++) sumCol += arr[a][i];

            for(int i = 2; i  <sumRow; i++){
                // cout<<i;
                if(sumRow % i == 0) {
                    stat = 0;
                    break;
                }
            }

            for(int i = 2; i  <sumCol; i++){
                // cout<<i;
                if(sumCol % i == 0) {
                    stat = 0;
                    break;
                }
            }
            count += stat;

        }
    }

    return count;
}

int diagonalDiff(int arr[][1000], int row, int col, int x, int y) {
    int sum1 = 0;
    int sum2 = 0;
    int minValue = row - col > 0? row: col;
    

    for (int i = 0; i < minValue; ++i) {
        if (x - y + i >= 0 && x - y + i < row && i < col) {
            sum1 += arr[x - y + i][i];
        }
    }

    for (int i = 0; i < minValue; ++i) {
        if (x + y - i >= 0 && x + y - i < row && i < col) {
            sum2 += arr[x + y - i][i];
        }
    }

    // Return the absolute difference between the two sums
    return (sum1 - sum2) < 0 ? sum2-sum1 : sum1-sum2;
}

int subMatrix(int arr[][1000], int row, int col) {
    int count = 0;
    for(int a = 0; a < row-1; a++){
        for(int b = 0; b< col-1; b++){
            if((arr[a][b]+arr[a][b+1]+arr[a+1][b]+arr[a+1][b+1])%2 == 1) count ++;
        }
    }
    return count;
}


//  FOR DEBUG ONLY FOR QUESTION 9. DO NOT SUBMIT IT
void printImage(int img[][1000], int N){
    for(int a = 0; a <N; a++){
        for(int b = 0; b < N; b++){
            cout << img[a][b] << " ";
        }
        printf("\n");
    }
}

void rotateImage(int img[][1000], int N) {
    int returnImg[N][1000];
    for(int i = 0 ; i < N; i++){
        for (int j = 0; j < N; j++){
            returnImg[j][N-i-1] = img[i][j];
        }
    }
    printImage(returnImg,N);
    // img = returnImg;

    //copy back to img
    for(int i = 0 ; i < N; i++){
        for (int j = 0; j < N; j++){
            img[i][j] = returnImg[i][j];
        }
    }
}

void printSpiral(int arr[][1000], int row, int col) {

    int top = 0, left = 0, bottom = row - 1, right = col - 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            cout << arr[top][i] << " ";
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            cout << arr[i][right] << " ";
        }
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
}



int main(){

    int arr1[][1000] = {{-44,64,-6},{87,92,-19},{-92,53,-38},{-39,-92,21}};
    cout << findMaxColumn(arr1, 4, 3);
    cout << "\n";
    int arr2[][1000] = {{-92,78,-2,-58,-37},{44,-4,30,-69,22}};
    cout << findMaxColumn(arr2, 2,5);

    // //question 2:
    // int arr1[][1000] = {{-45,18,-37},{-2,-31,24},{-48,-33,-48}};
    // cout << diagonalProduct(arr1,3,3) <<endl; // -66960
    // int arr2[][1000] = {{-11,44,18,33},{-34,-9,-42,-42},{47,-26,4,-8},{-35,11,-34,-19}};
    // cout << diagonalProduct(arr2,4,4); //-7524


    // int arr1[][1000] = {{1,4,6}, {4,5,3}, {6,3,9}};
    // cout << isSymmetric(arr1,3,3);

    // int arr2[][1000] = {{1,9,6}, {4,5,3}, {6,3,9}};
    // cout << isSymmetric(arr2,3,3);
    // return 0;

    // int arr1[][1000] = {{32,4,9},{-80,37,71},{-91,-79,-55}};
    // cout << ascendingRows(arr1,3, 3);

    // int arr2[][1000] = {{-28,-8,-60,18},{-100,44,-1,24},{-94,92,-70,75}};
    // cout << ascendingRows(arr2,3,4);

    // int arr2[][1000] = {{-64,-28,-3,64},{-56,90,57,-31}};
    // cout << primeColumns(arr2,2,4)<<endl;

    // int arr1[][1000] = {{34,-15,11,-70,-23,24},{-39,-90,63,-45,-52,48},{-42,92,55,92,82,81}};
    // cout << primeColumns(arr1,3,6);

    // int arr1[][1000] = {{37,53,74},{12,37,60},{98,13,15}};
    // cout << specialCells(arr1,3,3);

    // int arr2[][1000] = {{1,87,26},{97,95,88},{57,60,46}};;
    // cout << specialCells(arr2,3,3);


    // int arr1[][1000] = {{55,85,47,58},{31,4,60,67},{94,69,71,73},{51,62,64,90}};
    // cout << diagonalDiff(arr1,4,4,1,2);

    // int arr2[][1000] = {{88,72,65,37},{82,84,34,12},{74,46,88,44}};
    // cout << diagonalDiff(arr2,3,4,1,0);

    // int arr1[][1000] = {{66,16,71},{25,81,61},{2,10,34}};
    // cout << subMatrix(arr1,3, 3);

    // int arr2[][1000] ={{44,45,89},{82,91,34},{83,87,33},{65,51,66}};
    // cout << subMatrix(arr2,4, 3);

    // int img[][1000] = {{1,2,3},{4,5,6},{7,8,9}};
    // rotateImage(img,3);
    // printImage(img, 3);

    // int arr1[][1000] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // printSpiral(arr1,3,3);
    // cout << endl;
    // int arr2[][1000] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    // printSpiral(arr2,3,4);

}