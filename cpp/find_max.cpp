/***
 * @file largest_num.c
 * @brief find the largest num in a given set
 ***/
#include <iostream>
using namespace std;

int find_max(int *set, int length)
{
	int max = ~(0); // max negative integer possible
	int counter;

	for (counter=0; counter < length; counter++) {
		if (max < set[counter])
			max = set[counter];
	}
	return max;
}

int main (int argc, char *argv[])
{
	int set[] = {1,3,2,5,10,4,6,7,8,9};

	cout<< "max = " << find_max(set, sizeof(set) / sizeof(int)) << endl;
	//Q: Why is it a good idea to pass length?
	//https://www.geeksforgeeks.org/using-sizof-operator-with-array-paratmeters/
}
