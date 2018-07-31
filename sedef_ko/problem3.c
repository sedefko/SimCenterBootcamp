#include <stdio.h>
#include <stdlib.h>

//float sumArray(float *data, int size) {
//	float sum=0;
//	for (int i=0; i<size; i++) {
//	sum += data[i];
//	}
//return sum;
//}

float repeatingNumber(float *data, int size) {
	float count=0;
	int i, j;
	for (int i=0; i<size; i++) { 
		for (int j=i+1; j<size; j++) {
		if (data[i] == data[j]) {
	count = data [i]; 
}
}
}
return count++;
}

float a(float n);

int main(int argc, char **argv) {
	int size=argc-1;
	float *data= (float *)malloc(size* sizeof(float));
	for (int i=0; i<size;i++) {
		data[i]=atof(argv[i+1]);
	}
float count=repeatingNumber(data,size);
printf("Repeating Numbers are %.2f\n",count);
}

//float a(float n);
//
//int main(int argc, char **argv) {
//	int size=argc-1;
//	float *data= (float *)malloc(size* sizeof(float));
//	for (int i=0; i<size;i++) {
//		data[i]=atof(argv[i+1]);
//	}
//float sum=sumArray(data,size);
//printf("Sum is %.2f\n",sum);

//}

