#define	_CRT_SECURE_NO_WARNINGS 1
// hdoj_2054 A == B ?
// 0MS	416K	676 B	GCC

#include <stdio.h>
#include <string.h>
#define N 100000
char a[N] = { 0 }, b[N] = { 0 };
int main(void)
{
	while (scanf("%s%s", &a, &b) != EOF)
	{
		char* p1 = strchr(a, '.');//p1指向小数点的位置,若没找到小数点，则返回NULL
		char* p2 = strchr(b, '.');
		char* pa = a + strlen(a) - 1;
		char* pb = b + strlen(b) - 1;
		if (pa > p1 && p1 != NULL)
		{
			while (*pa == '0')
				*pa-- = 0;
		}
		if (pb > p2 && p2 != NULL)
		{
			while (*pb == '0')
				*pb-- = 0;
		}
		if (*pa == '.')
			*pa = 0;
		if (*pb == '.')
			*pb = 0;
		pa = a;
		pb = b;
		while (*pa == '0')
			pa++;
		while (*pb == '0')
			pb++;
		if (strcmp(pa, pb) == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

//#include<iostream>
//using namespace std;
//int main() {
//	char a[100], b[100];
//	int i, n1, n2;
//	
//	while (cin >> a >> b) {
//		int flag = 1;
//		n1 = strlen(a);
//		n2 = strlen(b);
//		if (n1 != n2) {
//			flag = 0;
//		}
//		else {
//			for (i = 0; i < n1; i++) {
//				if (a[i] != b[i]) {
//					flag = 0;
//					break;
//				}
//			}
//		}
//		if (flag == 0) {
//			cout << "NO" << endl;
//		}
//		else
//			cout << "YES" << endl;
//	}
//}

//hdoj-2709-打表加递归-找规律

//#include<iostream>
//using namespace std;
//int s[1000010];
//int main() {
//	int n, i;
//	s[0] = 0;
//	s[1] = 1;
//	s[2] = 2;
//	for (i = 3; i <= 1000010; i++) {
//		if (i % 2 != 0)
//			s[i] = s[i - 1] % 1000000000;
//		else
//			s[i] = (s[i - 2] + s[i / 2]) % 1000000000;
//	}
//	while (cin >> n) {
//		cout << s[n] << endl;
//	}
//}

//函数递归

//#include<iostream>
//using namespace std;
//void f(int n) {
//	if (n / 2 > 0)
//		f(n / 2);
//	cout << n;
//}
//int main() {
//	f(6);
//}