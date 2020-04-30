#include <iostream>
#include <vector>

using namespace std;

/** task 1 */
double area() {
	// todo: implement
}

/** task 2 */
int doubleFactorial(int n) {
	// todo: implement
	return -1;
}

/** task 3 */
double f() {
	// todo: implement
}

double solveApproximateCauchy() {
	// todo: implement
}

/** task 4 */
vector<string> unique_names(const vector<string>& names1, const vector<string>& names2) {
	// todo: implement
}

int main() {
	// task 1
	double edge, edge1, edge2, edge3;
	double base, height;
	cout << "Площадь поверхности куба по ребру (" << edge << ") = " << area() << endl;
	cout << "Правильной четырехугольной призмы по стороне основания и высоте (" << base << ", " << height << ") = "
		<< area() << endl;
	cout << "Прямоугольного параллелепипеда по трем ребрам (" << edge1 << ", " << edge2 << ", " << edge3 << ") = "
		<< area() << endl;
	cout << endl;

	// task 2
	cout << "8!! = " << doubleFactorial(8) << endl; //  384
	cout << "9!! = " << doubleFactorial(9) << endl; //  945
	cout << endl;

	// task 3
	cout << "Решение задачи Коши для функции f(x, y) = y^2 + 1 => " << solveApproximateCauchy() << endl;
	cout << endl;

	// task 4
	vector<string> names1 = { "Ava", "Emma", "Olivia" };
	vector<string> names2 = { "Olivia", "Sophia", "Emma", "Stuart" };

	vector<string> result = unique_names(names1, names2);
	for (const auto& element : result) {
		cout << element << ' '; // should print Ava Emma Olivia Sophia
	}
	cout << endl;
}