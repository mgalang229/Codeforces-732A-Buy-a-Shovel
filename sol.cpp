#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int k, r;
    cin >> k >> r;
    int i = 1, t = k*i;
    while(1){
		t = k*i;
		if(t%10 == 0 || t%10 == r){
			break;
		}
		i++;
	}
	cout << i << "\n";
}
