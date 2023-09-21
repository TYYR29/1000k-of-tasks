#include <iostream>
#include <locale>
#include <algorithm>
#include <math.h>

using namespace std;

int numfortype() {
	int num = 0;
	cout << "Номер: ";
	cin >> num;
	return num;
}

bool intminmaxchecher(int mn, int x, int mx) {
	if (mn <= x <= mx) {
		return true;
	}
	else
		return false;
}

//class B {
	void B12() {

		float a, b, c, P;
		cout << "A = ";
		cin >> a;
		cout << "B = ";
		cin >> b;
		c = sqrt(a * a + b * b);
		P = a + b + c;
		cout << "C = " << c << endl << "P = " << P;
	}
	void B20() {
		float x1, y1, x2, y2;
		cout << "Enter x1, y1, x2, y2: ";
		cin >> x1 >> y1 >> x2 >> y2;
		cout << "Range = " << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	}
	void B21() {
		float x1, y1, x2, y2, x3, y3, l1, l2, l3, p;
		cout << "Enter x1, y1, x2, y2, x: ";
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		l1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		l2 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
		l3 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
		p = l1 + l2 + l3;
		cout << "S = " << sqrt(p * (p - l1) * (p - l2) * (p - l3));
	}
	void B13() {
		float a, b;
		cout << "R1 = ";
		cin >> a;
		cout << "R2 = ";
		cin >> b;
		float s1 = 3.14 * a * a;
		float s2 = 3.14 * b * b;
		float s3 = abs(s1 - s2);
		cout << "S1 = " << s1 << endl << "S2 = " << s2 << endl << "S3 = " << s3;
	}
	void B27() {
		int a, a1;
		cout << "A = ";
		cin >> a;
		a1 = a;
		for (int b = 2; b <= 8; b*=2) {
			a1 = pow(a1, 2);
			cout << a << "^" << b << " = " << a1 << endl;
		}
	}
	void B28() {
		int a;
		cout << "A = ";
		cin >> a;
		cout << a << "^2 = " << pow(a, 2) << endl << a << "^3 = " << pow(a, 3) << endl << a << "^5 = " << pow(a, 5) << endl << a << "^10 = " << pow(a, 10) << endl << a << "^15 = " << pow(a, 15) << endl;
	}
	void B29() {
		int a;
		cout << "A = ";
		cin >> a;
		if (intminmaxchecher(1, a, 359) == true) {
			cout << "B = " << (a / 180) * 3.14;
		}
		else
			cout << "Operant error";
	}
	void B30() {
		int a, b;
		cout << "A = ";
		cin >> a;
		if (intminmaxchecher(0, a, 2*3.14-0.01) == true) {
			b = a * 180 / 3.14;
			cout << "B = " << b;
		}
		else
			cout << "Operant error";
	}
	void B31() {
		float t, tc;
		cout << "Tf = ";
		cin >> t;
		tc = (t - 32) * 0.555555556;
		cout << "Tc = " << tc;
	}
	void B32() {
		float t, tf;
		cout << "Tc = ";
		cin >> t;
		tf = t / 0.555555556 + 32;
		cout << "Tf = " << tf;
	}
	void B33() {
		int x, a, y, cost;
		cout << "Вес конфет в кг(1) = ";
		cin >> x;
		cout << "Цена за этот вес = ";
		cin >> a;
		cout << "Вес конфет в кг(2) = ";
		cin >> y;
		cost = a / x;
		cout << "--------------------\nЦена за кг = " << cost << endl << "Цена за " << y << " кг = " << cost * y;
	}
//};

//class I {
	void I10() {
		char a, b, c;
		cin >> a >> b >> c;
		cout << c << " " << b;
	}
	void I11() {
		int a, b;
		cout << "A = ";
		cin >> a;
		if (a < 1000 && a >= 100) {
			b = a / 100;
			cout << "B = " << b;
		}
		else {
			cout << "Input error";
		}
	}
	void I20() {
		int sec;
		cout << "Enter time in seconds: ";
		cin >> sec;
		cout << "Time in hours: " << sec / 3600;
	}
	void I21() {
		int sec;
		cout << "Enter time in seconds: ";
		cin >> sec;
		cout << (sec - ((sec / 60) * 60));
	}
