#include <stdio.h>
#include <stdlib.h>
 
float sumArray(float *data,int size) {
float sum = 0;
for (int i=0; i<size ; i++) {
sum += data[i];
}
return sum;
 }

int a(float n);

 int main (int argc, char **argv) {
	int size=argc-1;
	float *data=(float*)malloc(size*sizeof(float));
	for (int i=0; i<size;i++) {
	data [i] = atof(argv[i+1]);
	}
float sum=sumArray(data,size);
printf("Sum is %.4f\n",sum);

}



