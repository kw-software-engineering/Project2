#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

struct stat stat1, stat2;
struct tm* time1, * time2;

char filename1[] = "text1";
char filename2[] = "text2";

void filestat1();
void filestat2();
void filetime1();
void filetime2();
void sizecmp();
void blockcmp();
void datecmp();
void timecmp();

int main()
{
    filestat1();
    filestat2();
    filetime1();
    filetime2();
    sizecmp();
    blockcmp();
    datecmp();
    timecmp();

    return 0;
}

//파일 1의 정보를 가져오는 함수 작성
void filestat1() {
    if (stat("text1", &stat1) == -1) {
        perror("text1 정보를 가져올 수 없습니다");
        return;
    }
    
}

//파일 2의 정보를 가져오는 함수 작성
void filestat2() {
    if (stat("text2", &stat2) == -1) {
        perror("text2 정보를 가져올 수 없습니다");
        return;
    }

}

//파일 1의 시간 정보를 가져오는 함수 작성
void filetime1(void)
{

    // 수정 시간 정보만 구조체에 저장
    struct tm* tmp = localtime(&stat1.st_mtime);
    time1 = malloc(sizeof(struct tm));
    *time1 = *tmp;


}

//파일 2의 시간 정보를 가져오는 함수 작성
void filetime2(void)
{
    // 수정 시간 정보만 구조체에 저장
    struct tm* tmp = localtime(&stat2.st_mtime);
    time2 = malloc(sizeof(struct tm));
    *time2 = *tmp;
}

//두 개의 파일 크기를 비교하는 함수 작성
void sizecmp() {
    printf("size compare\n");
    if (stat1.st_size > stat2.st_size)
        printf("%s is bigger.\n", filename1);
    else if (stat1.st_size < stat2.st_size)
        printf("%s is bigger.\n", filename2);
    else
        printf("Size are equal.\n");
    
    printf("\n");
}

//두 개의 파일 블락 수를 비교하는 함수 작성
void blockcmp() {
    printf("block compare\n");
    if (stat1.st_blocks > stat2.st_blocks)
        printf("%s uses more blocks.\n", filename1);
    else if (stat1.st_blocks < stat2.st_blocks)
        printf("%s uses more blocks.\n", filename2);
    else
        printf("Size are equal.\n");

    printf("\n");
}

// 두 개의 파일 수정 날짜를 비교하는 함수 작성 (월/일)
void datecmp() {
    printf("date compare\n"); // 함수가 호출되었음을 알림

    // 월을 먼저 비교하고, 같으면 일을 비교합니다.
    if (time1->tm_mon < time2->tm_mon) {
        printf("text1 is early\n"); // 월이 작으면 더 과거 날짜
    }
    else if (time1->tm_mon > time2->tm_mon) {
        printf("text2 is early\n"); // 월이 크면 더 최근 날짜
    }
    else { // 월이 같으면 일 비교
        if (time1->tm_mday < time2->tm_mday) {
            printf("text1 is early\n"); // 일이 작으면 더 과거 날짜
        }
        else if (time1->tm_mday > time2->tm_mday) {
            printf("text2 is early\n"); // 일이 크면 더 최근 날짜
        }
        else { // 일까지 같으면 날짜 동일
            printf("same date\n");
        }
    }
    printf("\n");
}


// 두 개의 파일 수정 시간을 비교하는 함수 작성 (시/분)
void timecmp() {
    printf("time compare\n"); // 함수가 호출되었음을 알림

    // 시간을 먼저 비교하고, 같으면 분을 비교합니다.
    if (time1->tm_hour < time2->tm_hour) {
        printf("text1 is early\n"); // 시간이 작으면 더 과거 시간
    }
    else if (time1->tm_hour > time2->tm_hour) {
        printf("text2 is early\n"); // 시간이 크면 더 최근 시간
    }
    else { // 시간이 같으면 분 비교
        if (time1->tm_min < time2->tm_min) {
            printf("text1 is early\n"); // 분이 작으면 더 과거 시간
        }
        else if (time1->tm_min > time2->tm_min) {
            printf("text2 is early\n"); // 분이 크면 더 최근 시간
        }
        else { // 분까지 같으면 시간 동일
            printf("same time\n");
        }
    }
    printf("\n");
}
