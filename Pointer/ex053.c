#include<stdio.h>
main()
{
	int a = 100, b = 200;
	int *p_a, *p_b, *p_w;

	p_a = &a;
	p_b = &b;

	printf("実行前: *p_a=%d *p_b=%d\n", *p_a, *p_b);
	printf("アドレス: p_a=%d p_b=%d\n", p_a, p_b);

	//ポインタ変数が記憶しているアドレスを入れ替える
	p_w = p_a;
	p_a = p_b;
	p_b = p_w;

	printf("実行後: *p_a=%d *p_b=%d\n", *p_a, *p_b);
}