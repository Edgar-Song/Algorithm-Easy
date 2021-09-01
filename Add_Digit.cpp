#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n = 123456;
    int sum = 0;
    while(n != 0){
        sum += (n% 10);
        n /= 10;
    }
    cout << sum << "\n";
}
