#include<stdio.h>
#include<stdafx.h>
int main()
{
	int a[4];
	int temp=0;
	int j,k;

	printf(" ������Ҫ������ĸ����֣�");
	scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]);
	
	for(j=0;j<4;j++){
		for(k=0;k<4-j;k++){
			while(a[k]<a[k+1]){
				temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
				}
		}
	}
	printf("������˳��Ϊ��%d,%d,%d,%d",a[0],a[1],a[2],a[3]);

	return 0;

}