# include <stdio.h>

int main ( int argc, char * argv[] )
{
	if(argc!= 3){
		printf("Usage:\n");
		printf("CLA input1 input2\n");
	}
	else
	{

	printf("Number of entered arguments: %d\n", argc);
	for (int i=0 ; i<argc ; i++)
	{
		printf("Argument %d was %s\n", i, argv[i]);
	}
	}
	return 0;
	
}

