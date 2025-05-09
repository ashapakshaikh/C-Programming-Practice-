//W.A.F named "PrintNumbers" that points first 10 integers.
// Call the function from main()
#include<stdio.h>
#include<stdlib.h>

void PrintNumbers();

int main(){  
    PrintNumbers();
    return 0;
}
void PrintNumbers(){
    int i=1;
    for(i=1;i<=10;i++){
        printf("%d\n",i);
    }
}