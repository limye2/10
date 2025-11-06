//
//  main.c
//  10
//
//  Created by 이예림 on 11/6/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i=0;
    char str[4];
    str[0] = 'a';
    str[1] = 'b';
    str[2] = 'c';
    str[3] = '\0';
    
    printf("%s\n", str);
    
    while(str[i] != '\0'){
        printf("%c", str[i]);
        i++;
    }
    return 0;
}
