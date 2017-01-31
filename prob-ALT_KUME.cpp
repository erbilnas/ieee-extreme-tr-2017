#include<iostream>

using namespace std;

int main() {
	char arr[20]; int n;
	cin >> n;

	while (n) {
		for (int l = 0; l<n; l++) 
			cin >> arr[l];

		for (int i = 0; i<(1 << n); i++) {
			for (int j = 0; j < n; j++) {
				if (i & (1 << j))
					cout << (arr[j]);
			}
			cout << endl;
		}
	}
}