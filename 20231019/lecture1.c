#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number_of_student = 0;
    int *student_score;
    int total_score = 0;
    float total_score_avg = 0;
    for (;;)
    {
        printf("학생수 입력: ");
        scanf("%d", &number_of_student);
        if (number_of_student > 0)
        {
            break;
        }
        printf("올바르지 않은 입력입니다\n");
    }

    student_score = (int *)malloc(number_of_student * sizeof(int));

    for (int i = 0; i < number_of_student; i++) // 입력
    {
        printf("학생 #%d-%d 성적 입력 :", number_of_student, i + 1);
        scanf("%d", &student_score[i]);
    }
    for (int i = 0; i < number_of_student; i++)
    {
        total_score += student_score[i]; // 총점
    }
    printf("총점 : %d\n", total_score);

    for (int i = 0; i < number_of_student; i++) // 출력
    {
        printf("학생 #%d-%d 성적 : %d \n", number_of_student, i + 1, student_score[i]);
    }

    total_score_avg = total_score / number_of_student;
    printf("평균: %0.1f", total_score_avg); // 평균

    free(student_score);

    return 0;
}