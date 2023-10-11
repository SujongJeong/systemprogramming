// 2021059352 정수종.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <float.h>
#define PI 3.14
#define ERR_MSG "Error has occurred while opening file.\n"
#define MAX 32.0
#define MIN 10.0
int main() {
    //printf("hello, world.\n");
    //return 0;
    // 출력 기본 예제

    //int i;
    //float sum = 0.0F;

    //for (i = 0; i < 100; i++)
    //    sum = sum + 0.1F;

    //printf("The sum is %f\n", sum);
    //return 0;
    //예제 2-1

    //int math;
    //int science;
    //int sum;

    //math = 90;
    //science = 100;
    //sum = math + science;
    //printf("Sum of math and science score is %d.\n", sum);
    //return 0;
    //예제 2-2

   /* printf("sizeof(char) is %d.\n", sizeof(char));
    printf("sizeof(short) is %d.\n", sizeof(short));
    printf("sizeof(int) is %d.\n", sizeof(int));
    printf("sizeof(long) is %d.\n", sizeof(long));
    printf("sizeof(long long) is %d.\n", sizeof(long long));
    printf("sizeof(float) is %d.\n", sizeof(float));
    printf("sizeof(double) is %d.\n", sizeof(double));
    printf("sizeof(long double) is %d.\n", sizeof(long double));
    printf("int ranges from %d to %d.\n", INT_MIN, INT_MAX);
    printf("double ranges from %e to %e.\n", DBL_MIN, DBL_MAX);
    return 0;*/
    //예제 2-3

    //float area; double total;
    //area = 0.1234567;
    //printf("Area is %f.\n", area);
    //total = 0.1234567;
    //printf("Total is %lf.\n", total);
    //total = 0.1234567F;
    //printf("Total is %lf.\n", total);
    //return 0;
    //예제 2-4

    //short width; int height; float area;
    //double total; int length; short num1, num2, sum;
    //width = (short)10;
    //height = 5;
    //area = 100.0F;

    //total = area + width * height;
    //printf("Total is %lf.\n", total);

    //length = 3.14;
    //printf("Length is %d.\n", length);

    //length = (int)3.14;
    //printf("Length is %d.\n", length);
    //num1 = (short)10; num2 = (short)20;
    //printf("sizeof(num1+num2) is %d.\n", sizeof(num1 + num2));
    //printf("sizeof(\'a\'-\'A\') is %d.\n", sizeof('a' - 'A')); // 이해가 잘 안되는 부분

    //sum = num1 + num2;
    //printf("sizeof sum is %d.\n", sizeof(sum));
    //return 0;
    //예제 2-5

    char ch;

    ch = 'a';

    printf("sizeof(ch) is %d.\n", sizeof(ch));
    printf("sizeof('a') is %d.\n", sizeof('a')); //여기도 좀 이해가 안감

    printf("\'n\' in character format is %c.\n", ch);
    printf("\'n\' in decimal format is %d.\n", ch);

    ch = 'a' + 1;
    printf("\'a\' + 1 in character format is %c.\n", ch);

    ch = 97;
    printf("97 in character format is %c.\n", ch);
    return 0;
    //예제 2-6

    //int num; char ch;

    //num = 128;
    //ch = num;
    //printf("%d %d\n", num, ch);
    //return 0;
    //예제 2-7

  /*0.  double area, circum, diff;

    area = PI * 3.0 * 3.0;
    printf("The area is %lf.\n",area);
    circum = 2.0 * PI * 3.0;
    printf("The circumference is %lf.\n", circum);

    diff = MAX - MIN;
    printf("The difference is %lf.\n", diff);
    printf(ERR_MSG);
    return 0;*/
    //예제 2-8

    //char grade; int sum;

    //grade = 'A';
    //sum = 0x40302010;
    //printf("Grade starts at address %p.\n", &grade);
    //printf("Sum starts as address %p.\n", &sum);
    //return 0;
    //예제 2-9

    //int i, sum;

    //sum = 0x40302010;
    //unsigned char*p = (unsigned char*)&sum;
    //printf("Sum is %x.\n", sum);
    //for (i = 0; i < 4; i++)
    //printf("%p\t%x\n", p + i, p[i]);
    //printf("\n");
    //return 0;
    ////예제 2-10

  /*  int sum, count;

    sum = 0x01020304;
    printf("Sum is %d in decimal.\n", sum);
    printf("%d green %s are on the table.\n", 10, "apples");
    count = printf("Hello.\n");
    printf("printf returns %d.\n", count);
    return 0;*/
    //예제 2-11

    /*float f; double d; int i;

    f = 0.123456789123456789F;
    d = 0.123456789123456789;
    printf("float f is %f.\n", f);
    printf("double d is %lf.\n", d);
    printf("float in .20f is %.20f.\n", f);
    printf("double in .20lf is %.20lf.\n", d);
    printf("double in 25.4lf is\n%25.4lf.\n", d);
    printf("double in .20lf is\n-25.4lf\n", d);
    i = 365;
    printf("int in -8d is %-8d.\n", i);
    printf("Exponent form of 123456.78 is %e.\n", 123456.78);
    return 0;*/
    //예제 2-12

    //int age, count; double weight, height;

    //printf("Enter age.\n");
    //scanf("%d", &age);
    //printf("Age: %d.\n", age);
    //printf("Enter weight and height.\n");
    //scanf("%lf%lf", &weight, &height);
    //printf("Weight: %lf, Height: %lf.\n", weight, height);
    //printf("Enter weight and height again.\n");
    //count = scanf("%lf%lf", &weight, &height);
    //printf("scanf returns %d.\n", count);
    //return 0;
    //예제 2-13

    //unsigned char ch; int num;

    //printf("Enter a character.\n");
    //scanf("%c", &ch);
    //printf("It is %d in decimal.\n", ch);
    //printf("Enter the same character again.\n");
    //scanf("%d", &num);
    //printf("It is %d in decimal.\n", num);
    //return 0;
    //예제 2-14

    /*char ch1, ch2;
    printf("Enter two characters.\n");
    scanf("%c%c", &ch1, &ch2);
    printf("Characters just read are %c and %c.\n", ch1, ch2);
    return 0;*/
    //예제 2-15

        //3장 시작

    //int myAge, yourAge;
    //int herAge = 20; // 얘는 선언하면서 대입

    //myAge = herAge + 1;
    //yourAge = 33; // 쓰레기값 치우기 지역변수 공부 근데 이 줄 없이하면 당연히 오류나는거 아닌가요

    //printf("myAge = %d\n", myAge);

    //printf("yourAge = %d\n", yourAge);
    //return 0;
    // 3-1

    //int salary, bonus, total;

    //salary = 400;
    //bonus = 20;

    //total = salary + bonus; // total 쓰레기값  탈출 

    //printf("total = %d\n", total);

    //bonus = salary = 40; // 결합방향 오른족에서 왼쪽으로
    //printf("bonus = %d, slalry = %d\n", bonus, salary);
    //return 0;
    //3-2

    //int a = 10, b = 3;
    //double p = 10.0, q = 3.0;

    //printf("10 + 3 = %d\n", a + b);
    //printf("10 - 3 = %d\n", a - b);
    //printf("10 * 3 = %d\n", a * b);
    //printf("10 / 3 = %d\n", a / b); // 정수끼리 나누면 정수 몫만 찾음
    //printf("10 %% 3 = %d\n", a % b); // 나머지

    //printf("10.0 + 3.0 = %d\n", p + q);
    //printf("10.0 - 3.0 = %d\n", p - q);
    //printf("10.0 * 3.0 = %d\n", p * q);
    //printf("10.0 / 3.0 = %d\n", p / q);

    //printf("10 / 3.0 = %d\n", a / q); // int가 double로 바뀌어서 연산
    //printf("10.0 / 3 = %d\n", p / b);

    //return 0;
    ////3-4

    //int a, b;
    //a = 8;
    //a += 2;
    //printf("a+=2 ==> %d\n", a += 2);
    //printf("a-=2 ==> %d\n", a -= 2); // 곱하기도 되고 나누기도 됨

    //return 0;
    //3-6

    //int a, b;
    //a = 0;
    //a++; // a==1
    //printf("a=%d\n", a);

    //b = a++; // b=1 a=2
    //printf("a=%d, b=%d\n", a, b);
    //
    //a = 0;
    //++a;

    //b = ++a;
    //printf("a=%d, b=%d\n", a, b);

    //a = b = 0;
    //printf("a=%d, b=%d\n", (1 + a++) + 2, ++b); // 컴퓨터 좋아져서 굳이긴 함
    //
    //return 0;
    //3-7

    //int a = 10, b = 5;
    //double p = 10.0, q = 5.02, r = 10.0000000000000000001; // r이랑 p랑 같을 수 있다지 실수는 같다고 비교하면 안됨
    //printf("%d\n", a > b);
    //printf("%d\n", a >= b);
    //printf("%d\n", a == b);
    //printf("%d\n", a != b);

    //printf("%d\n", p > q);
    //printf("%d\n", p == r); // p랑 r 이랑 같은걸로 취급 됐음 자리 아래 날라가서
    //return 0;
    //3-8

    //int a = 4, b = 3, c = 2, d = 1;

/*    printf("%d \n", (a > b) && (c > d));
    printf("%d \n", (a < b) || (c > d));
    printf("%d \n", (a < b) && (c > d));
    printf("%d \n", (a > b) || (c > d));
    printf("%d \n", (a<b || c>d) && (a == b && c >= d));

    printf("%d \n", !(a > b));
    printf("%d \n", !d);
    printf("%d \n", !a);
    return 0*/;
    //3-9 and or 연산자까지
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
