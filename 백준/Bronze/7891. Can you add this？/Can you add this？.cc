#include <iostream>
#include <sstream>
using namespace std;

int main(){
    long n;
    cin >> n;
    for(int i; i < n; i++){
        int x, y;
        cin >> x >> y;
        cout << x + y << endl;
    }
}