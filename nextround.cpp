#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, k;
    cin >> n;
    cin >> k;
    vector<int> participants;
    int part;
    for(int i = 0; i < n; i++){
        cin >> part;
        participants.push_back(part);
    }

    int passed = 0;
    for(int i = 0; i < n; i++){
        if(participants[i] >= participants[k-1] && participants[i] > 0){
            passed++;
        }
    }
    cout << passed;
    return 0;
}