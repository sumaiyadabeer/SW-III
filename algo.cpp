#include <cstdlib>
#include <iostream>

using namespace std;

//member function
void insertion_sort(int arr[], int length);
void print_array(int array[],int size);

int main() {
int i,n;
int array[50];

cout<<"enter the no of element n";
cin>>n;

for(i=0;i<n;i++)
{
cout<<"enter the no of element"<<i+1<<"\n";
cin>>array[i];

}


insertion_sort(array,n);

 return 0;
}//end of main

void insertion_sort(int arr[], int length) {
 int i, j ,tmp;
  print_array(arr,length);
 for (i = 1; i < length; i++) {
 j = i;
 while (j > 0 && arr[j - 1] > arr[j]) {
 tmp = arr[j];
 arr[j] = arr[j - 1];
 arr[j - 1] = tmp;
 j--;
 }//end of while loop
 print_array(arr,length);
 }//end of for loop
 }//end of insertion_sort.

void print_array(int array[], int size){

 cout<< "sorting: ";
 int j;
 for (j=0; j<size;j++)
 for (j=0; j<size;j++)
 cout <<" "<< array[j];
 cout << endl;
 }//end of print_array

