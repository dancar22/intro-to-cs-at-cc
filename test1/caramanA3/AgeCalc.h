#ifndef AGECALC_H_
#define AGECALC_H_

#include "Student.h"

/*	Used to find the youngest student in a pointer array of students, also calculates the average age of the group
 *
 * 	Input:
 * 		studentArr - array of student pointers, all students pointers that do not have valid information should be be set to nullptr
 * 		youngStudent - pointer to a student object that is passed by reference
 *
 * 	Output:
 * 		average age - an integer that represents the average age of the group, returns -1 if the total age of all students in the array is 0
 * 		youngStudent - the pointer that is passed by reference will now point to the youngest student in the given array
 *
 */
int ageCalc(Student *[], Student * &);





#endif /* AGECALC_H_ */
