/*#include<stdio.h>
void add(int a, int b){
    printf("%d\n",a+b);
}//function definition
int main(){
    add(5,6);
    add(10,20);
    add(5,10);
}// function call
//return is a datatype of stored value
*/

#include <stdio.h>

int add(){
    int a=6,b=7;
    return a+b;
}
int main(){
    printf("%d",add());
}