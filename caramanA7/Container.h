#ifndef CONTAINER_H_
#define CONTAINER_H_

using namespace std;

/* Container templated class
 * first datatype is used for the keys
 * second datatype is used for the actual data
 * data can be accessed by giving the key for it
 *
 *
 */
template <class keyType, class dataType>
class Container {

private:

	// pointers will be used to dynamically allocate an array for keys and data
	keyType * keyA;
	dataType * dataA;

	// ints that keep track of the current size and the maximum possible size given by the caller
	int maxSize;
	int currentSize;

public:

	Container(int);
	~Container();


	int size();
	int max_size();
	bool push_back(keyType, dataType);
	keyType key(int);
	dataType data(int);
	bool retrieve_by_key(keyType, dataType&);
	dataType& operator[](int);

};


/*	Constructor for a Container, allocates memory for the key and data arrays with the size specified by the caller
 *
 * 	num - int that sets the maximum size of the Container
 *
 */
template <class keyType, class dataType>
Container<keyType, dataType>::Container(int num) {

	keyA = new keyType[num];
	dataA = new dataType[num];
	maxSize = num;
	currentSize = 0;

}

/*	Destructor for a Container, frees memory that was allocated for the data and key arrays
 */
template <class keyType, class dataType>
Container<keyType, dataType>::~Container() {

	delete[] dataA;
	delete[] keyA;

}

/*	returns the current size of the container
 */
template <class keyType, class dataType>
int Container<keyType, dataType>::size() {

	return currentSize;

}

/* returns the maximum size of the container, this size was initially specified by the user
 */
template <class keyType, class dataType>
int Container<keyType, dataType>::max_size() {

	return maxSize;

}

/*	Adds the given data and the key for it into the container, checks if the container is full. If full returns false. If the container has space
 * 	adds the given key and data and returns true
 *
 * 	key - the key that goes with the given data
 * 	data - the data that will be put into the container
 *
 */
template <class keyType, class dataType>
bool Container<keyType, dataType>::push_back(keyType key, dataType data) {

	if (currentSize == maxSize) {

		return false;

	} else {

		keyA[currentSize] = key;
		dataA[currentSize] = data;
		currentSize++;
		return true;

	}

}

/*	Returns the key at the given index. Completes bounds checking and throws a string if the given index is out bounds
 *
 * 	num - the index of the key
 */
template <class keyType, class dataType>
keyType Container<keyType, dataType>::key(int num) {

	if (num < currentSize && num > -1) {

		return keyA[num];

	} else {

		string s = "Element does not exist";
		throw(s);

	}

}

/*	Returns the data at the given index. Completes bounds checking and throws a string if the given index is out bounds
 *
 * 	num - the index of the data
 */
template <class keyType, class dataType>
dataType Container<keyType, dataType>::data(int num) {

	if (num < currentSize && num > -1) {

		return dataA[num];

	} else {

		string s = "Element does not exist";
		throw(s);

	}

}

/*	Completes linear search to find the index of the given key. Returns the data at that index by pointing the given data variable to it.
 * 	If the key was found succesfully returns true, otherwise returns false.
 *
 * 	key - the key that will be searched for
 * 	data - if the key is found it will point to the corresponding data after the function executes
 */
template <class keyType, class dataType>
bool Container<keyType, dataType>::retrieve_by_key(keyType key, dataType &data) {

	int i = 0;

	for (; keyA[i] != key && i < currentSize; i++) {}

	if (keyA[i] == key) {

		data = dataA[i];
		return true;

	} else {
		return false;
	}


}

/* Operator [] overload. Returns the data at the given index. Performs bounds checking and throws a string if the index
 * is out of bounds
 *
 * num - index of the data
 */
template <class keyType, class dataType>
dataType& Container<keyType, dataType>::operator[](int num) {

	if (num < currentSize && num > -1) {

		return dataA[num];

	} else {

		string s = "Element does not exist";
		throw(s);

	}

}


#endif
