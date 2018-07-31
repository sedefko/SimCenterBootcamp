#include <stdio.h>
#include <stdlib.h>
// Modified Recursion 

//Function of sum
float sumArray(float *data,int size) {
float sum = 0;
for (int i=0; i<size ; i++) {
sum += data[i];
}
return sum;
 }

//function of repeating numbers
int a(float n);
float printRepeating(float *data,int size) {
	int i, j;
	printf("Repeating numbers are");
	for (int i=0; i<size ; i++);
	    for (int j=i+1; j<size; j++);
	    if (data[i] == data[j]);
	printf("%.2f", data[i]);  
}


	int main(int argc, char **argv) {
	int arrsize=argc-1;

	float printRepeating(data, arrsize);
	getchar();
 	return 0;
}

//int a(float n);

 //int main (int argc, char **argv) {
//	int size=argc-1;
//	float *data=(float*)malloc(size*sizeof(float));
//	for (int i=0; i<size;i++) {
//	data [i] = atof(argv[i+1]);
//	}
//float sum=sumArray(data,size);
//printf("Sum is %.4f\n",sum);

//}
