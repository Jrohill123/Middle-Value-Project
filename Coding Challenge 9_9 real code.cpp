#include <iostream>
using namespace std;

// First were going to make our array function and then define it on the bottom. it will accept an array and return a double.
// The biggest thing to remember from this challenge is the fact that arrays start at zero. due to this array[last] is not the same as array[last-1]
// array[last] is out of bounds when trying to access its value.

double medianFunction(int[], int);

int main() {
	int array1[9] = {1,2,3,4,5,6,7,8,9};
	int array2[10] = { 1,2,3,4,5,6,7,8,9,10 };
	double median1;
	double median2;

	median1 = medianFunction(array1, 9);
	median2 = medianFunction(array2, 10);

	cout << "The median of the first array is " << median1 << " " << endl;
	cout << "The median of the second array is " << median2 << " " << endl;


	return 0;
}



// This is our function defintion.

double medianFunction(int array[], int numbers)
{
	// we named our pointer power and power will have the value of the memory addresses for our array.
	// we used pointer notation which is just array[index] but written as *(array + index)
	// if the remainder of numbers is not equal to zero then the meidan will be the value of array numbers divided by 2
	// when doing the calculations we must set numbers - 1 because were out of bounds when trying to access the value of array[9]
	// also we must divide numbers by 2 in order to get to the middle subscript. 
	// 9 divided by 2 is 4.5. Due to this the compiler uses the whole number 4 as the subscript for array. so its array[4].
	double median;
	if (numbers % 2 != 0)
	{
		median = *(array + ((numbers - 1) / 2));
	}
	

	// For the else we took the array subscript of 10 - 1 divided by 2 which is 5 because array [4] = 5 and the array subscript of numbers / 2.
	// we added them both together. Then our answer comes up to be 11. After that we divided it by 2. I have no clue why i needed to use 
	// median /= 2 and couldnt figure out a way to keep it in the line above. if you try that the answer becomes 8 or 5 not 5.5
	else
	{
		median = *(array + ((numbers - 1) / 2)) + *(array + (numbers / 2));
		median /= 2;

	}
	

	// The median will be returned

	return median;
}