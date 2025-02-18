/*
	작성일: 2025.02.18
	작성자: 김현우
	주제: 변수에 대한 이해
*/


/*
	변수
	(변수) 선언
	(데이터형) (변수의 이름); 변수의 이름 데이터형의 성질을 갖는다.

	(변수) 초기화 : 변수에 처음으로 값을 대입하는 것

	주의해야 할 점

	변수를 사용하려면 선언을 해야 한다.
	선언 후, 초기화를 해야 한다.
	이미 선언한 변수에 다시 선언할 수 없다.
*/

/*
* 변수의 이름 규칙
* 1. 변수의 시작 이름에 숫자가 들어가면 안 된다.
* 2. 이름에 특수기호가 들어가면 안 된다.
* 3. 언더바, 알파벳, 숫자
* 4. 이름에 공백이 들어가면 안 된다. (Space)
* 5. 키워드는 이름으로 사용할 수 없다. (int 등)
*/
/*
	연산자
	사칙연산: + - x /
	나머지, 몫
	0, 1 bit 연산자
	a > b, a < b, a == b 관계연산자

*/


#include <stdio.h> // 검색은 주로 구글, chat gpt 등

int main()
{						// 그렇다면 int의 성질을 갖는다는 것은 무슨 의미인가? 소수까지 표현하고 싶으면 실수의 성질을 가지도록 한다. (double, float 등)
	int attackPower; // attackPower이름을 갖는 변수가 int의 성질을 갖는다.

	// 무기 공격력 공식 : attackPower = 기본 공격력 + 무기의 레벨 * 성장 계수
	int basicPower = 10;
	int weaponLevel = 100;
	int growthPower = 3;

	attackPower = basicPower + weaponLevel * growthPower;

	float _attackPower; // attackPower이름을 갖는 변수가 float의 성질을 갖는다.
	_attackPower = 10.5;
	//---------------------------------------------------------위 데이터, 아래 눈으로 보이는 내용

	printf("무기의 이름 : %s, 무기의 레벨 : %d, 무기 성공 확률 : %f\n", "롱소드", weaponLevel, 0.8);
	printf("강화가 성공하였습니다. 무기의 공격력이 증가했습니다.\n");
	printf("강화 후 무기의 공격력이 %d이 되었습니다.\n", attackPower);

	printf("\n");
	printf("\n");

	printf("예제 문제1 : 사각형의 넓이를 출력하는 내용을 콘솔창에 출력하기\n");


	int width, height, extent;

	printf("가로의 길이를 입력해주세요\n");
	scanf_s("%d", &width);
	printf("세로의 길이를 입력해주세요\n");
	scanf_s("%d", &height);

	extent = width * height;

	printf("사각형 가로 : %d, 사각형 세로 : %d\n", width, height);
	printf("사각형 넓이 : %d", extent);



	// 예제 문제
	// 사각형의 넓이를 구하는 문제를 만들어 보기

	// 정수형 데이터를 선언, width, height
	// 넓이 = 가로 x 세로

	//사각형의 넓이 구하기 (n)

}