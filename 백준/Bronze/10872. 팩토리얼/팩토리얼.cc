#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int answer = 1;
	for (int i = 1; i <= n; i++) {
		answer *= i;
	}

	cout << answer << '\n';
}