//};
	void Bool6() {
		int a, b, c;
		cout << "A = ";
		cin >> a;
		cout << "B = ";
		cin >> b;
		cout << "C = ";
		cin >> c;
		string answer;
		if (intminmaxchecher(a + 1, b, c - 1) == true) {
			answer = "Истина";
		}
		else
			answer = "Ложь";
		cout << "Хотя бы одно из чисел A и B нечётное: " << answer;
	}
	void Bool7() {
		int a, b, c;
		cout << "A = ";
		cin >> a;
		cout << "B = ";
		cin >> b;
		cout << "C = ";
		cin >> c;
		string answer;
		if (intminmaxchecher(a + 1, b, c - 1) == true or intminmaxchecher(b + 1, b, a - 1) == true) {
			answer = "Истина";
		}
		else
			answer = "Ложь";
		cout << "Хотя бы одно из чисел A и B нечётное: " << answer;
	}
	void Bool8() {
		int a, b;
		cout << "A = ";
		cin >> a;
		cout << "B = ";
		cin >> b;
		string answer;
		if (a % 2 == 1 and b % 2 == 1) {
			answer = "Истина";
		}
		else
			answer = "Ложь";
		cout << "Хотя бы одно из чисел A и B нечётное: " << answer;
	}
	void Bool9() {
		int a, b;
		cout << "A = ";
		cin >> a;
		cout << "B = ";
		cin >> b;
		string answer;
		if (a % 2 == 1 or b % 2 == 1) {
			answer = "Истина";
		}
		else
			answer = "Ложь";
		cout << "Хотя бы одно из чисел A и B нечётное: " << answer;
	}
	void Bool10() {
		int a, b;
		cout << "A = ";
		cin >> a;
		cout << "B = ";
		cin >> b;
		string answer;
		if (a % 2 == 1 xor b % 2 == 1) {
			answer = "Истина";
		}
		else
			answer = "Ложь";
		cout << "Ровно одно из чисел A и B нечётное: " << answer;
	}
	void Bool11() {
		int a, b;
		cout << "A = ";
		cin >> a;
		cout << "B = ";
		cin >> b;
		string answer;
		if ((max(a, b) - min(a, b)) % 2 == 0) {
			answer = "Истина";
		}
		else
			answer = "Ложь";
		cout << "Числа A и B имеют одинаковую чётность: " << answer;
	}
	void Bool12() {
		int a, b, c;
		cout << "A = ";
		cin >> a;
		cout << "B = ";
		cin >> b;
		cout << "C = ";
		cin >> c;
		bool ans = (a > 0 and b > 0) and c > 0;
		string answer;
		if (ans == true)
			answer = "Истина";
		else
			answer = "Ложь";
		cout << "Хотя бы одно из чисел положительное: " << answer;
	}
	void Bool13() {
		int a, b, c;
		cout << "A = ";
		cin >> a;
		cout << "B = ";
		cin >> b;
		cout << "C = ";
		cin >> c;
		bool ans = (a > 0 or b > 0) or c > 0;
		string answer;
		if (ans == true)
			answer = "Истина";
		else
			answer = "Ложь";
		cout << "Хотя бы одно из чисел положительное: " << answer;
	}
	void Bool14() {
		int a, b, c;
		cout << "A = ";
		cin >> a;
		cout << "B = ";
		cin >> b;
		cout << "C = ";
		cin >> c;
		bool ans = false, mem = false;
		if (a > 0) {
			ans = true;
		}
		if (b > 0) {
			if (ans == true) {
				ans = false;
				mem = true;
			}
			else {
				ans = true;
			}
		}
		if (c > 0) {
			if (ans == true) {
				ans = false;
			}
			else {
				if (mem == false) {
					ans = true;
				}
			}
		}
		string answer;
		if (ans == true)
			answer = "Истина";
		else
			answer = "Ложь";
		cout << "Только одно из чисел положительное: " << answer;
	}
	void Bool15() {
		int a, b, c, num = 0;
		cout << "A = ";
		cin >> a;
		cout << "B = ";
		cin >> b;
		cout << "C = ";
		cin >> c;
		if (a > 0)
			num++;
		if (b > 0)
			num++;
		if (c > 0)
			num++;
		cout << "Ровно два из чисел положительное: ";
		if (num == 2)
			cout << "Истина";
		else
			cout << "Ложь";
	}
	void Bool20() {
		int fulnum, num1, num2, num3;
		cout << "Enter number: ";
		cin >> fulnum;
		if (fulnum >= 100 and fulnum <= 999) {
			num1 = fulnum / 100;
			num2 = (fulnum / 10) % 10;
			num3 = fulnum % 100;
			if (num1 != num2 and num2 != num3 and num1 != num3)
				cout << "True";
			else
				cout << "False";
		}
	}
	void Bool21() {
		int fulnum, num1, num2, num3;
		cout << "Enter number: ";
		cin >> fulnum;
		if (fulnum >= 100 and fulnum <= 999) {
			num1 = fulnum / 100;
			num2 = (fulnum / 10) % 10;
			num3 = fulnum % 100;
			if (num1 < num2 and num2 < num3)
				cout << "True";
			else
				cout << "False";
		}
	}

int main()
{
	setlocale(LC_ALL, "rus");
	int num;
	string tasktype;
	cout << "Раздел: ";
	cin >> tasktype;
	if (tasktype == "Begin") {
		num = numfortype();
		switch (num) {
		case 12:
			//B(B12());
			B12();
			break;
		case 13:
			//B(B13());
			B13();
			break;
		case 20:
			B20();
			break;
		case 21:
			B21();
			break;
		case 27:
			B27();
			break;
		case 28:
			B28();
			break;
		case 29:
			B29();
			break;
		case 30:
			B30();
			break;
		case 31:
			B31();
			break;
		case 32:
			B32();
			break;
		case 33:
			B33();
			break;
		default:
			cout << "Invalid number";
			break;
		}
	}
	else {
		if (tasktype == "Integer") {
			num = numfortype();
			switch (num) {
			case 10:
				//I(I10());
				I10();
				break;
			case 11:
				//I(I11());
				I11();
				break;
			case 20:
				I20();
				break;
			case 21:
				I21();
				break;
			}
		}
		else {
			if (tasktype == "Boolean") {
				num = numfortype();
				switch (num) {
				case 6:
					Bool6();
					break;
				case 7:
					Bool7();
					break;
				case 8:
					Bool8();
					break;
				case 9:
					Bool9();
					break;
				case 10:
					Bool10();
					break;
				case 11:
					Bool11();
					break;
				case 12:
					Bool12();
					break;
				case 13:
					Bool13();
					break;
				case 14:
					Bool14();
					break;
				case 15:
					Bool15();
					break;
				case 20:
					Bool20();
					break;
				case 21:
					Bool21();
					break;
				}
			}
			else
				cout << "invalid type";
		}
	}
}