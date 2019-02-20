#include <iostream>
#include <fstream>
#include <array>
#include <chrono>
#include <ctime>

#include "random_number.cpp"

#include "bubble.h"
//#include "select_sort.h"

#define MIN_SIZE  10
#define MID_SIZE  100
#define MAX_SIZE  1000
	  	


using namespace std;

int main (){
	//create files with numbers
	ofstream fout;
	ifstream fin;
	
	array<string, 3> files {"aray_min.txt", "aray_mid.txt", "aray_max.txt"};
	array<int, 3> distr {MIN_SIZE, MID_SIZE, MAX_SIZE};
	array<double, 3> timer;
	
	
	array<int, MIN_SIZE> array_min;
	//array<int, MID_SIZE> array_mid;
	//array<int, MAX_SIZE> array_max;
	
	/*fill files with numbers*/
	// [1]
	for(unsigned int j = 0; j < files.size(); ++j){
		fout.open(files[j], ifstream::trunc);
		for(int i = 0; i < distr[j]; ++i){
			fout << generate_rnd_number(distr[j] * 3);
			fout << " ";
		}
		fout.close();
	}
	// ![1]
		
	cout << "Files with arrays have been created" << endl;
	
	/*applay each sorting algorithm */
	
	
	
	fin.open("aray_min.txt");
	
	if(fin.is_open()){
		int number;
		int i = 0;
		while(fin >> number){
			array_min[i] = number;
			++i;
		}
	}else{
		cout << "file doesnt exists" << endl;
	}
	
	
	
	/*for(unsigned int i = 0; i < array_min.size(); ++i){
		cout<< array_min[i] << " ";
	}*/
	
	chrono::time_point<chrono::system_clock> start, end;
	
	start = std::chrono::system_clock::now();

	//bubble_Sort(array_min);
	
	end = std::chrono::system_clock::now();
	
	std::chrono::duration<double> elapsed_seconds = end - start;
	
	timer[1] = elapsed_seconds.count();
	
	/*cout<<endl << "sorted array:"<< endl;
	for(unsigned int i = 0; i < array_min.size(); ++i){
		cout<< array_min[i]<< " ";
	}*/
	
	//cout<< endl << elapsed_seconds.count() << endl;
	
	return 0;
}
