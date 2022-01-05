#define	_CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<algorithm>
using namespace std;
long nums[5001], dp[5001];
int main() {
	int n, i, j;
	i = 0;
	while (cin >> nums[i]) {
		i++;
	}
	n = i;
	for (i = 0; i < n; i++)
		dp[i] = nums[i];
	for (i = n - 2; i >= 0; i--) {
		for (j = i + 1; j < n; j++) {
			dp[j] = max(nums[i] - dp[j], nums[j] - dp[j - 1]);
		}
	}
	if (dp[n - 1] >= 0)
		cout << "True" << endl;
	else
		cout << "False" << endl;
}

//#include<iostream>
//#include<algorithm>
//using namespace std;
//int nums[5000], dp[5000][5000];
//int main() {
//	int n, i, j;
//	i = 0;
//	while (cin >> nums[i]) {
//		i++;
//	}
//	n = i;
//	for (i = 0; i < n; i++)
//		dp[i][i] = nums[i];
//	for (i = n - 2; i >= 0; i--) {
//		for (j = i + 1; j < n; j++) {
//			dp[i][j] = max(nums[i] - dp[i + 1][j], nums[j] - dp[i][j - 1]);
//		}
//	}
//	if (dp[0][n - 1] >= 0)
//		cout << "True" << endl;
//	else
//		cout<<"False"<<endl;
//}

//¶þÎ¬±³°ü

//#include<iostream>
//#include<algorithm>
//using namespace std;
//int v[51], w[51], p[51];
//int dp[501][501];
//int n, maxv, maxw;
//int main()
//{
//    cin >> maxv >> maxw;
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//        cin >> v[i] >> w[i] >> p[i];
//    for (int i = 1; i <= n; i++)
//        for (int j = maxv; j >= v[i]; j--)
//            for (int k = maxw; k >= w[i]; k--)
//                dp[j][k] = max(dp[j][k], dp[j - v[i]][k - w[i]] + p[i]);
//    cout << dp[maxv][maxw] << endl;
//    return 0;
//}


//#include<iostream>
//#include<algorithm>
//using namespace std;
//int v[51], w[51], p[51], dp[51][501][501];
//int main() {
//	int n, i, j, vm, wm, k;
//	cin >> vm >> wm;
//	cin >> n;
//	for (i = 1; i <= n; i++) {
//		cin >> v[i] >> w[i] >> p[i];
//	}
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= vm; j++) {
//			for (k = 1; k <= wm; k++) {
//				if (j >= v[i] && k >= w[i])
//					dp[i][j][k] = max(dp[i - 1][j][k], dp[i - 1][j - v[i]][k - w[i]] + p[i]);
//				else
//					dp[i][j][k] = dp[i - 1][j][k];
//			}
//			
//		}
//	}
//	cout << dp[n][vm][wm] << endl;
//}

//#include<iostream>
//using namespace std;
//int a[100010];
//int main() {
//	int n, i = 0;
//	long sum = 0;
//	while (cin >> a[i]) {
//		i++;
//	}
//	n = i;
//	for (i = 0; i < n; i++) {
//		sum += a[i];
//		if (i != n - 1)
//			cout << sum << ",";
//		else
//			cout << sum << endl;
//	}
//}

//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct node {
//	int w;
//	int p;
//	double bi;
//}f[1000005];
//bool cmp(node a, node b) {
//	if (a.w == b.w)
//		return a.bi > b.bi;
//	else
//		return a.w < b.w;
//}
//int main() {
//	int n, m, i, sum;
//	cin >> n >> m;
//	for (i = 0; i < n; i++) {
//		cin >> f[i].w >> f[i].p;
//		f[i].bi = (double)f[i].p / f[i].w;
//	}
//	sort(f, f + n, cmp);
//	i = 0;
//	sum = 0;
//	if (m > n)
//		m = n;
//	for (i = 0; i < m; i++) {
//		sum += f[i].p;
//	}
//	cout << sum << endl;
//}


//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct node {
//	char name[20];
//	double start;
//	double end;
//}act[10010];
//bool cmp(node a, node b) {
//	return a.end < b.end;
//}
//int main() {
//	int n, i, j, sum;
//	cin >> n;
//	for (i = 0; i < n; i++)
//		cin >> act[i].name >> act[i].start >> act[i].end;
//	sort(act, act + n, cmp);
//	sum = 1, i = 0;
//	for (j = 1; j < n; j++) {
//		if (act[j].start >= act[i].end) {
//			sum++;
//			i = j;
//		}
//	}
//	cout << sum << endl;
//}

//#include<iostream>
//using namespace std;
//int gcd(int a, int b) {
//	int c;
//	while (b) {
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	return a;
//}
//int main() {
//	int a, b;
//	cin >> a >> b;
//	cout << gcd(a, b) << endl;
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int n, m, i, a[50] = { 0,0,1,2 };
//	for (i = 4; i < 50; i++) {
//		a[i] = a[i - 1] + a[i - 2];
//	}
//	cin >> n;
//	while (n--) {
//		cin >> m;
//		cout << a[m] << endl;
//	}
//}

//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct node {
//	long long id;
//	double f;
//}stu[10010];
//bool cmp(node a, node b) {
//	return a.f > b.f;
//}
//int main() {
//	int i, n, k;
//	cin >> n >> k;
//	for (i = 0; i < n; i++)
//		cin >> stu[i].id >> stu[i].f;
//	sort(stu, stu + n, cmp);
//	printf("%lld %g\n", stu[k - 1].id, stu[k - 1].f);
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int a, b;
//	while (cin >> a >> b) {
//		cout << a + b << endl;
//	}
//}


//#include<iostream>
//using namespace std;
//#define a 5-3
//int main() {
//	cout << 2 * a << endl; 
//}