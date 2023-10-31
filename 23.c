#include <stdio.h>
#include <stdlib.h>


int arr (  int i , int array[] ) {
    
    if ( i == 5 ) {
        return 0;
    } else{
        printf("%d" , array[i]);
        return arr( i + 1 , array); 
    }


}

int main (int argc, char *argv[]){

    int array[] = { 1 , 2 , 3 , 4 , 5} ;
    int i = 0;

    int result = arr(i , array);

    

    return 0;
}