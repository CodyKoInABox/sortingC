void insertion(int array[], int length){

    for(int i = 1; i < length; i++){
        
        int pivot = array[i];
        int j = i - i;

        while(j >= 0 && array[j] > pivot){

            array[j + i] = array[j];
            j--;
        }
        
        array[j+1] = pivot;
    }
}