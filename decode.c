#include <stdio.h>
#include <unistd.h>
//
int main()
{
	FILE* fin = fopen( "decodeME.txt" , "r" ) ;
	//
	char ch ;
	//
	int n = 0 ;
	//
	int num=28 ;
	//
	int j;
	//
	char symb;
	//
	int tem;
	//
	int pos=1;
	//
	char arr[10101]={};
	//
	for(j=0;j<num;j++)
	{
		symb=getc(fin);
		//n++;
		while(1)
		{
			//n++;
			tem=getc(fin);
			if(tem=='\n')
			{
				break;
			}
			int temp=tem-'0';
			if (temp==1)
			{
				pos=2*pos;
				pos++;
			}
			if(temp==0)
			{
				pos=2*pos;
			}
		}
		arr[pos]=symb;
		pos=1;

	}
	char check;
	while(1)
	{
		check=getc(fin);
		//getc reads in char all the time
		if(check==EOF)
		{
			break;
		}
		int checka=check-'0';
		//this made checka an int from what check had read
		if(checka==0)
		{
			pos=2*pos;
			if(arr[pos]!=0)
			{
				printf("%c", arr[pos]);
				//prints out message
				pos=1;
			}
		}
		if(checka==1)
		{
			pos=2*pos;
			pos++;
			if(arr[pos]!=0)
			{
				printf("%c", arr[pos]);
				//prints out message
				pos=1;
			}
		}
	}
	//
	fclose( fin ) ;
	//
	printf( "\n" ) ;
	//printf( "%d\n" , n ) ;
	printf( "\n" ) ;
	//
	return 0 ;
}
//
// end of file
//