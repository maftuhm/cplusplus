#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int i , j, n;

void input(float array[]){

	for(i = 0; i < n; i++){
		cout << " Masukkan data ke-" << i+1 << " : ";
		cin >> array[i];
	}
}

void tampil(float array[]){

	for (i = 0; i < n; i++){
		cout << array[i];
		if(i == n-1){
			cout << ".";
		}else{
			cout << ", ";
		}
	}
}

//void insertion_sort(float array[]){
//	int temp, lok;
//	for(i = 0; i < n; i++){
//		if(array[i] < array[i-1]){
//			temp = array[i];
//			lok = i;
//		
//			while(lok > 0 && array[lok-1] > temp){
//
//				array[lok] = array[lok-1];
//				lok--;
//			}
//			array[lok] = temp;
//		}
//	}
//}
void insertion_sort(float array[]){
   int temp, lok;
   for(i = 0; i < n; i++){
      if(array[i] < array[i-1]){
         temp = array[i];
         lok = i;
         while(lok > 0 && array[lok-1] > temp){
            array[lok] = array[lok-1];
            lok--;
          }
          array[lok] = temp;
       }
    }
}
void selection_sort(float array[]){
	int temp, k;
	for(i = 0; i < n-1; i++){
		k = i;
		for(j = i+1; j < n; j++){

			if(array[k] > array[j]){
				k = j;
			}
		}
		temp = array[i];
		array[i] = array[k];
		array[k] = temp;
	}
}

void buble_sort(float array[]){
	int temp;

	for(i = 0; i < n-1; i++){
		for(j = 1; j < n; j++){
					
			if(array[j-1] > array[j]){
				temp = array[j-1];
				array[j-1] = array[j];
				array[j] = temp;
			}		
		}
	}
}

// Tampilan Proses Sorting
//void proses_insertion_sort(float array[]){
//	int temp;
//
//	for(i = 0; i < n-1; i++){
//		int k;
//		cout << "\n\ni = " << i;
//		for(j = i+1; j < n; j++){
//					
//			if(array[i] > array[j]){
//				temp = array[i];
//				array[i] = array[j];
//				array[j] = temp;
//			}
//		
//			cout << "\nj = " << j << " : ";
//			for(k = 0; k < n; k++){	
//				cout << array[k];
//				if(k == n-1){
//					cout << ".";
//				}else{
//					cout << ", ";
//				}
//			}	
//		}
//	}
//}
void proses_insertion_sort(float array[]){
   int temp, lok;
   int k;
   for(i = 0; i < n; i++){
		cout << "\n\ni = " << i << " : ";
		if(array[i] < array[i-1]){
        	temp = array[i];
        	lok = i;
        	while(lok > 0 && array[lok-1] > temp){
            	array[lok] = array[lok-1];
            	lok--;
        	}
        	array[lok] = temp;
    	}
		for(k = 0; k < n; k++){	
			cout << array[k];
			if(k == n-1){
				cout << ".";
			}else{
				cout << ", ";
			}
		}
    }
}
void proses_selection_sort(float array[]){
	int temp;
	int k, l;
	for(i = 0; i < n-1; i++){
		k = i;
		cout << "\n\ni = " << i;
		for(j = i+1; j < n; j++){

			if(array[j] < array[k]){
				k = j;
			}	
		}
			cout << "\nj = " << j << " : ";
			for(l = 0; l < n; l++){	
				cout << array[l];
				if(l == n-1){
					cout << ".";
				}else{
					cout << ", ";
				}
			}
				temp = array[i];
				array[i] = array[k];
				array[k] = temp;
	}
}
void proses_buble_sort(float array[]){
	int temp;

	for(i = 0; i < n-1; i++){
		int k;
		cout << "\n\ni = " << i;
		for(j = 1; j < n; j++){
					
			if(array[j-1] > array[j]){
				temp = array[j-1];
				array[j-1] = array[j];
				array[j] = temp;
			}
		
			cout << "\nj = " << j << " : ";
			for(k = 0; k < n; k++){	
				cout << array[k];
				if(k == n-1){
					cout << ".";
				}else{
					cout << ", ";
				}
			}	
		}
	}
}

main(){
	int jumlah;
//	cout << " Masukkan jumlah data : ";
//	cin >> jumlah;
	n = 6;
	float data[n] = {5, 2, 4, 6, 1, 3};

//	input(data);
	cout << " Data sebelum di sorting : ";
	tampil(data);
	proses_insertion_sort(data);
	cout << "\n Data sesudah di sorting : ";
	tampil(data);
}
