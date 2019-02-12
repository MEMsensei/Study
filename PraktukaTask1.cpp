#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>

using namespace std;

int main()
{	
	setlocale(LC_CTYPE, "ukr");
	
	cout<<"Enter count of elemets";
	int j;
	cin>> j;
	int arr[j];
	
	srand(time(NULL));
	
	cout<<"Зараз потрiбно буде ввести межi А та В";
	int A, B;
	cout<<"Введiть А: ";
	cin>> A;
	cout<<"Введiть B: ";
	cin>> B; 
	srand(time(0));
		
	for(int i = 0; i<j; i++){
		int n = min + rand() % (max - min);
		arr [i] = n;
		cout<<arr[i]<<" ";
	}
	return 0;
}
