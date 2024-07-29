#include <iostream>
using namespace std;

int calculateFactorial(int n){
    int res = 1;
    for(int i = 1;i <= n; i++){
        res *= i;
    }
    return res;
}


int mainQ2(int narg, char** argv)
{
    int N;
    cin >> N;
    long result;
    // call function calculateFactorial in here and assign value to the variable result
    result = calculateFactorial(N);
    cout << result << endl;
    return 0;
}

void sum2(int * array, int numEls, int &result)
{
    result = 0;
    for(int a = 0; a<numEls; a++){
        result += array[a];
    }
}
bool completeNum(int N)
{
    int sum = 0;
    for(int i = 1; i <N ; i++){
        if(N%i == 0) sum +=i;
    }
    return N == sum;
}


bool isPalindrome(const char* str) {
    int strln = 0;
    while(str[strln] != 0){
        strln++;
    }
    // cout <<strln;
    for(int i = 0; i < strln/2;i++){
        // cout << i;
        if(!(str[i] == str[strln-i-1])) return false;
    }
    return true;
}

bool isSpecialNumber(int n) {
    int sum = 0;
    if(n ==2 || n == 1) return true;
    for(int i = 2; i*i < n+1; i++){
        if(n%i == 0) return false;
        // cout << i;
    }
    
    // for(int i = 1; i <sqrt(n); i++)

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    // cout <<sum<<endl;
    if(sum ==2 || sum == 1) return true;
    for(int i = 2; i*i < sum+1; i++){
        if(sum%i == 0) return false;
        // cout << i;
    }
    return true;


}


bool checkElementsUniqueness(int* arr, int n) {
    int precheckArr[1000];
    int precheckv = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < precheckv+1; j++){
            if (arr[i] == precheckArr[j]) return false;
        }
        
        precheckArr[precheckv] = arr[i];
        precheckv++;
    }

    return true;
    // Write your code 
}

int convertToBaseM(int n, int m = 2) {
    int base = 1;
    int retun = 0;
    while(n > 0){
        retun += (n%m)* (base);
        base *=10;
        n = n/m;
    }
    return retun;
}



void mostFrequentCharacter(char* str, char& res, int& freq){
    int count[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int max = 0;
    char place = 0;
    // for(int i = 0; str[i] == 0; i++){
    //     // cout << (int) str[i]-97 << endl;
    //     count[ str[i]-97] ++;
    // }
    int k = 0;
    while(str[k] != 0){
        // cout << str[k]<<endl;
        str[k] = tolower(str[k]);
        count[str[k]-97]++;
        k++;
    }
    for(int i = 0; i < 26; i++){
        if(count[i] > max){
            
            max = count[i];
            place = i;
        } 
    }
    freq = max;
    res = (char) (place+97);
}


//question 9 go here


void encrypt(char* text, int shift) {
    for (int i = 0; text[i] != '\0'; ++i) {
        if (isalpha(text[i])) {
            char b = islower(text[i]) ? 'a' : 'A';
            text[i] = (text[i] - b + shift) % 26 + b;
        }
    }
}

void decrypt(char* text, int shift) {
    shift = shift % 26;
    encrypt(text, 26 - shift); 
}

//question 10 go here

int numberOfDiffCharac(string str){
    int count[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int max = 0;
    for(unsigned int i = 0; i < str.length()-1; i++){
        // cout << (int) str[i]-97 << endl;
        count[(int) str[i]-97] =  count[(int) str[i]-97] == 0? 1 : 1;
    }
    for(unsigned int i = 0; i < 26; i++){
        max += count[i];
    }
    return max;
}

long int decimalToBinary(int decimal_number) {
    if (decimal_number == 0) return 0;
    return (decimal_number % 2) + 10 * decimalToBinary(decimal_number / 2);
    
}


int main(int narg, char** argv)
{
    // int N;
    // cin >> N;
    // long result;
    // // call function calculateFactorial in here and assign value to the variable result
    // result = calculateFactorial(N);
    // cout << result << endl;


    // const char* str = "abfcba";
    // cout << isPalindrome(str);

    // int n = 31;
    // // cin >> n;
    // cout << isSpecialNumber(n);

    // cout << checkElementsUniqueness([2,5,13,5,1], 5) ;
    // cout << checkElementsUniqueness([17,10,4], 3);

    // int n;
    // cin >> n;
    // int* arr = new int[n];
    // for(int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }
    // cout << checkElementsUniqueness(arr, n);
    // delete[] arr;

    // int n;
    // cin >> n;
    // cout << convertToBaseM(n, 4) << '\n';
    // cout << convertToBaseM(n, 8) << '\n';
    // cout << convertToBaseM(n);

    // int n;
    // cin >> n;
    // char* str = new char[n+1];
    // for(int i = 0; i < n; i++) cin >> str[i];
    // str[n] = 0;
    // char res = 0;
    // int freq = 0;
    // mostFrequentCharacter(str, res, freq);
    // cout << res << ' ' << freq;
    // delete[] str;

    // int n, shift;
    // cin >> n >> shift;
    // char* text = new char[n+1];
    // for(int i = 0; i < n; i++) cin >> text[i];
    // text[n] = 0;
    // cout << text << '\n';
    // encrypt(text, shift);
    // cout << text << '\n';
    // decrypt(text, shift);
    // cout << text;

    // delete[] text;

    // char str1[] ="aa";
    // printf("%d\n", numberOfDiffCharac(str1));

    // char str2[] ="ababbba";
    // printf("%d", numberOfDiffCharac(str2));

    // char str3[] ="ababbbaaaaaaa";
    // printf("%d", numberOfDiffCharac(str3));

    // int n;
    // cin >> n;
    // char* str = new char[n+1];
    // for(int i = 0; i < n; i++) cin >> str[i];
    // str[n] = 0;
    // char res = 0;
    // int freq = 0;
    // mostFrequentCharacter(str, res, freq);
    // cout << res << ' ' << freq;
    // delete[] str;

    // cout << decimalToBinary(20);

    int n, shift; 
    cin >> n >> shift;
    char* text = new char[n+1];
    for(int i = 0; i < n; i++) cin >> text[i];
    text[n] = 0;

    encrypt(text, shift);
    cout << text << '\n';
    decrypt(text, shift);
    cout << text;

    delete[] text;

    return 0;
}