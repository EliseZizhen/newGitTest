#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <set>
#include <queue>
#include <utility>
#include <algorithm>
#include <map>
#include <cassert>
using namespace std;

int main() {
	int a, digit;
	for(int i = 1; i < 100000; i++) {
		a = 29 * i;
		int sum_digit = 0;
		string s = to_string(a);
		for(char c : s) {
			sum_digit += c - '0';
		}
		if (a % 100 == 29 && sum_digit == 29) {
			cout << a << endl;
			break;
		}
	}
	return 0;
}