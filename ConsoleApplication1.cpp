
using namespace std;
#include <iostream>
//N1
//int main()
//{
//    float r1, r2, r3;
//    cin >> r1 >> r2 >> r3;
//    float r0 = 1 / (1 / r1 + 1 / r2 + 1 / r3);
//    cout << r0;
//}
//N2
//int main() {
//    const double pi = 3.14;
//    float L, S, R;
//    cin >> L;
//    R = L / (2 * pi);
//    S = pi * R * R;
//    cout << S;
//
//}
//N3
int main() {
	int V, t, a;
	cin >> V >> t >> a;
	int S = V * t + (a * t * t) / 2;
	cout << S;
}