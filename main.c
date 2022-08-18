#include <stdio.h>
#include <stdlib.h>
//c program to sort an array(bubble sort)
int i,j,min,max,k,f;
void checkminandmaxnumber(){
    int sorted[9];
    //find minimum value
    int numbers[9]={5,16,13,11,1,3,2,7,0};
    for(i=0;i<9;i++){
            min=i;
        for(j=0;j<9;j++){
            if(numbers[j]<numbers[min]){
                min=j;

            }

        }
        //find maximum value
        for(f=0;f<=0;f++){
                max=f;
                for(k=i+1;k<9;k++){
                    if(numbers[max]<numbers[k]){
                        max=k;
                    }
                }
            }
            sorted[i]=numbers[min];
            //remove numbers[min] from the next check
            numbers[min]=numbers[max]+1;
}
         for(i=0;i<9;i++){
        printf("%i\n",sorted[i]);
    }
}
int main()
{
    checkminandmaxnumber();
return 0;
    }





