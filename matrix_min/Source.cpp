#include<vector>
#include<iostream>

using namespace std;

int main() {
	vector<vector<int>> array2d(vector<vector<int>>(4, vector<int>(3, 0)));
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> array2d[i][j];
		}
	}

	int min = array2d[0][0];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			if(array2d[i][j] <= min) min = array2d[i][j];
		}
	}

	cout << "min: " << min << endl;

	system("pause");
}