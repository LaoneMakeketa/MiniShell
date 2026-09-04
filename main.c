 #include <stdio.h>
 #include <stdlib.h>

void *safe_malloc(size_t size){
    void* ptr = malloc(size);
    if (ptr == NULL){
        printf("Memory allocation failed.");
        exit(1);
    }else{
        return ptr;
    }
}

int main(){
    printf("Shell starting...");
    return 0;
}