#include <iostream>
#include <cstring>
using namespace std;

// void process(char str[], char outstr[]) {
//     int n = strlen(str)-1;
//     int j = 0;
//     for(int i=n; i >= 0; i--){
//         outstr[j] = str[i];
//         j++;
//     }
//     // cout <<str<<endl;
// }

// void recover(char str[]){
//     // int n = strlen(str);
//     for(int i = 0; i < strlen(str); i++){
//         if(isupper(str[i])){
//             str[i] = tolower(str[i]);
//         }else{
//             str[i] = toupper(str[i]);

//         }
//     }
// }

// int find(char str[], char substr[]){
//     for int(i = 0; i < strlen(str); i++){
//         if(str[i] != substr[1]) continue;
//         for(int j = 0; j < strlen(substr); j++)
//     }
// }

// void process(char str[], char outstr[]) {
//     int no=0;
//     for(int i = 0; i < strlen(str); i++){
//         // if(status == 0 && str[i] != ' ') continue;
//         // if(outstr[strlen(outstr)-1] == ' '  && str[i] == ' ' && status == 0) continue;
//         // outstr[strlen(outstr)] = str[i];

//         if(str[i] == ' '){
//             for(int j = 1; j< strlen(str); j++){
//                 if(str[i+j] != ' '){
//                     if(i != 0 && i+j < strlen(str)) outstr[no++] = ' ';
//                     i = i+j;
//                     break;
//                 }
//             }

//         }
//         if(i < strlen(str)) outstr[no++] = str[i];

//     }

//     outstr[no++] = 0;
// }

// void process(char str[], char outstr[]) {
//     int no=0;
//     bool needcap = false;

//     static int countrun = 0;
//     // cout << countrun<<endl;
//     for(int i = 0; i < strlen(str); i++){
//         // if(status == 0 && str[i] != ' ') continue;
//         // if(outstr[strlen(outstr)-1] == ' '  && str[i] == ' ' && status == 0) continue;
//         // outstr[strlen(outstr)] = str[i];

//         if(str[i] == ' '){
//             for(int j = 1; j< strlen(str); j++){
//                 if(str[i+j] != ' '){
//                     if(i != 0 && i+j < strlen(str)){
//                         needcap = true;
//                         if(outstr[no-1] != ' ' && no != 0)outstr[no++] = ' ';
//                     }
//                     i = i+j;
//                     break;
//                 }
//             }

//         }
//         if(i < strlen(str)){
//             // cout <<str[i];
//             if(isalpha(str[i])){
//                 if(needcap || no == 0){
//                     outstr[no++] = toupper(str[i]);
//                     needcap = false;
//                 }else{
//                     outstr[no++] = tolower(str[i]);

//                 }
//             }
//         };

//     }

//     outstr[no++] = 0;

// }

void printFirstRepeatedWord(const char str[])
{
    char matchvalue[100] ="";
    char word1[100] = "";
    int coutword = 0;
    for (int i = 0; i < strlen(str); i++){
        if (str[i] == ' '){
            cout <<word1<<endl;

            // for (int j = i + 1; j < strlen(str); j++){
            //     if (word1[j - i - 1] != str[j])
            //     {
            //         break;
            //     }
            // }
          for (int i = 0; i < 100; i++) {
            word1[i] = '\0';
        }

            continue;
        }
        word1[coutword++] = str[i];
    }
}



int main()
{
    char str[] = "car taxi bike bike car taxi";

    // printf("%s\n", str);

    printFirstRepeatedWord(str);
    // cout << strlen(substr) << endl;

    printf("%s", str);

    // process(str,substr);
    // printf("Reversed string:%s\n", substr);

    return 0;
}
