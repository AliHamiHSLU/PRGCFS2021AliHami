# include <stdio.h>

int main ( int argc, char * argv[])
{
	unsigned short largeshort=32760;
	printf("after init: %d\n", largeshort);
	
	
	largeshort= largeshort+12345;
	printf("after adding: %d\n", largeshort);
	
	int numerator=15 , denominator=5 , result;
	result= numerator/denominator;
	
	printf("%d divided by %d =:%d\n",numerator,denominator,result);
	
	return 0;
	
}

