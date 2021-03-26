# include <stdio.h>

int main ( int argc, char * argv[])
{
	unsigned short largeshort=32760;
	printf("after init: %d\n", largeshort);
	
	
	largeshort= largeshort + 12345;
	printf("after adding: %d\n", largeshort);
	
	int numerator=15 , denominator=5 ; 
	float result;
	
	result= (float)numerator/denominator;
	
	printf("%d divided by %d = %0.2f\n",numerator,denominator,result);
	
	float e= 2.718281828f;
	printf("after init; %f\n",e);
	printf("after increment; %f\n",e);
	printf("after decrement; %f\n",e);

	return 0;
	
}

