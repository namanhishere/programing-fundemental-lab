// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// int main()  {
//     string s;
//     getline(cin,s);
//     unsigned int passed = 0;
//     for(int i =  s.length(); i >= 0; i--){
//         if(s[i] != ' ' && i != 0) {passed++ ;continue;}
//         if(i == 0) cout << s[0];
//         for(int j = 0; j < passed; j++){
//             if(s[i+j+1] == 0) continue;
//             cout << s[i+j+1];
//         }
//         cout << " ";
//         passed = 0;
//     }
// }


// #include <iostream>
// #include <string>

// using namespace std;

// int main()  {
//     string s;
//     getline(cin,s);

//     unsigned int position = 0;
//     int i = 0;
//     int max = 0;
//     while(position < s.length()){
//         while(s[position+i] == s[position+i+1]){i++;}
//         // cout <<i;
//         if(max < i) max = i;
//         i = 0;
//         position += i+1;
//     }
//     cout << max+1;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// int longestNonRepeatSubString(string s)  {
//     int i = 0, j = 0;
//     int max = 0;
//     int hash[256] = {0};
//     while(j < s.length())  {
//         if(hash[(int) s[j]] == 0)  {
//             hash[(int) s[j]] = 1;
//             j++;
//             if(j - i > max)  {
//                 max = j - i;
//             }
//         }
//         else  {
//             hash[(int)s[i]] = 0;
//             i++;
//         }
//     }
//     return max;
// }

// int main()  {
//     string s;
//     cin >> s;
//     cout << longestNonRepeatSubString(s);
//     return 0;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// int main()  {
//     // TODO
// }


#include <iostream>
#include <string>

using namespace std;

int main()  {
    string str;
    getline(cin,str);
    int max = 1, start = 0;

    // Nested loop to mark start and end index
    for (int i = 0; i < str.length(); i++) {
        for (int j = i; j < str.length(); j++) {
            int flag = 1;
            for (int k = 0; k < (j - i + 1) / 2; k++){
                if (str[i + k] != str[j - k]) flag = 0;
            }
                
            if (flag && (j - i + 1) > max) {
                start = i;
                max = j - i + 1;
            }
        }
    }



    cout << str.substr(start,start + max);

}


// #include <iostream>
// #include <string>

// using namespace std;

// //replace the last occurence of s1 in s with s2
// void replaceString(string s, string s1, string s2) {
//     unsigned int position = s.rfind(s1); 
//     if (position != string::npos) {
//         s.replace(position, s1.length(), s2);
//     }
//     cout << s;
// }

// void deleteWord(string s, string s1){
//     unsigned int i = 0;
//     while(i < s.length()){
//         if(s.substr(i,s1.length()) == s1){
//             s.replace(i,s1.length(),"");
//         }else{
//             i++;

//         } 
//     }
//     cout << s;
// }

// void findAllIndex(string s1, string s2){
//     unsigned int i = 0;
//     int c = 0;
//     while(i < s1.length()){
//         if(s1[i] == s2[0]){
//             cout << i << " ";
//             c++;
//         }
//         i++;
//     }
//     if(c == 0) cout << -1;
// }
// void cutString(string s, int index){
//     if(index > (int) s.length()) cout << "";
//     else cout << s.substr(index ,s.length())<<endl;
// }


// int main()  {
//     // string s = "Truong Dai Hoc Bach Khoa, Sai Gon";
//     // string s1 = "ai ";
//     // string s2 = "ong";
//     // replaceString(s, s1, s2);

    	
//     // string s = "Truong. Dai... Hoc... Bach... Khoa,.. Sai Gon";
//     // string s1 = ".";
//     // deleteWord(s, s1);

//     // string s1 = "Truong Dai Hoc Bach Khoa.";
//     // string s2 = "ai";
//     // findAllIndex(s1, s2);
//     // return 0;

//     string s = "Truong Dai Hoc Bach Khoa.";
//     cutString(s, 7);

//     string s1 = "Truong";
//     cutString(s1, 25);
//     cutString(s, 25);

// }