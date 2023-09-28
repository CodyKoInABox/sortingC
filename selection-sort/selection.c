void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection(int array[], int length){

    for(int i = 0; i < length-1; i++){

        int min = i;

        for(int j = i+1; j < length; j++){

            if(array[min] > array[j]){
                min = j;
            }
        }

        swap(&array[i], &array[min]);
    }

}