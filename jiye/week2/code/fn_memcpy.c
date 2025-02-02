#include <stdio.h>

//메모리를 복사하는 함수. src에서 dest로 복사
//인수의 자료형에 상관없이 값을 복사할 수 있다. 
void fn_memcpy(void* dest, void* src, size_t num);

int main(){
    char src[] = "hello memory!";
    char dest[20];

    fn_memcpy(dest, src, sizeof(src));

    printf("%s\n", dest);

}

void fn_memcpy(void* dest, void* src, size_t num){
    char* tmp_dest = dest;  //char형이 1byte이므로 1byte씩 읽기위해 void형 포인터를 char로 받음
    char* tmp_src = src;
    for(int i = 0; i<num; i++){ //(num)byte만큼 복사하기 위해 1byte씩 복사
        *(tmp_dest+i)=*(tmp_src+i);
    }

}

