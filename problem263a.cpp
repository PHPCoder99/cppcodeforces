#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int abs(int x) {
    if (x < 0) return -x;
    else return x;
}

int main(){
    string* matrix = new string[5];
    for (int i = 0; i < 5; i++){
        getline(cin, matrix[i]);
    }
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (matrix[i][j] == '1') {
                cout << abs(3-i)+abs(3-j);
            }
        }
    }
}