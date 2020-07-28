#include <iostream>
#include <string>
#include <vector> 

using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> confidenceLevel;
    int level;
    int problemsToSolve = 0;
    for(int i = 0; i < n*3; i++){
        cin >> level;
        confidenceLevel.push_back(level);
    }

    for(int i = 0; i < n*3; i+=3){
        if((confidenceLevel[i] + confidenceLevel[i+1] + confidenceLevel[i+2]) >= 2){
            problemsToSolve++;
        }
    }

    cout << problemsToSolve << endl;

    return 0;
}
