#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;

    int zeroCounter = 0, oneCounter = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '1'){
            oneCounter++;
            zeroCounter = 0;
        }
        if(str[i] == '0'){
            zeroCounter++;
            oneCounter = 0;
        }

        if(zeroCounter >= 7 || oneCounter >= 7){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}