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
	
	cout<<"���������� ����� � ������ A �� �"<<endl;
	
	int A[50];
	
	for(int i = 0; i<j; i++){
		arr [i] = A + rand() % (A - B);
		cout<<arr[i]<<" ";
	}
	
	cout<<"\n\n"<<"����� ����....... ��������"<<endl;
	 
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
	cout<<"ʳ������ ��������� ����� � ������  = "<< n << endl;
	
	return 0;
}
