#include <iostream>
#include <string>

using namespace std;

int main() {
	long int t;
	string a[50], b[50], c[50], d[50];
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a[i] >> b[i] >> c[i] >> d[i];
	}
	for (int j = 0; j < t; j++) {
		if (a[j] == "MF" && b[j] == "MF" && c[j] == "MF" && d[j] == "MF")
			cout << "DAIRE" << endl;
		else cout << "DAIRE YOK" << endl;
	}
}