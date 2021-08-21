#include <stdio.h>          // solution in c with header stdio.h

//updatefunction of return type void
void update(int *a,int *b) {
    //storing valueat address of pointer a in temp
    int temp = *a;

    //updating  value at a with sum of value at a and value at b 
    *a =*a + *b;

    //using if statements to get absolute value for updating b same as a but with subtracted value
    if (temp>>*b){
        *b=temp - *b;
    }
    else {
        *b=*b - temp;
    }
    // Complete this function    
}
//main function
int main() {            
    //decalring two variables
    int a, b;

    //storing their addresses in two pointers respectively
    int *pa = &a, *pb = &b;

    //taking input for two variables
    scanf("%d %d", &a, &b);

    //calling update function which is call by reference 
    update(&a, &b);

    //printing updated values
    printf("%d\n%d", a, b);

    return 0;
}
