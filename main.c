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
    char input[100];
    int i;
    
    //1.open file //경로 직접 입력 option+command
    fp = fopen("/Users/iyelim/10/sample.txt", "w");
    
    //2.write file
    for(i=0; i<3; i++)
    {
        //2-1. print "input a word"
        printf("input a word:");
        //2-2. scanf a string
        scanf("%s", input);
        //2-3. fprintf()
        fprintf(fp, "%s\n", input);
    }
    //3. close filr
    fclose(fp);
    return 0;
}
