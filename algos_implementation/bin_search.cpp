mid;
//	mid = low + (low + high) / 2;
//	while (low <= high) {
//		if (arr[mid] == x) {
//			return mid;
//		}
//		if (arr[mid] < x) {
//			low = mid + 1;
//		}
//		else {
//			high = mid -1;
//		}
//		
//	}
//	return -1;
//}
//

int main() {
	vector<int> v;
	cout << "enter the size " << '\n';
	int size;
	cin >> size;
	for (int i = 0; i < size; i++) {
		cout << "Enter integers to the vector " << '\n';
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	int n;
	cout << "enter number to find in array " << '\n';
	cin >> n;
	cout << "done " << '\n';
	vector<int> first;
	vector<int> second;
	int mid;
	mid = v[v.size() - 1] / 2;
	cout << "mid: " << mid << '\n';
	for (int i = 0; i < mid; i++) {
		first.push_back(v[i]);
	}
	for (int j = mid; j < v.size(); j++) {
		second.push_back(v[j]);
	}

	for (int i = 0; i < first.size(); i++) {
		cout << first[i] << '\n';

	}
	for (int j = 0; j < second.size(); j++) {
		cout << second[j] << '\n';

	}
	
	if (v[mid] == n) {
		return mid;
	}
	else if (v[mid] < n) {

	}

	return 0;

}


