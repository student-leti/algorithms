#include "bubble.h"

void bubble_Sort(int *arr){
	for(unsigned int i = 0; i < array_min.size() -1 ; ++i){
		for(unsigned int j = 0; j < array_min.size(); ++j){
			if(array_min[j] > array_min[j + 1]){
				temp = array_min[j];
				array_min[j] = array_min[j + 1];
				array_min[j + 1] = temp;
			}
		}
	}
}




	/*bubble sort*/
	//[1]
	//bubbleSort();
	/*for(unsigned int i = 0; i < array_min.size() -1 ; ++i){
		for(unsigned int j = 0; j < array_min.size(); ++j){
			if(array_min[j] > array_min[j + 1]){
				temp = array_min[j];
				array_min[j] = array_min[j + 1];
				array_min[j + 1] = temp;
			}
		
		}
	}
	*/
	//[1]!
