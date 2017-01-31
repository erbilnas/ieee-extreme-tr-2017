#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	long long int n, k, i = 1;
	vector<long long int> arr;
	
	cin >> n >> k;
	while (i <= sqrt(n)) {
		if (n % i == 0) {
			arr.push_back(i);
			if (i != (n / i)) {
				arr.push_back(n / i);
			}
		} i++;
	}

	sort(arr.begin(), arr.end());
	if (arr.size() < k)
		cout << -1 << endl;
	else {
		cout << arr[k - 1] << endl;
	}
}