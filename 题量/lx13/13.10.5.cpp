#include <stdio.h>
#include <stdlib.h>
#define BUF 256 
int has(char ch,const char *line);
int main(int argc,char * argv[]){
	FILE * fp;
	char ch;
	char line[BUF];
	
	if(argc != 3)
	{
		printf("Usage: %s characters filename \n",argv[0]);
		exit (EXIT_FAILURE);	
	} 
	ch =argv[1][0];
	if((fp= fopen(argv[2],"r")) ==NULL)
	{
		printf("Can't open %s\n",argv[2]);
		exit(EXIT_FAILURE);
		
	}
	while(fgets(line,BUF,fp)!=NULL)
	{
		if(has(ch,line))
			fputs(line,stdout);
	}
	fclose(fp);
	return 0;
	
	}
	int has(char ch,const char * line)
	{
		while (*line)
		
			if(ch ==*line++)
			return (1);
		return 0;	
	}
