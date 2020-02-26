//Dustin Daugherty
//cs231
//project abacus
//due february 29

#include <iostream>
#include <algorithm>
using namespace std;
// reads ten integer values (entered by
//the user at the keyboard) into a list, determines the smallest and largest values among
//those numbers, and then prints all the numbers to the screen, followed by the smallest
//and largest values.
void list_min_and_max();
//creates four lists of ten elements each.
//This function should read twenty integer values (entered by the user at the keyboard)
//into the first two ten-element lists. Then, it should add and multiply each of the
//corresponding numbers in the first two lists, saving the sums in the third list and the
//products in the fourth list. Finally, it should print the contents of all four lists to the
//screen.
void list_product_sum();
// main body to call the functions
int main() {
	list_min_and_max();
	list_product_sum();
}
//takes in 10 intergers
void list_min_and_max(){
	cout<<"This is the first function (list_min_and_max) it will take in 10 numbers and determine the highest and lowest. \n\n";
	int array_a[10];
	int i;
	for (i=1; i<=10; i++){
		cout<<"Please enter number "<<i<<" of 10: \n\n";
		cin>>array_a[i];	
	}
	cout <<"The numbers you entered are: \n\n";
	for (int i=1; i<=10; i++){
		cout << array_a[i] << " ";
	}
//determines hight and low number	
	cout<<" \n\n";
		for (int i=1; i<=10; i++){
		if(array_a[0]<array_a[i])
			array_a[0]=array_a[i];
		}
	cout<<"The largest number you entered is: " <<array_a[0]<< " \n\n";
	for (int i = 10; i>=1; i--){
		if(array_a[10]>array_a[i])
			array_a[10]=array_a[i];
		}
	cout<<"The smallest number you entered is: " <<array_a[10]<< " \n\n";	
}
//takes in 20 integers into 2 arrays
void list_product_sum(){
	cout<<"This is the second function (list_product_sum) it will take in 20 numbers and get the sums and products. \n\n";
	int array_b[10];
	int array_c[10];
	int i;
	for (i=1; i<=10; i++){
		cout<<"Please enter number "<<i<<" of 20: \n\n";
		cin>>array_b[i];	
	}
	for (i=1; i<=10; i++){
		cout<<"Please enter number "<<i+10<<" of 20: \n\n";
		cin>>array_c[i];	
	}
	cout <<"The numbers you entered are: \n\n";
	for (int i=1; i<=10; i++){
		cout<<array_b[i] << " ";
	}
	cout<<" \n\n";
	for (int i=1; i<=10; i++){
		cout << array_c[i] << " ";
	}
	cout<<" \n\n sums: \n\n";
//adds and multiplies the 2 arrays
	int sum[10];
	int product[10];
	for (int i=1; i<=10; i++) {
    	sum[i]=array_b[i]+array_c[i];
   		cout<<sum[i]<< " ";
   	}
   	cout<<" \n\n products: \n\n";
	for (int i=1; i<=10; i++) {
    	product[i]=array_b[i]*array_c[i];
   		cout<<product[i]<< " ";
   	}	
}
