#include <iostream>

using namespace std;


int main() {
	{//you candetect overflow by the number being negitive.
		cout << "enter a number we will add each consecutive number leading up to and including it then return the sum" << endl;
		short n(0), sum(0), i(0);//here overflow starts somewhere between 255 and 256
		while (n != -1) {
			sum = 0;
			i = 0;
			cin >> n;
			while (n > i) {
				i++;
				sum += i;
			}

			cout << sum << endl;
		}
	}
	{//you candetect overflow by the number being negitive.
		cout << "enter a number we will add each consecutive number leading up to and including it then return the sum" << endl;
		long n(0), sum(0), i(0);//here overflow starts between 5310842 and 5310843
		while (n != -1) {
			sum = 0;
			i = 0;
			cin >> n;
			while (n > i) {
				i++;
				sum += i;
			}

			cout << sum << endl;
		}
	}

	{//you can detect overflow because it will return inf
		cout << "enter a number we will multiply each consecutive number leading up to and including it then return the sum" << endl;
		long n(0);
		float sum(1), i(0);//here overflow starts between 34 and 35
		while (n != -1) {
			sum = 1;
			i = 0;
			cin >> n;
			while (n > i) {
				i++;
				sum *= i;
			}

			cout << sum << endl;
		}
	}

	{//you can detect overflow because it will return inf
		cout << "enter a number we will multiply each consecutive number leading up to and including it then return the sum" << endl;
		long n(0);
		double sum(-1), i(0);//here overflow starts between 170 and 171
		while (n != -1) {
			sum = -1;
			i = 0;
			cin >> n;
			while (n > i) {
				i++;
				sum *= i;
			}

			cout << sum << endl;
		}
	}

	{
		long n(0);
		cout << "enter a number we will add up 1/n with n being each consecutive number including it and return the result" << endl;
		double sum(1), i(0);//if this is a foat it rounds it off quicker so the number ends up at max 15
		while (n != -1) {  //if its a double then it does not round it of as quickly and maxes out at about 19
			sum = 1;
			i = 0;
			cin >> n;
			while (n > i) {
				i++;
				sum += (1 / i);
			}
			sum -= 1.0;

			cout << sum << endl;
		}
	}

	for (double i = 3.4; i < 4.4; i += 0.2)
	{//as a float there are rounding errors making it so 4.4 is greater then 4.4
		cout << "i = " << i << endl;
	}//changing it to a double takes care of the rounding error



	return 0;
}