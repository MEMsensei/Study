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
	
	cout<<"����� ����i��� ���� ������ ���i � �� �";
	int A, B;
	cout<<"����i�� �: ";
	cin>> A;
	cout<<"����i�� B: ";
	cin>> B; 
	srand(time(0));
		
	for(int i = 0; i<j; i++){
		int n = min + rand() % (max - min);
		arr [i] = n;
		cout<<arr[i]<<" ";
	}
	return 0;
}
