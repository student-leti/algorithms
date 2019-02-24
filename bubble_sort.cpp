#include <array>
//#include <iostream>
#include <chrono>



double bubbleSort(int *arr, int size){
	int temp = 0;
	
	using std::chrono::system_clock;
	
	system_clock::time_point start, end;
	
	start = system_clock::now();
	
	for(int i = 0; i < size - 1; ++i){
		for(int j = 0; j < size -1; ++j){
			if(arr[j] > arr[j + 1]){
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
	end = system_clock::now();
	
	std::chrono::duration<double> elapsed_seconds = (end - start);

	return elapsed_seconds.count();
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
