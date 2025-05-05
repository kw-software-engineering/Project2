#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

// 전역 변수
struct stat stat1, stat2;
struct tm* time1, * time2;

// 함수 선언
void filestat1(void);         // 파일1의 정보 가져오기
void filestat2(void);         // 파일2의 정보 가져오기
void filetime1(void);         // 파일1의 시간 정보 가져오기
void filetime2(void);         // 파일2의 시간 정보 가져오기
void compare_size(void);      // 파일 크기 비교
void compare_block(void);     // 블록 수 비교
void compare_date(void);      // 수정 날짜(월/일) 비교
void compare_time(void);      // 수정 시간(시/분) 비교

int main(void)
{
    filestat1();
    filestat2();

    filetime1();
    filetime2();

    compare_size();
    compare_block();
    compare_date();
    compare_time();

    return 0;
}

char filename1[] = "file1.txt";
char filename2[] = "file2.txt";

void filestat1();
void filestat2();
void filetime1();
void filetime2();
void sizecmp();
void blockcmp();
void datecmp();
void timecmp();

int main(){
    filestat1();
    filestat2();
    filetime1();
    filetime2();
    sizecmp();
    blockcmp();
    datecmp();
    timecmp();
}

//파일 1의 정보를 가져오는 함수 작성
void filestat1(){
    
}

//파일 2의 정보를 가져오는 함수 작성
void filestat2(){

}

//파일 1의 시간 정보를 가져오는 함수 작성
void filetime1(){
   
}

//파일 2의 시간 정보를 가져오는 함수 작성
void filetime2(){
    git push origin main
}
void filestat2(){
    
}

//파일 1의 시간 정보를 가져오는 함수 작성
void filetime1(){
    
}

//파일 2의 시간 정보를 가져오는 함수 작성
void filetime2(){
    
}

void sizecmp(){
    printf("파일 크기 비교:\n");
    if (stat1.st_size > stat2.st_size)
        printf("%s is bigger.\n", filename1);
    else if (stat1.st_size < stat2.st_size)
        printf("%s is bigger.\n", filename2);
    else
        printf("Size are equal.\n");
}

//두 개의 파일 블락 수를 비교하는 함수 작성
void blockcmp(){
    printf("블록 수 비교:\n");
    if (stat1.st_blocks > stat2.st_blocks)
        printf("%s uses more blocks.\n", filename1);
    else if (stat1.st_blocks < stat2.st_blocks)
        printf("%s uses more blocks.\n", filename2);
    else
        printf("Blocks are same.\n");
}

//두 개의 파일 수정 날짜를 비교하는 함수 작성
void datecmp(){
    
}

//두 개의 파일 수정 시간을 비교하는 함수 작성
void compare_time(void)
{
    
}

void timecmp(){
    
}
