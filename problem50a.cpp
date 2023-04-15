#include <iostream>
#include <string>
#include <sstream>
// #include "functions101.h"

using namespace std;

int* splitIntoIntArray(std::string input){
    int* result = new int[count(input.begin(), input.end(), ' ')+1];
    string str;
    stringstream ss(input);
    int i = 0;
    while (getline(ss, str, ' ')){
        result[i] = stoi(str);
        i++;
    }
    return result;
}

int main(){
    string input;
    getline(cin, input);
    int* array = splitIntoIntArray(input);
    cout << (array[0] * array[1]) / 2;
    return 0;
}