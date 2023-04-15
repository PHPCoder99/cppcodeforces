#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int* splitString(string s){
    int* result = new int[std::count(s.begin(), s.end(), ' ')+1];
    string str;
    stringstream ss(s);
    int i = 0;
    while (getline(ss, str, ' ')){
        result[i] = stoi(str);
        i++;
    }
    return result;
}

int main(){
    string nk;
    getline(cin, nk);
    int* nkarr = splitString(nk);
    string data;
    getline(cin, data);
    int* dataarr = splitString(data);
    int res = 0;
    for (int i = 0; i < nkarr[0]; i++)
    {
        if (dataarr[i] >= dataarr[nkarr[1]-1] && dataarr[i] > 0) res++;
    }
    cout << res << endl;
    delete[] nkarr;
    delete[] dataarr;
    return 0;
}