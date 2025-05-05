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
//파일 1의 정보를 가져오는 함수 작성
void filestat1(void)
{
    
}

//파일 2의 정보를 가져오는 함수 작성
void filestat2(void)
{

}

//파일 1의 시간 정보를 가져오는 함수 작성
void filetime1(void)
{
    // stat 함수로 파일 정보 가져오기
    if (stat("text1", &stat1) == -1) {
        perror("text1 Error");  // 예외처리
        return;
    }

    // 수정 시간 정보만 구조체에 저장
    time1 = localtime(&stat1.st_mtime);
}

//파일 2의 시간 정보를 가져오는 함수 작성
void filetime2(void)
{
    if (stat("text2", &stat2) == -1) {
        perror("text2 Error");  //예외처리
        return;
    }
    // 수정 시간 정보만 구조체에 저장
    time2 = localtime(&stat2.st_mtime);
}

//두 개의 파일 크기를 비교하는 함수 작성
void compare_size(void)
{
    
}

//두 개의 파일 블락 수를 비교하는 함수 작성
void compare_block(void)
{
    
}

//두 개의 파일 수정날짜를 비교하는 함수 작성
void compare_date(void)
{
    
}

//두 개의 파일 수정 시간을 비교하는 함수 작성
void compare_time(void)
{
    
}
