#include <iostream>
import BPZ1902.Kvaratskheliya.Lab3.Task1;
import BPZ1902.Kvaratskheliya.Lab3.Task2;
import BPZ1902.Kvaratskheliya.Lab3.Task3;
import BPZ1902.Kvaratskheliya.Lab3.Task4;
import BPZ1902.Kvaratskheliya.Lab3.Task5;
using namespace std;
void task1();
void task2();
void task3();
void task4();
void task5();
int main() {
	setlocale(LC_ALL, "Russian");
	while (true){
		int choose = 0;
		printf("¬ыберите задание\n\t1 - задание 1\n\t2 - задание 2\n\t3 - задание 3\n\t4 - задание 4\n\t5 - задание 5\n\t6 - закрыть\nѕункт: ");
		cin >> choose;
		printf("\n");
		switch (choose){
			case 1:
				task1();
				printf("\n");
				break;
			case 2:
				task2(); 
				printf("\n");
				break;
			case 3:
				task3();
				printf("\n");
				break;
			case 4:
				task4();
				printf("\n");
				break;
			case 5:
				task5();
				printf("\n");
				break;
			case 6:
				printf("«авершение программы");
				return 0;
			default:
				printf("¬ведите корректные данные!\n");
		}
	}
	return 0;
}
void task1() {
	double x;
	double y;
	double eps;
	int n;
	cout << "¬ведите значение переменной x: ";
	cin >> x;
	cout << "¬ведите значение переменной y: ";
	cin >> y;
	cout << "¬ведите значение погрешности eps: ";
	cin >> eps;
	cout << "¬ведите количество итераций n: ";
	cin >> n;

	cout << "f1(" << x << ") : " << "f1(" << y << ") : " << RBPO::Lab3::Task1::f1(x, y) << endl;
	cout << "f2(" << x << ") : " << RBPO::Lab3::Task1::f2(x) << endl;
	cout << "f3(" << n << ") : " << RBPO::Lab3::Task1::f3(n) << endl;
	cout << "f4(" << eps << ") : " << RBPO::Lab3::Task1::f4(eps) << endl;
}
void task2() {
	double x;
	double y;
	double eps;
	int n;
	cout << "¬ведите значение переменной x: ";
	cin >> x;
	cout << "¬ведите значение переменной y: ";
	cin >> y;
	cout << "¬ведите значение погрешности eps: ";
	cin >> eps;
	cout << "¬ведите количество итераций n: ";
	cin >> n;

	cout << "f1(" << x << ") : " << "f1(" << y << ") : " << RBPO::Lab3::Task2::f1(x, y) << endl;
	cout << "f2(" << x << ") : " << RBPO::Lab3::Task2::f2(x) << endl;
	cout << "f3(" << n << ") : " << RBPO::Lab3::Task2::f3(n) << endl;
	cout << "f4(" << eps << ") : " << RBPO::Lab3::Task2::f4(eps) << endl;
}
void task3() {
	double x;
	double y;
	double eps;
	int n;
	cout << "¬ведите значение переменной x: ";
	cin >> x;
	cout << "¬ведите значение переменной y: ";
	cin >> y;
	cout << "¬ведите значение погрешности eps: ";
	cin >> eps;
	cout << "¬ведите количество итераций n: ";
	cin >> n;

	cout << "f1(" << x << ") : " << "f1(" << y << ") : " << RBPO::Lab3::Task3::f1(x, y) << endl;
	cout << "f2(" << x << ") : " << RBPO::Lab3::Task3::f2(x) << endl;
	cout << "f3(" << n << ") : " << RBPO::Lab3::Task3::f3(n) << endl;
	cout << "f4(" << eps << ") : " << RBPO::Lab3::Task3::f4(eps) << endl;
}
void task4() {
	double x;
	double y;
	double eps;
	int n;
	cout << "¬ведите значение переменной x: ";
	cin >> x;
	cout << "¬ведите значение переменной y: ";
	cin >> y;
	cout << "¬ведите значение погрешности eps: ";
	cin >> eps;
	cout << "¬ведите количество итераций n: ";
	cin >> n;

	cout << "f1(" << x << ") : " << "f1(" << y << ") : " << RBPO::Lab3::Task4::f1(x, y) << endl;
	cout << "f2(" << x << ") : " << RBPO::Lab3::Task4::f2(x) << endl;
	cout << "f3(" << n << ") : " << RBPO::Lab3::Task4::f3(n) << endl;
	cout << "f4(" << eps << ") : " << RBPO::Lab3::Task4::f4(eps) << endl;
}
void task5() {
	double x;
	double y;
	double eps;
	int n;
	cout << "¬ведите значение переменной x: ";
	cin >> x;
	cout << "¬ведите значение переменной y: ";
	cin >> y;
	cout << "¬ведите значение погрешности eps: ";
	cin >> eps;
	cout << "¬ведите количество итераций n: ";
	cin >> n;

	cout << "f1(" << x << ") : " << "f1(" << y << ") : " << RBPO::Lab3::Task5::f1(x, y) << endl;
	cout << "f2(" << x << ") : " << RBPO::Lab3::Task5::f2(x) << endl;
	cout << "f3(" << n << ") : " << RBPO::Lab3::Task5::f3(n) << endl;
	cout << "f4(" << eps << ") : " << RBPO::Lab3::Task5::f4(eps) << endl;
}