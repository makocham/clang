#include<stdio.h>
main()
{
	int a = 100, b = 200;
	int *p_a, *p_b, *p_w;

	p_a = &a;
	p_b = &b;

	printf("���s�O: *p_a=%d *p_b=%d\n", *p_a, *p_b);
	printf("�A�h���X: p_a=%d p_b=%d\n", p_a, p_b);

	//�|�C���^�ϐ����L�����Ă���A�h���X�����ւ���
	p_w = p_a;
	p_a = p_b;
	p_b = p_w;

	printf("���s��: *p_a=%d *p_b=%d\n", *p_a, *p_b);
}