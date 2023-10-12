#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    double x = 0;
    double y = 0;
    int total_attempts = 1000000000; // 10억번 실행
    int update_frequency = total_attempts / 100;  //업데이트 빈도

    int total_inside_circle = 0;
    srand(time(NULL));

    for (int i = 1; i <= total_attempts; i++) {
        x = (double)rand() / (double)RAND_MAX;
        y = (double)rand() / (double)RAND_MAX;

        if ((x * x) + (y * y) <= 1) { // 원방정식 검사
            total_inside_circle++;
        }

        // 진행 상황 업데이트
        if (i % update_frequency == 0) {
            int progress = (double)i / total_attempts * 100;
            double pi = ((double)total_inside_circle / i) * 4;
            printf("%d%% 진행.. 원주율 : %.6lf\n", progress, pi);
        }
    }

    double pi = ((double)total_inside_circle / total_attempts) * 4;
    printf("원주율 : %.6lf\n",  pi);

    return 0;
}
