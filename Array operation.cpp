#include <iostream>
using namespace std;
int add(int arr[]);
int multiplication (int arr[]);
double average(int arr[]);
int maximum (int arr[]) ;
int minimum (int arr[]);
void display (int arr[]);
int main (){
    int arr[5];
cout <<"enter 5 integer "<<endl;
for ( int i=0; i<5; i++){
cin >>arr [i];
}
display(arr);
return 0; }
int add(int arr[]){
int sum = 0;
for ( int i=0; i<5; i++){
sum +=arr[i];
}
return sum ;
}
int multiplication(int arr []){
int mul = 1;
for (int i=0; i<5; i++){
mul *= arr[i];
}
return mul ;
}
double average (int arr []){
return add( arr)/5;
}
int maximum (int arr[]){
int max = arr[0];
for (int i=0; i<5; i++){
if (arr [i] > max ){
max = arr[i];}
}
return max ;
}
int minimum (int arr[]){
int min = arr[0];
for (int i=0; i<5; i++){
    if (arr[i] < min){
        min = arr[i];
    }
}

return min ;
}
void display (int arr[]){
cout << " sum = "<< add(arr) <<endl;
cout << " multiplication = "<< multiplication (arr) <<endl;
cout << " average = "<< average(arr) << endl;
cout << " maximum = "<< maximum (arr) <<endl;
cout << " minimum = "<< minimum (arr) << endl;
}
