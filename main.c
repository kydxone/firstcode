#include <stdio.h>

int eight();

int main() {
    second();
    six();
    seven();
    eight();
    nine();
    ten();
    eleven();
    twelth();
    thirteen();
    fourteen();
    nineteen();
    twenty();
    twenty_one();
    twenty_three();
    return 0;

}
/**
 * 第一题
 * 了解下有哪几种注释
 * D
 */

/**
 * 第二题
 * ASCII码
 * A
 */
int second() {
    char c2 = 'A' + '6' - '3';
    printf("second=%c\n", c2);
    return 0;
}

/**
 * 第三题
 * 运算符要求是整型的，有取模、位运算、自增自减、
 * D
 */

/**
 * 第四题
 * 赋值，char类型只能有一位
 * B
 */

/**
 * 第五题
 * 赋值
 * A
 */

/**
 * 第六题
 * 论++的滞后性，比较大小和打印时都滞后
 * C
 * @return
 */
int six() {
    int a = 5;
    if (a++ > 5)
        printf("six=%d\n", a);
    else
        printf("six=%d\n", a--);
    return 0;
}

/**
 * 第七题
 * B
 * @return
 */
int seven() {

    int a = 1, b = 3, c = 5, d = 4;
    int x = 0;
    if (a < b)
        if (c < d)
            x = 1;
        else if (a < c)
            x = 2;
        else
            x = 3;
    else
        x = 6;
    printf("seven=%d\n", x);
    return x;
}

/**
 * 第八题
 * 缺乏break的时候会继续执行，不会跳出；
 * A
 * @return
 */
int eight() {
    int c = 2;
    switch (c) {
        case 4:
            c++;
        case 2:
            c++;
        case 3:
            c++;
            break;
        case 5:
            c++;
    }
    printf("eight=%d\n", c);
    return c;
}

/**
 * 第九题
 * i%8取模并不会改变i的值
 * A
 * @return
 */
int nine() {
    int i = 26;
    do {
        printf("nine=%d\n", i % 8);
        i = i / 8;
    } while (i != 0);
    return i;
}

/**
 * 第十题
 * if没有花括号，只对第一行有效
 * @return
 */
int ten() {
    int a = 2, b = 1;
    if (a < b)
        a = 3;
    b = 3;
    printf("ten=%d,%d\n", a, b);

    return a;
}

/**
 * 第十一题
 * 0表示假，非0表示真。-3也是真啊
 * @return
 */
int eleven() {
    int x = 3;
    do {
        printf("eleven=%d\n", x -= 2);
    } while (!(--x));
    return x;
}

/**
 * 第十二题
 * 同第十一题
 * @return
 */
int twelth() {
    int x = -1;
    int i = 0;
    do {
        x = x * x;
        printf("twelth=%d\n", i++);
    } while (!x);

}

/**
 * 第十三题
 * B和D乍看都是对的，但是B答案缺一个逗号
 * D
 * @return
 */
int thirteen() {
//    int a[2][]={{1,0,1},{5,2,3}};
    int b[][3] = {{1, 2, 3},
                  {4, 5, 6}};
//    int c[2][4]={{1,2,3,},{4,5},{6}};
    int d[][3] = {{1, 0, 1},
                  {},
                  {1, 1}};
    return 0;
}

/**
 * 第十四题
 * '\0'是判定字符数组结束的标识，表示这串字符到结尾了；
 * 注意：在字符数组中'\0'是占一个位置的！
 * B
 * @return
 */
int fourteen() {
    char c[5] = {'a', 'b', '\0', 'c', '\0'};
    printf("foruteen=%s\n", c);
}

/**
 * 第十五题
 * 没啥可讲的
 * B
 */

/**
 * 第十六题
 * 基本概念题，定义肯定不能嵌套，调用嵌套是可以的
 * B
 */

/**
 * 第十七题
 * C
 */

/**
 * 第十八题
 * B
 */

/**
 * 第十九题
 * B
 */
int nineteen() {
    int i = 1, n = 1;
    for (; i < 3; i++) {
        continue;
        n = n + i;
    }
    printf("nineteen=%d\n", i);
}

/**
 * 第二十题
 * stu是结构体类型名，stutype是结构体变量名。这里面B答案很令人困惑，不过相比之下C答案错得更离谱。
 * C
 *
 */
int twenty() {
    struct stu {
        int a;
        float b;
    } strutype;
}

/**
 * 第二十一题
 * A
 * @return
 */
int twenty_one() {
    struct student {
        int age;
        int num;
    } stu1, *p;
    p = &stu1;
    stu1.age = 10;
    printf("twenty_one:\tstu1=%d", stu1.age);
    printf(",p->age=%d,", p->age);
    printf(",(*p).age=%d\n", (*p).age);
}

/**
 * 第二十二题
 * 指针就是地址
 * A
 */

/**
 * 第二十三题
 * @return
 */
int twenty_three() {
    float *p, m = 3.14;
    printf("%f\t%p\t%p\t",m,p,&p);
    printf("%f",p);
    *p=m;
    p=&m;
}