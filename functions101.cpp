#include <string>
#include <iostream>
#include <sstream>
#include <algorithm> // add this line to include the count function

using namespace std;

int cinInt(std::string prompt){
    string result;
    cout << prompt << endl;
    cin >> result;
    return stoi(result);
}

std::string cinString(std::string prompt){
    string result;
    cout << prompt << endl;
    cin >> result;
    return result;
}

double cinDouble(std::string prompt){
    string result;
    cout << prompt << endl;
    cin >> result;
    return stod(result);
}

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

std::string* splitIntoStringArray(std::string input){
    std::string* result = new std::string[count(input.begin(), input.end(), ' ')+1];
    string str;
    stringstream ss(input);
    int i = 0;
    while (getline(ss, str, ' ')){
        result[i] = str;
        i++;
    }
    return result;
}

double* splitIntoDoubleArray(std::string input){
    double* result = new double[count(input.begin(), input.end(), ' ')+1];
    string str;
    stringstream ss(input);
    int i = 0;
    while (getline(ss, str, ' ')){
        result[i] = stod(str);
        i++;
    }
    return result;
}

void coutIntArray(int* array, string end){
    for (int i = 0; i < sizeof(array)/sizeof(int); i++)
    {
        cout << array[i] << end;
    }
}

void coutStringArray(char* array, string end){
    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
        cout << array[i] << end;
    }
}

void coutDoubleArray(double* array, string end){
    for (int i = 0; i < sizeof(array)/sizeof(double); i++)
    {
        cout << array[i] << end;
    }
}