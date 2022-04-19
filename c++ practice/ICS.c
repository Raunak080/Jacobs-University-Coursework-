#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>




int main(int argc, char *argv[]){
    for (int i=1;i<argc; i++){
        int a = atoi(argv[i]);
        printf("%d/n",a);
    }
    return 0;
}