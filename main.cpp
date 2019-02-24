#include <iostream>
#include <fstream>
#include <array>

#include "random_number.cpp"

//#include "bubble_sort.cpp"
//#include "select_sort.cpp"
#include "insert_sort.cpp"

#define MIN_SIZE  10
#define MID_SIZE  100
#define MAX_SIZE  1000
	  	


using namespace std;

int main (){
	ofstream fout;
	ifstream fin;
	
	array<string, 3> files {"aray_min.txt", "aray_mid.txt", "aray_max.txt"};
	array<string, 3> algos {"Bubble Sort", "Select Sort", "Insert Sort"};
	array<int, 3> distr {MIN_SIZE, MID_SIZE, MAX_SIZE};
	double timer[3];
	
	/*
	 * create files with random numbers
	*/
	
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
	
	/*
	 * applay each sorting algorithm
	 */
	
	for(unsigned int k = 0; k < files.size(); ++k){
		fin.open(files[k]);
		int arr[distr[k]];
		
		if(fin.is_open()){
			int number;
			int i = 0;
			while(fin >> number){
				arr[i] = number;
				++i;
			}
		}else{
			cout << "file doesnt exists" << endl;
		}
		
		fin.close();
		
		//timer[k] = bubbleSort(arr, distr[k]);
		//timer[k] = selectSort(arr, distr[k]);
		timer[k] = insertSort(arr, distr[k]);
	}
	
	cout << "The duration of sorting the arrays for each algorithm is:" << endl;
	cout << MIN_SIZE << " " << MID_SIZE << " " << MAX_SIZE << endl;
	
	for(int i = 0; i < 3; ++i){
		cout<< timer[i]<< " ";
	}
		
	cout << endl;
	
	return 0;
}
