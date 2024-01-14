void insertion(int array[], int length){

    for(int i = 1; i < length; i++){
        
        int pivot = array[i];
        int j = i - 1;

        while(j >= 0 && array[j] > pivot){

            array[j + 1] = array[j];
            j--;
        }
        
        array[j+1] = pivot;
    }
}
