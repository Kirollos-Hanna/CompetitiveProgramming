#include <iostream>

using namespace std;

int main() {
    int n, v;
    cin >> n;
    cin >> v;

    int capacity = 0, price = 0;
    for(int i = 1; i < n+1; i++){
        if(capacity < v){
            if(v >= n){
                capacity += n-1;
                price += (i*(n-1));
                break;
            }
            int difference = v - capacity;
            capacity += difference;
            price += (i * difference);
        }
        if(capacity >= n-i){
            break;
        }
        capacity--;
    }

    cout << price << endl;
    return 0;
}