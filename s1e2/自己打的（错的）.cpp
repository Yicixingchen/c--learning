#include <io.h>
#include <direct.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX        256

long total;
 
int countLines(const char *filename);
void findAllCodes(const char *path);
void findALLFiles(const char *path);

int countLines(const char *filename)
{
	FILE *fp;
	int count = 0;
	int temp;
	
	if ((fp = fopen(filename, "r")) ==NULL)
	{
		fprintf(stderr, "Can not open the file: %s\n", filename);
		return 0;
	}
	while ((temp = fgetc(fp)) != EOF)
	{
		if (temp == '\n')
		{
			     count++;
		}
	}
	
	fclose(fp);
	return count;
}

int isCode(const char *filename)
{
	int length;
	
	length = strlen(filename);
	
	if (!strcmp(filename + (length - 2), ".c"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void findAllDirs(const char *path)
{
	DIR *dp;
	struct dirent *entry;
	struct stat atatbuf;
	
	if((dp = opendir(path)) == NULL)
	{
		fprintf(stderr, "The path %s is wrong!\n", path);
		return;
	}
	
	chdir(path);
	while ((entry = readdir(dp)) != NULL)
	{
		lstat(entry->d_name, &statbuf);
		
		if (!strcmp(".", entry->d_name) || !strcmp("..", entry->d_name))
		        continue;
		        
		if (S_ISDIR(statbuf.st_mode))
		{
			findAllDirs(edtry->d_name);
		}
		else
		{
			if (isCode(entry->d_name))
			{
				total += countLines(entry->d_name);
			}
		}
	}
	
	chdir("..");
	closedir(dp);
}

int main()
{
	char path[MAX] = ".";
	
	printf("计算中...\n");
	
	findAllDirs(path);
	
	printf("目前你总共写了 %ld 行代码! \n\n", total);
	
	return 0;
}
 
