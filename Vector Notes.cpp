//VECTOR NOTES
// I can create a vector
// I can add elements to a vector
// I can remove elements from a vector
// I can determine the size of a vector
// I can use index values to access and modify a vector element

// #include statements add functions/features to your program:
#include<iostream>


using namespace std;

int main() {
	//Arrays are declared to a specific size that
	//can't change
	string arr[10]; //holds 10 strings

	//Vectors grow and shrink as needed
	
	// - list will hold ints
	// - list is empty for now

	//size() returns the number of elements in the vector
	cout << "Starting size of list: " << "todo" << endl;

	//push_back() adds elements to the vector

	cout << "Size of list after adding 1-5: " << "todo" << endl;

	//We can access and modify vector elements using an index number
	

	//Display list the long way
	cout << "Displaying list the long way: " << endl;


	//erase() removes elements from a vector

	// - list.begin() refers to the beginning of the vector
	// - In general: .erase(beginning of vector + index you want to erase)
	

	//Display list the loop way
	cout << "Displaying list the loop way after erasing indexes 0 and 3: " << endl;



	system("pause");
	return 0;
}

