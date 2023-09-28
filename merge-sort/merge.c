void merge(int leftArray[], int rightArray[], int array[], int length){
    
    int leftLength = length / 2;
    int rightLength = length - leftLength;

    int i = 0; // original array
    int l = 0; // left array
    int r = 0; //right array

    while(l < leftLength && r < rightLength){
        
        if(leftArray[l] < rightArray[r]){

            array[i] = leftArray[l];
            i++;
            l++;

        }else{

            array[i] = rightArray[r];
            i++;
            r++;
        }  
    }

    while(l < leftLength){

        array[i] = leftArray[l];
        i++;
        l++;
    }

    while(r < rightLength){

        array[i] = rightArray[r];
        i++;
        r++;
    }
}


void mergeSort(int array[], int length){

    if(length <= 1){
        return;
    }

    int middle = length / 2;

    int leftArray[middle];
    int rightArray[length - middle];

    int i = 0; // left array
    int j = 0; // right array

    for(i = 0; i < length; i++){

        if(i < middle){

            leftArray[i] = array[i];

        }else{

            rightArray[j] = array[i];
            j++;
        }
    }

    mergeSort(leftArray, middle);
    mergeSort(rightArray, length - middle);
    merge(leftArray, rightArray, array, length);

}