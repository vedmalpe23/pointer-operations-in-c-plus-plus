#include <iostream>
using namespace std;
void swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main() {
    int a=30,b=60;
    swap(a,b);
    cout<<a<<endl<<b;
}
/*output:
30
60 */
