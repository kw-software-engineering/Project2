#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>
#include <string.h>

struct stat stat1, stat2;
struct tm *time1, *time2;

void filestat1();
void filestat2();
void filetime1();
void filetime2();
void sizecmp();
void blockcmp();
void datecmp();
void timecmp();

int main(){
    char command[100];

    while (1) {

        scanf("%s", command);

        if (strcmp(command, "filestat1") == 0) {
            filestat1();
        } else if (strcmp(command, "filestat2") == 0) {
            filestat2();
        } else if (strcmp(command, "filetime1") == 0) {
            filetime1();
        } else if (strcmp(command, "filetime2") == 0) {
            filetime2();
        } else if (strcmp(command, "sizecmp") == 0) {
            sizecmp();
        } else if (strcmp(command, "blockcmp") == 0) {
            blockcmp();
        } else if (strcmp(command, "datecmp") == 0) {
            datecmp();
        } else if (strcmp(command, "timecmp") == 0) {
            timecmp();
        } else if (strcmp(command, "exit") == 0) {
            printf("EXIT\n");
            break;
        } else {
            printf("Unknown command\n");
        }
    }

    return 0;
}

//파일 1의 정보를 가져오는 함수 작성
void filestat1(){
    if (stat("text1", &stat1) == -1) {
        perror("text1 정보를 가져올 수 없습니다");
        return;
    }

    // 수정 시간
    time1 = localtime(&stat1.st_mtime);

    printf("=== 파일 1 정보 (file1.txt) ===\n");
    printf("크기: %ld bytes\n", stat1.st_size);
    printf("최근 접근 시간: %s", ctime(&stat1.st_atime));
    printf("최근 수정 시간: %s", ctime(&stat1.st_mtime));
    printf("i-node 변경 시간: %s", ctime(&stat1.st_ctime));
    printf("소유자 UID: %d\n", stat1.st_uid);
    printf("소유 그룹 GID: %d\n", stat1.st_gid);
    printf("권한 (8진수): %o\n", stat1.st_mode & 0777);
    printf("하드 링크 수: %ld\n", stat1.st_nlink);

    if (S_ISREG(stat1.st_mode))
        printf("파일 타입: 일반 파일\n");
    else if (S_ISDIR(stat1.st_mode))
        printf("파일 타입: 디렉토리\n");
    else if (S_ISLNK(stat1.st_mode))
        printf("파일 타입: 심볼릭 링크\n");
    else
        printf("파일 타입: 기타\n");

    printf("블록 크기 (I/O 최적): %ld bytes\n", stat1.st_blksize);
    printf("할당된 블록 수: %ld (총 %ld bytes)\n\n", stat1.st_blocks, stat1.st_blocks * 512L);

}

//파일 2의 정보를 가져오는 함수 작성
void filestat2(){
    if (stat("text2", &stat2) == -1) {
        perror("text2 정보를 가져올 수 없습니다");
        return;
    }

    time2 = localtime(&stat2.st_mtime);

    printf("=== 파일 2 정보 (file2.txt) ===\n");
    printf("크기: %ld bytes\n", stat2.st_size);
    printf("최근 접근 시간: %s", ctime(&stat2.st_atime));
    printf("최근 수정 시간: %s", ctime(&stat2.st_mtime));
    printf("i-node 변경 시간: %s", ctime(&stat2.st_ctime));
    printf("소유자 UID: %d\n", stat2.st_uid);
    printf("소유 그룹 GID: %d\n", stat2.st_gid);
    printf("권한 (8진수): %o\n", stat2.st_mode & 0777);
    printf("하드 링크 수: %ld\n", stat2.st_nlink);

    if (S_ISREG(stat2.st_mode))
        printf("파일 타입: 일반 파일\n");
    else if (S_ISDIR(stat2.st_mode))
        printf("파일 타입: 디렉토리\n");
    else if (S_ISLNK(stat2.st_mode))
        printf("파일 타입: 심볼릭 링크\n");
    else
        printf("파일 타입: 기타\n");

    printf("블록 크기 (I/O 최적): %ld bytes\n", stat2.st_blksize);
    printf("할당된 블록 수: %ld (총 %ld bytes)\n\n", stat2.st_blocks, stat2.st_blocks * 512L);

}

//파일 1의 시간 정보를 가져오는 함수 작성
void filetime1(){
  
}

//파일 2의 시간 정보를 가져오는 함수 작성
void filetime2(){
    
}

//두 개의 파일 크기를 비교하는 함수 작성
void sizecmp(){
    
}

//두 개의 파일 블락 수를 비교하는 함수 작성
void blockcmp(){
    
}

//두 개의 파일 수정 날짜를 비교하는 함수 작성
void datecmp(){
    
}

//두 개의 파일 수정 시간을 비교하는 함수 작성
void timecmp(){
    
}