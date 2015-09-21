#include <stdio.h>

int convert(double* grades, double* scores, int size);

int main()
{
    double scores[5];
    double grades[5] = { 4.0, 4.3, 3.8, 3.0, 4.0 };
    int i;

    convert(grades, scores, 5);
    printf("변환 전\t변환 후\n");
    for (i = 0; i < 5; i++) {
        printf("%lf\t%lf\n", grades[i], scores[i]);
    }
}

int convert(double* grades, double* scores, int size)
{
    int i;
    for (i = 0; i < size; i++) {
        scores[i] = grades[i] * (100 / 4.3);
    }
}

// 11-5
// 학생 평점이 4.3점이 만점이라고 가정,
// 배열 grades[]에 학생 10명의 학점 저장되어 있고,
// 이걸 100점 만점으로 변환해서 배열 scores[]에 저장하는 함수 작성, 테스트
// 비례식 사용해서 계산 100:4.3 == x:y