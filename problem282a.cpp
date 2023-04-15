#include <iostream>
#include <string>
// #include "functions101.h"

using namespace std;

int main(){
    int n = 0;
    cin >> n;
    string str = "";
    int result = 0;
    for (int i = 0; i < n; i++){
        cin >> str;
        if (str.find("--") != string::npos){
            result--;
        } else if (str.find("++") != string::npos){
            result++;
        }
    }
    cout << result << endl;
    return 0;
}