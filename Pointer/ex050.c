#include<stdio.h>
main()
{
	int a = 100, b;

	int *p_a;   //�|�C���^�ϐ�

	p_a = &a;�@//a�̃A�h���X��p_a�ɓ����
	b = *p_a;//p_a�Ԓn�̒��g��b�ɓ����

	printf("a=%d &a=%d p_a=%d *p_a=%d &p_a=%d\n", a,&a ,p_a, *p_a,&p_a);
}