#include<stdio.h>
main()
{
	int d[11] = { 10.15,18,23,28,35,47,55,68,78,96 };
	int low, mid, high, s;

	printf("探索値s入力 :");
	scanf("%d", &s);

	//二分探索(バイナリサーチ)
	low = 0;
	high = 10;

	while (low <= high){
		mid = (low + high) / 2;
		if (s == d[mid]) {
			break;
		}
		if (s > d[mid]) {
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
	}
	if (low > high) {
		printf("見つからなかった");
	}
	else {
		printf("探索値%dをd[%d}で発見！\n", s, mid);
	}
}