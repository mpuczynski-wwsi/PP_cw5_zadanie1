#include<cstdio>
#include <iostream>

using namespace std;

int nwd(int a, int b) {
	if (a % b != 0) {
		return nwd(b, a % b);
	}
	return b;
}

long long nwd_modyfikacja(long long a, long long b) {
	static int licznik = 0;
	cout << ++licznik << " wywolanie funkcji nwd_modyfikacja z nastepujacymi parametrami a = " << a << " i b = " << b << "\n";
	if (a % b != 0) {
		return nwd_modyfikacja(b, a % b);
	}
	return b;
}

int main() {
	int a, b;
	cout << "Obliczanie NWD\n";
	cout << "podaj dwie liczby: "; 
	cin >> a >> b;
	cout << "\nFunkcja nwd: " << nwd(a,b) << "\n\n";
	cout << "\nFunkcja nwd_modyfikacja: " << nwd_modyfikacja(a,b) << "\n";
}