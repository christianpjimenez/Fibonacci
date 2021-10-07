#include <iostream>
using namespace std;

// Doing this project during the Facebook/Whatsapp network failure on 04/10
// Watched a video of some interesting projects and a guy mentioned Fibonacci in Javascript
// I wondered if I could write a code for the Fibonacci sequence by myself, so let's see how this results

int main()
{
	int fib = 0;
	int fib2 = 1;
	int result;
	int num_seq;

	cout << "The Fibonacci Sequence is a serie of numbers that starts with 0 and 1, and the next term is the sum of the immediate two previous terms." << endl;
	cout << "To start, introduce the number of the sequence you want to check. Keep in mind that the first and second term are 0 and 1 respectively" << endl;
	cout << "Number of the sequence: ";
	cin >> num_seq;
	cout << endl;

	cout << "This is the sequence until the term " << num_seq << endl;
	
	if (num_seq == 1)
	{
		cout << "0";
	}
	else if (num_seq == 2)
	{
		cout << "1";
	}
	
	else if (num_seq == 0)
	{
		cout << "Please write a number starting from 1, as there are no 0 terms or negative ones." << endl << endl;
		main();
	}

	else
	{
		cout << "0" << endl << "1" << endl;
		for (int i = fib; i < num_seq - 2; i++)
		{
			//fib = 0;
			//fib2 = 1;
			result = fib + fib2;
			cout << result << endl;
			fib = fib2;
			fib2 = result;
		}
	}

	return 0;
}
