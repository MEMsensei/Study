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
	
	cout<<"Початковий масив з межами A та В"<<endl;
	
	int A[50];
	
	for(int i = 0; i<j; i++){
		arr [i] = A + rand() % (A - B);
		cout<<arr[i]<<" ";
	}
	
	cout<<"\n\n"<<"Масив після....... непарних"<<endl;
	 
	cout<<endl;
	int k = 0;
	for (int i = 0; i < 50; i++){
		if ((A[i] % 2) == 0){
			cout<< A[i] << "   ";
			k = k++;
		}
	}
	cout<<endl<<endl;
	
	int n = 50 - k ;
	cout<<"Кількість вилучених чисел з масиву  = "<< n << endl;
	
	return 0;
}
