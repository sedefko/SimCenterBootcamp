// function to evaluate vector sum
// inputs
// data: pointer to integer array
// size: size of the array
//outputs:
// return
int sumArray(int *data,int size) {
int sum = 0;
for (int i=0; i<size;i++) {
sum+ = data[i];
}
return sum;
}
