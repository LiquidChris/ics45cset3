void reverse(int* first, int* last){
    if (first == last){ // when there is an odd number of ints in the array
    }
    else if (first+1 == last){ // when there is an even number of ints in the array
        int fVal = *first;
        int lVal = *last;
        *first = lVal;
        *last = fVal;
    }
    else{
        int fVal = *first;
        int lVal = *last;
        *first = lVal;
        *last = fVal;
        reverse(first+1, last-1);
    }
}