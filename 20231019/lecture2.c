#include <stdio.h>
#include <stdlib.h>

struct student
{
    int stduent_number;
    char name[10];
    int score;
};
int main(void)
{
    int number_of_student = 0;
    int total_score = 0;
    float total_score_avg = 0;
    struct student *s;

    for (;;)
    {
        printf("학생수 입력: ");
        scanf("%d", &number_of_student);
        if (number_of_student > 0)
        {
            break;
        }
        printf("올바르지 않은 입력입니다.\n");
    }

    s = (struct student *)malloc(number_of_student * sizeof(struct student));

    for (int i = 0; i < number_of_student; i++)
    {
        printf("학생 # %d-%d 학번 입력 :", number_of_student, i + 1); // 입력
        scanf("%d", &(s[i].stduent_number));
        printf("학생 # %d-%d 이름 입력 :", number_of_student, i + 1); // 입력
        scanf("%s", &(s[i].name));
        printf("학생 # %d-%d 성적 입력 :", number_of_student, i + 1); // 입력
        scanf("%d", &(s[i].score));
    }
    for (int i = 0; i < number_of_student; i++)
    {

        total_score += s[i].score; // 총점
    }

    printf("총점 : %d\n", total_score);

    for (int i = 0; i < number_of_student; i++) // 출력
    {
        printf("학생 # %d-%d 학번 : %d\n", number_of_student, i + 1, s[i].stduent_number);
        printf("학생 # %d-%d 이름 : %s\n", number_of_student, i + 1, s[i].name);
        printf("학생 # %d-%d 성적 : %d\n", number_of_student, i + 1, s[i].score);
    }

    total_score_avg = total_score / number_of_student;
    printf("평균: %0.1f", total_score_avg); // 평균

    free(s);
    return 0;
}