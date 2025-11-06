//
//  main.c
//  10
//
//  Created by 이예림 on 11/6/25.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    FILE* fp;
    char c;
    
    //fopen
    fp = fopen("sample.txt","r");
    if(fp == NULL)
    {
        printf("failed to open\n");
        return -1;
    }
    
    while((c=fgetc(fp)) !=EOF)
    {
        putchar(c);
    }
    
    
    fclose(fp);
    
    return 0;
}
