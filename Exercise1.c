#include <stdio.h>

int findMaxElement(int array[], int size) {  //Thi line of code shows the function used to find the maximum element in an array
    int maxElement = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > maxElement) {  //This line of code checks whether the current element is greater than the maximum element
            maxElement = array[i];  // this updates the maximum element if the current element is greater
        }
    }
    return maxElement;
}
//this is the main function where the program starts executing
int main() {
    int array[] = {5, 2, 8, 3, 1, 6, 4};
    int size = sizeof(array) / sizeof(array[0]);
    int maxElement = findMaxElement(array, size);
    printf("Maximum element in the array: %d\n", maxElement);
    return 0;
}


/*-----PSUEDOCODE-----
FUNCTION findMaxElement
  INPUT: array(an integer array), size(the number of elements in the array)
  OUTPUT: maxElement

  SET maxElement TO array[0]
  FOR i FROM 1 TO size - 1
    IF array[i] IS GREATER THAN maxElement
      SET maxElement TO array[i]
  END FOR
  RETURN maxElement

FUNCTION main
  SET array TO [5, 2, 8, 3, 1, 6, 4]
  SET size TO LENGTH OF array
  SET maxElement TO findMaxElement(array, size)
  PRINT "Maximum element in the array: " AND maxElement
  RETURN 0

*/