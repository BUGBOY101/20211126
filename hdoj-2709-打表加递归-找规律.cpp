#define	_CRT_SECURE_NO_WARNINGS 1

//hdoj-2709-打表加递归-找规律

#include<iostream>
using namespace std;
int s[1000010];
int main() {
	int n, i;
	s[0] = 0;
	s[1] = 1;
	s[2] = 2;
	for (i = 3; i <= 1000010; i++) {
		if (i % 2 != 0)
			s[i] = s[i - 1] % 1000000000;
		else
			s[i] = (s[i - 2] + s[i / 2]) % 1000000000;
	}
	while (cin >> n) {
		cout << s[n] << endl;
	}
}