#include <iostream>
#include<string>
 
using namespace std;
bool checkDuplicate(int* ar,int size){
    if(size == 1 || size == 0)
    {return true;}
    for(int a = 1; a < size; a++){
        // cout << (int) (ar[a] == ar[0])<<endl;
        if(ar[a] == ar[0]) {return false;}

    }
    return checkDuplicate(ar+1,size-1);
}

// int gcdRecursion(int p, int q)
// {
//     // BEGIN YOUR IMPLEMENTATION [1]
//     if(q == 0) return p;
//     return gcdRecursion(q,p%q);
//     // END YOUR IMPLEMENTATION [1]
// }
// int gcdIteration(int p, int q)
// {
//     // BEGIN YOUR IMPLEMENTATION [2]
//     int tep = 0;
//     while(q != 0){
//         tep = p%q;
//         p=q;
//         q=tep;
//     }
//     return p;
//     // END YOUR IMPLEMENTATION [2]
// }


void hiddenCheck(){}
bool palindromeRecursion(string s);
bool palindrome(string s){
    return palindromeRecursion(s);
}
bool palindromeRecursion(string s)
{
    // BEGIN YOUR IMPLEMENTATION [1]
    if(s.length() == 0 || s.length() ==  1) return true;
    if(s[0] != s[s.length()-1]) return false;
    return(palindromeRecursion(s.substr(1,s.length()-2)));
    // END YOUR EMPLEMENTATION [1]
}

void run(){
    string line;
    while(getline(cin,line)){
        if(line[0] == '*')  {
            break;
        }

        cout << (string)(palindromeRecursion(line)? "true": "false") <<endl;
    };
}


int recursiveSearch(int& n , int m, int arr[], int index)
{
   // Implement function content here

   if(m == arr[index]) return 0;

   return recursiveSearch(n-1,m,arr+1,index+1)+1;

   
}

int strLen(char* str){ 
    if(*str == 0) return 0;
    return strLen(str+1)+1;
}

void printPattern(int n){
    if(n <= 0) {
        cout  << n <<" ";
        return;
    };
    cout  << n << " ";
    printPattern(n-5);
    cout  << n << " ";


}


int main(){
    // int a; 
    // cin >> a;
    // int arr[a];
    // for(int i = 0; i < a; i++){
    //     cin >> arr[i];
    // }
    // cout << checkDuplicate(arr,a);

    // cout << gcdRecursion(5,5)<<endl;
    // cout << gcdIteration(5,5)<<endl;
    // hiddenCheck();
    // cout <<palindromeRecursion("abc")<<endl;

    // hiddenCheck();
    // string line;
    // while(getline(cin,line)){
    //     if(line[0] == "*") {
    //         break;
    //     }

    //     cout <<(string) ( palindrome(line) ? "true ": "false ")<< (string)(palindromeRecursion(line)? "true": "false") <<endl;
    // }

    // char str[] = "Truong DH Bach Khoa";
    // cout << strLen(str);

    int a=0,b=0;
    cin >> a>> b;

    // printPattern(14);
    return 0;

    
}
