#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int k)
{
	// 입력된 문자열의 길이 계산
	int my_string_length = strlen(my_string);
    // 결과 문자열의 길이 계산
	int answer_length = my_string_length * k;

	// 결과 문자열을 저장할 메모리 동적 할당
	char* answer = (char*)malloc((answer_length + 1));
    // 할당한 동적메모리 초기화
	memset(answer, 0, (answer_length + 1));

	// 입력된 문자열을 k번 반복하여 결과 문자열에 복사
	for (int i = 0; i < k; i++)
    {
		strcat(answer, my_string);
	}

	return answer;
}