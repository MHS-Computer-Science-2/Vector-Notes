//VECTOR NOTES

// I can create a vector
// I can add elements to a vector
// I can remove elements from a vector
// I can determine the size of a vector
// I can use index values to access and modify a vector element

// #include statements add functions/features to your program:
#include<iostream>
#include<vector>

using namespace std;

int main() {
	//Arrays are declared to a specific size that
	//can't change
	string arr[10]; //holds 10 strings

	//Vectors grow and shrink as needed
	vector<int> list;
	// - list will hold ints
	// - list is empty for now

	//size() returns the number of elements in the vector
	cout << "Starting size of list: " << list.size() << endl;

	//push_back() adds elements to the vector
	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);
	list.push_back(5);
	cout << "Size of list after adding 1-5: " << list.size() << endl;

	//We can access and modify vector elements using an index number
	list[3] = 100;

	//Display list the long way
	cout << "Displaying list the long way: " << endl;
	cout << list[0] << endl;
	cout << list[1] << endl;
	cout << list[2] << endl;
	cout << list[3] << endl;
	cout << list[4] << endl;

	//erase() removes elements from a vector
	list.erase(list.begin() + 0);
	// - list.begin() refers to the beginning of the vector
	// - In general: .erase(beginning of vector + index you want to erase)
	list.erase(list.begin() + 3);

	//Display list the loop way
	cout << "Displaying list the loop way after erasing indexes 0 and 3: " << endl;
	for (int i = 0; i < list.size(); i++) {
		cout << list[i] << endl;
	}


	system("pause");
	return 0;
}

