// 2021059352 ������.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
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
    // ��� �⺻ ����

    //int i;
    //float sum = 0.0F;

    //for (i = 0; i < 100; i++)
    //    sum = sum + 0.1F;

    //printf("The sum is %f\n", sum);
    //return 0;
    //���� 2-1

    //int math;
    //int science;
    //int sum;

    //math = 90;
    //science = 100;
    //sum = math + science;
    //printf("Sum of math and science score is %d.\n", sum);
    //return 0;
    //���� 2-2

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
    //���� 2-3

    //float area; double total;
    //area = 0.1234567;
    //printf("Area is %f.\n", area);
    //total = 0.1234567;
    //printf("Total is %lf.\n", total);
    //total = 0.1234567F;
    //printf("Total is %lf.\n", total);
    //return 0;
    //���� 2-4

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
    //printf("sizeof(\'a\'-\'A\') is %d.\n", sizeof('a' - 'A')); // ���ذ� �� �ȵǴ� �κ�

    //sum = num1 + num2;
    //printf("sizeof sum is %d.\n", sizeof(sum));
    //return 0;
    //���� 2-5

    char ch;

    ch = 'a';

    printf("sizeof(ch) is %d.\n", sizeof(ch));
    printf("sizeof('a') is %d.\n", sizeof('a')); //���⵵ �� ���ذ� �Ȱ�

    printf("\'n\' in character format is %c.\n", ch);
    printf("\'n\' in decimal format is %d.\n", ch);

    ch = 'a' + 1;
    printf("\'a\' + 1 in character format is %c.\n", ch);

    ch = 97;
    printf("97 in character format is %c.\n", ch);
    return 0;
    //���� 2-6

    //int num; char ch;

    //num = 128;
    //ch = num;
    //printf("%d %d\n", num, ch);
    //return 0;
    //���� 2-7

  /*0.  double area, circum, diff;

    area = PI * 3.0 * 3.0;
    printf("The area is %lf.\n",area);
    circum = 2.0 * PI * 3.0;
    printf("The circumference is %lf.\n", circum);

    diff = MAX - MIN;
    printf("The difference is %lf.\n", diff);
    printf(ERR_MSG);
    return 0;*/
    //���� 2-8

    //char grade; int sum;

    //grade = 'A';
    //sum = 0x40302010;
    //printf("Grade starts at address %p.\n", &grade);
    //printf("Sum starts as address %p.\n", &sum);
    //return 0;
    //���� 2-9

    //int i, sum;

    //sum = 0x40302010;
    //unsigned char*p = (unsigned char*)&sum;
    //printf("Sum is %x.\n", sum);
    //for (i = 0; i < 4; i++)
    //printf("%p\t%x\n", p + i, p[i]);
    //printf("\n");
    //return 0;
    ////���� 2-10

  /*  int sum, count;

    sum = 0x01020304;
    printf("Sum is %d in decimal.\n", sum);
    printf("%d green %s are on the table.\n", 10, "apples");
    count = printf("Hello.\n");
    printf("printf returns %d.\n", count);
    return 0;*/
    //���� 2-11

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
    //���� 2-12

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
    //���� 2-13

    //unsigned char ch; int num;

    //printf("Enter a character.\n");
    //scanf("%c", &ch);
    //printf("It is %d in decimal.\n", ch);
    //printf("Enter the same character again.\n");
    //scanf("%d", &num);
    //printf("It is %d in decimal.\n", num);
    //return 0;
    //���� 2-14

    /*char ch1, ch2;
    printf("Enter two characters.\n");
    scanf("%c%c", &ch1, &ch2);
    printf("Characters just read are %c and %c.\n", ch1, ch2);
    return 0;*/
    //���� 2-15

        //3�� ����

    //int myAge, yourAge;
    //int herAge = 20; // ��� �����ϸ鼭 ����

    //myAge = herAge + 1;
    //yourAge = 33; // �����Ⱚ ġ��� �������� ���� �ٵ� �� �� �����ϸ� �翬�� �������°� �ƴѰ���

    //printf("myAge = %d\n", myAge);

    //printf("yourAge = %d\n", yourAge);
    //return 0;
    // 3-1

    //int salary, bonus, total;

    //salary = 400;
    //bonus = 20;

    //total = salary + bonus; // total �����Ⱚ  Ż�� 

    //printf("total = %d\n", total);

    //bonus = salary = 40; // ���չ��� ���������� ��������
    //printf("bonus = %d, slalry = %d\n", bonus, salary);
    //return 0;
    //3-2

    //int a = 10, b = 3;
    //double p = 10.0, q = 3.0;

    //printf("10 + 3 = %d\n", a + b);
    //printf("10 - 3 = %d\n", a - b);
    //printf("10 * 3 = %d\n", a * b);
    //printf("10 / 3 = %d\n", a / b); // �������� ������ ���� �� ã��
    //printf("10 %% 3 = %d\n", a % b); // ������

    //printf("10.0 + 3.0 = %d\n", p + q);
    //printf("10.0 - 3.0 = %d\n", p - q);
    //printf("10.0 * 3.0 = %d\n", p * q);
    //printf("10.0 / 3.0 = %d\n", p / q);

    //printf("10 / 3.0 = %d\n", a / q); // int�� double�� �ٲ� ����
    //printf("10.0 / 3 = %d\n", p / b);

    //return 0;
    ////3-4

    //int a, b;
    //a = 8;
    //a += 2;
    //printf("a+=2 ==> %d\n", a += 2);
    //printf("a-=2 ==> %d\n", a -= 2); // ���ϱ⵵ �ǰ� �����⵵ ��

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
    //printf("a=%d, b=%d\n", (1 + a++) + 2, ++b); // ��ǻ�� �������� ���̱� ��
    //
    //return 0;
    //3-7

    //int a = 10, b = 5;
    //double p = 10.0, q = 5.02, r = 10.0000000000000000001; // r�̶� p�� ���� �� �ִ��� �Ǽ��� ���ٰ� ���ϸ� �ȵ�
    //printf("%d\n", a > b);
    //printf("%d\n", a >= b);
    //printf("%d\n", a == b);
    //printf("%d\n", a != b);

    //printf("%d\n", p > q);
    //printf("%d\n", p == r); // p�� r �̶� �����ɷ� ��� ���� �ڸ� �Ʒ� ���󰡼�
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
    //3-9 and or �����ڱ���
}

// ���α׷� ����: <Ctrl+F5> �Ǵ� [�����] > [��������� �ʰ� ����] �޴�
// ���α׷� �����: <F5> Ű �Ǵ� [�����] > [����� ����] �޴�

// ������ ���� ��: 
//   1. [�ַ�� Ž����] â�� ����Ͽ� ������ �߰�/�����մϴ�.
//   2. [�� Ž����] â�� ����Ͽ� �ҽ� ��� �����մϴ�.
//   3. [���] â�� ����Ͽ� ���� ��� �� ��Ÿ �޽����� Ȯ���մϴ�.
//   4. [���� ���] â�� ����Ͽ� ������ ���ϴ�.
//   5. [������Ʈ] > [�� �׸� �߰�]�� �̵��Ͽ� �� �ڵ� ������ ����ų�, [������Ʈ] > [���� �׸� �߰�]�� �̵��Ͽ� ���� �ڵ� ������ ������Ʈ�� �߰��մϴ�.
//   6. ���߿� �� ������Ʈ�� �ٽ� ������ [����] > [����] > [������Ʈ]�� �̵��ϰ� .sln ������ �����մϴ�.
