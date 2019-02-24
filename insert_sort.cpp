#include <array>
//#include <iostream>
#include <chrono>



double bubbleSort(int *arr, int size){
	int temp = 0;
	
	using std::chrono::system_clock;
	
	system_clock::time_point start, end;
	
	start = system_clock::now();
	
/*---------------------------------------*/
	
	end = system_clock::now();
	
	std::chrono::duration<double> elapsed_seconds = (end - start);

	return elapsed_seconds.count();
}

