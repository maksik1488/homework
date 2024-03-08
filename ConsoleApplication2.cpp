using namespace std;
#include <iostream>
//N1
//int main()
//{
//	int Ts, Tm, Th;
//	cin >> Ts;
//	Tm = Ts / 60;
//	Th = Ts / 3600;
//	cout << Ts << "\n";
//	cout << Tm << "\n";
//	cout << Th << "\n";
//}
//N2
//int main() {
//	
//	double num;
//	float dollar, cent;
//	cin >> num;
//	dollar = num / 1;
//	cent = (num - dollar) * 100;
//	cout << dollar << " dollars" << " and" << " " << cent << " cents";
//		
//}
//N3
//int main() {
//	setlocale(LC_ALL, "rus");
//	int a,b,c;
//	cin >> a;
//	b = a / 7;
//	c = a % 7;
//	cout << b << " недели" << " " << c << " день/дня/дней";
//
//}
//N4
//int main() {
//	setlocale(LC_ALL, "rus");
//	int s, t,v;
//	cout << "Calculating running speed.\n";
//	cout << "The length of the distance: ";
//    cin >> s;
//	cout << "Time: "; cin >> t;
//	v = s / t;
//	cout << "You were running at speed:" << v << " km/h";

//}
//N5
int main() {
	setlocale(LC_ALL, "rus");
	int a, b, c;
	cin >> a >> b;
	c = (a + (a * b / 100)) / 12;
	cout << c;
}