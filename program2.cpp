//swap using call by refernce
#include<iostream>  
using namespace std;    
void swap(int *x, int *y)  
{  
 int swap;  
 swap=*x;  
 *x=*y;  
 *y=swap;  
}  
int main()   
{    
 int a=20, b=50;    
 swap(&a, &b);  // passing refernce to function  
 cout<<"Value of a is: "<<x<<endl;  
 cout<<"Value of b is: "<<y<<endl;  
 return 0;  
}    
/*OUTPUT:
Value of x is: 50
Value of y is: 20
*/
