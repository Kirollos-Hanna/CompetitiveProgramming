#include <iostream>
#include <string>
#include <vector> 

using namespace std;

bool tooLong(string word){
    if(word.length() > 10){
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<string> words;
    for(int i = 0; i < n; i++){
        cin >> words[i];
    }

    for(int i = 0; i < n; i++){
        if(tooLong(words[i])){
            cout << words[i][0] << words[i].length()-2 << words[i][words[i].length()-1] << endl;
        } else {
            cout << words[i] << endl;
        }
    }

  return 0;
}