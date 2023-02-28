#include <stdio.h>

void swapGood(int *arrEl1, int *arrEl2){
    int temp = *arrEl1;
    *arrEl1 = *arrEl2;
    *arrEl2 = temp;
}

void bubblesort(int array[], int arrSize){
    for (int i = 0; i < arrSize - 1; i++)
    {
        for (int j = 0; j < arrSize - i - 1; j++)
        {
            if (array[j] > array[j+1])
            {
                swapGood(&array[j], &array[j+1]);
            }
            
        }
        
    }
    
}


int main() {
    int arrayToSort[] = {1,3,2,6,7,4};
    int sizeArr = sizeof(arrayToSort) / sizeof(arrayToSort[0]);
    bubblesort(arrayToSort, sizeArr);
    
    for (int i = 0; i < sizeArr; i++)
    {
        printf("%d",arrayToSort[i]);
    }

    return 0;
    

}