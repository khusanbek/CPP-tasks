// U2210142
// Mirshod Makhsudov
#include <iostream>
using namespace std;

/*
// Your code
int sum1(int max, int n = 0) {
	
	if(n > max) {
		
		return 0;
		
	}
	else {
		
		return n + sum(max, ++n);
	}
}

// Changed code
// Only change you needed to do was with if condition
// as long as you work with n being equal to max value,
// you should set condition as n greater max,
// as long as n > max then, 0 can be returned.

// Take a look to other functions as well.
// Pay attention on usage of preincrement when passed as argument to function.
// It behaves differently than expected.

// Useful Link: https://www.geeksforgeeks.org/increment-operator-behavior-when-passed-as-function-parameters-in-cpp/

int sum2(int max, int n = 1) {
	
	if(n > max) {
		
		return 0;
		
	}
	else {
		
		return n + sum(max, n + 1);
	}
}
*/

void fun(int x, int y, int z)
{
	// values in x, y, z will
	// be printed.
	cout << x << " " << y << " " << z;
}

void decrement_recursive(int value) {
	
	if(value > 0) {
		
		cout << " Value: " << value << "\n";	
		decrement_recursive(++value);
	}
}

int recursive_sum(int high) {
	
	if(high == 0)
		return 0;
	else {		
		//cout << "high: " << high << "\n";		
		return high + recursive_sum(high - 1);		
	}
}

int mirshod_sum(int max, int n = 1) {
		
	if (n > max)
		return 0;
	else
		return n + mirshod_sum(max, n + 1);
}

int common_sum(int max, int n = 0) {
		
	// n + 1
	return 0;
}

int main() {
	
	/*
	int input = 0;
	cout << " Enter value: ";
	cin >> input;
	
	cout << "\n Decrement recursive:\n\n";	
	
	decrement_recursive(input);
	*/
	
	//recursive_sum(3);
	// cout << " Recursive sum: " << recursive_sum(3) << "" << endl;
	cout << " Mirshod sum: " << mirshod_sum(3) << "\n" << endl;
	cout << " Sum: " << sum(3) << "\n" << endl;
	
	//int i = 2;
	
	//fun(++i, ++i, ++i);
	
	return 0;
}