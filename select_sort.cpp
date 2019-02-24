#include <array>
//#include <iostream>
#include <chrono>

double selectSort(int *arr, int size){
	using std::chrono::system_clock;
	
	system_clock::time_point start, end;
	
	start = system_clock::now();
	
	int k = 0;
	int temp = 0;
	
	for(int i = 0; i < size - 1; ++i){
		k = i+1;
		while(k < size){
			if(arr[k] < arr[i]){
				temp = arr[k];
				arr[k] = arr[i];
				arr[i] = temp;
			}
			++k;
		}
	}
	
	end = system_clock::now();
	
	std::chrono::duration<double> elapsed_seconds = (end - start);

	return elapsed_seconds.count();
}





/*
k = i;
temp = array_min[i];

for(unsigned int j = i + 1; j < array_min.size(); ++j){
	if(array_min[j] < temp){
		k = j;
		temp = array_min[j];
	}
}

array_min[k] = array_min[i];
array_min[i] = temp;
*/
