#include<iostream>
using namespace std;

int main(){
	int hr;
	double min;
	cout << "Enter military time in hours : ";
	cin >> hr;
	cout << "Enter military time in minutes: ";
	cin >> min;
	
	if (hr > 12 && hr < 24) {
		hr = hr - 12;
		cout << "Standard time is : " << hr << ":" << min << "PM\n";
	}
	else if (hr == 24) {
		hr = hr - 12;
		cout << "Standard time is : " << hr << ":" << min << "AM\n";
	}
	else if (hr == 12){
		cout << "Standard time is : " << hr << ":" << min << "PM\n";
	}
	else {
		cout << "Standard time is : " << hr << ":" << min << "AM";
	}
}
