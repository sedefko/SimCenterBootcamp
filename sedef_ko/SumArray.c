#include <stdio.h>

int sumArray(int *data,int size) {
int sum = 0;
for (int i=0; i<size ; i++) {
sum += data[i];
}
return sum;
 }

int main (int argc, const char **argv) {
int intArray[6] = {1,2,3,4,5,6};
int sum = sumArray(intArray,6);
printf("sum is %d \n",sum);
return (0);
}


