void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int array[], int start, int end){

    int pivot = array[end];

    int i = start - 1;
    
    for(int j = start; j <= end - 1; j++){

        if(array[j] < pivot){
            i++;
            swap(&array[i], &array[j]);
        }
    }

    i++;

    swap(&array[i], &array[end]);

    return i;
}

// start = first index of array
// end = last index of array
void quick(int array[], int start, int end){


    if(end <= start){
        return;
    }

    int pivot = partition(array, start, end);

    quick(array, start, pivot - 1);
    quick(array, pivot + 1, end);

}