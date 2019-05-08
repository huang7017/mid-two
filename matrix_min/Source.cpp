#include<vector>
#include<iostream>

using namespace std;

int min(vector<vector<int>> list) {
	list.resize(4);
	for (int i = 1; i < 4; i++)list[i].resize(3);
	int min = list[0][0];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			if (list[i][j] <= min) min = list[i][j];
		}
	}

	return min;
}
int main() {
	vector<vector<int>> array2d(vector<vector<int>>(4, vector<int>(3, 0)));
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> array2d[i][j];
		}
	}


	cout << "min: " << min(array2d) << endl;

	system("pause");
}