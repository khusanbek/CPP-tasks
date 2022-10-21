
#include <iostream>
using namespace std;

int main() {
	
	int start = 0;
	int days = 0;
	int day = 1;
	
	cout << "\n --- Simple Calendar Start Day Task ---\n\n";
	cout << " Enter start day \n (1-Mon, 2-Tue, 3-Wed," 
		 <<	"\n 4-Thu, 5-Fri, 6-Sat, 7-Sun): ";
	cin >> start;
	
	cout << " Enter number of days (28, 29, 30, 31): ";
	cin >> days;
	
	cout << "\n Mon\tTue\tWed\tThu\tFri\tSat\tSun\n";
	
	for(int i = 1; i <= 35 && days > 0; i++) {
		
		if(start > 1 && start < 8) 
		{					
			cout << " \t";
			start--;			
		}
		else 
		{			
			cout << " " << day++ << " \t";
			days--;
		}
		
		if(i % 7 == 0)
			cout << "\n";
	}
	
	cout << "\n\n --- THE END --- \n";
	
	return 0;
}