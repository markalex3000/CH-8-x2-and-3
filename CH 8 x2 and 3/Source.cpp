/*  Program Description
2. Write a function print() that prints a vector of ints to cout. Give it two arguments:
a string for “labeling” the output and a vector.

3. Create a vector of Fibonacci numbers and print them using the function from exercise
2. To create the vector, write a function, fibonacci(x,y,v,n), where integers x and y are ints,
v is an empty vector<int>, and n is the number of elements to put into v; v[0] will be x and
v[1] will be y. A Fibonacci number is one that is part of a sequence where each element is
the sum of the two previous ones. For example, starting with 1 and 2, we get 1, 2, 3, 5, 8,
13, 21, . . . . Your fibonacci() function should make such a sequence starting with its
x and y arguments.

*/

/*
Standard opening
*/

#include "C:\Users\mark.alexieff\source\repos\std_lib_facilities.h"

/*
global variables
*/

vector<int> Int_vector;

string vector_name{ "Blank Vector" };


/*
functions declarations
*/

int make_fib(int x, int y, vector<int>& v, int n) {
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			v.push_back(x);
			continue;
		}
		if (i == 1) {
			v.push_back(y);
			continue;
		}
		else v.push_back(v[i - 2] + v[i - 1]);
	}
	return(0);
}

void myprint(string name, vector<int>& v) {
	cout << "Printing the vector: " << name << "\n";
	for (int i = 0; i < v.size(); i++) cout << v[i] << "\n";
}



/*
main
*/

int main() {
	int first{ 0 };
	int second{ 0 };
	int num_terms{ 0 };
	string name_of_seq{};
		
	cout << "Creating and printing a fibonacci sequence. \n";
	cout << " Enter first, second, and number of terms... \n";

	cout << "first = ";
	cin >> first;
	cout << "\n";
	cout << "second = ";
	cin >> second;
	cout << "\n";
	cout << "number of terms = ";
	cin >> num_terms;
	cout << "\n";

	cout << "Name of sequence = ";
	cin >> name_of_seq;

	make_fib(first, second, Int_vector, num_terms);

	myprint(name_of_seq, Int_vector);
	keep_window_open();
	return(0);
}


/*
funcion definitions
*/


