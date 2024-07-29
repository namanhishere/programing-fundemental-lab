#include <iostream>

using namespace std;

int getValueAtIndex(int *ptr, int k){
    return *ptr+k;
}

void swap(int *ptr1, int *ptr2){
    int s = *ptr1;
    *ptr1 =*ptr2;
    *ptr2 = s;
}
int calcSum(int *ptr, int n){
    if(n == 0) return 0;
    return calcSum(ptr+1,n-1)+*ptr;
}
void add(int *ptr, int n, int k){
    *(ptr+n) = k;
}

int findMax(int *ptr, int n){
    int max = *ptr;
    for(int i = 1; i < n; i++){
        if(*(ptr+i) > max) max = *(ptr+i);
    }
    return max;
}


void reverse(int *ptr, int n){
    for(int i = 0; i < n/2; i++){
        int s = *(ptr+i);
        *(ptr+i) =*(ptr+n-i-1);
        *(ptr+n-i-1)= s;
    }
}

bool isSymmetry(int *head, int *tail){
    if(head >= tail) return true;
    return isSymmetry(head+1,tail-1) && (*head == *tail);
}

int main(){
    // int arr[] = {1, 2, 3, 4, 5};
    // int k = 3;
    // cout << getValueAtIndex(arr, k);

    // int a = 5;
    // int b = 6;
    // swap(&a, &b);
    // cout << a << ' ' << b;

    // int arr[] = {20, 19, 3, 4, 2, 12, 7, 16, 18, 1, 5, 15, 0, 6, 8, 14, 10, 13, 11, 17};
    // cout << calcSum(arr, sizeof(arr) / sizeof(arr[0]));

    // int arr[100] = {5};
    // int n = 0;
    // int k = -1;
    // add(arr, n, k);
    // cout << arr[n];

    // int arr[] = {1, 2, 3, 4, 5};
    // cout << findMax(arr, sizeof(arr) / sizeof(arr[0]));

    // int arr[] = {1, 2, 3, 4, 5};
    // reverse(arr, sizeof(arr) / sizeof(arr[0]));
    // cout << arr[0];
    // for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++){
    //     cout << ", " << arr[i];
    // }

    // int arr[] = {1, 2, 1};
    // cout << isSymmetry(arr, arr + (sizeof(arr) / sizeof(arr[0])) - 1);

    int arr[] = {1, 2, 1};
    cout << isSymmetry(arr, arr + (sizeof(arr) / sizeof(arr[0])) - 1);
    return 0;
}