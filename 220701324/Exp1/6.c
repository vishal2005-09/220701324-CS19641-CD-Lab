#include <stdio.h>
#include <string.h>
int main(){
        char str1[100],str2[100];
        int i,j,found;
        printf("Enter the first string: ");
        scanf("%[^\n]",str1);
        printf("Enter the second string: ");
        scanf("%s",str2);
	strcat(str1,str2);
        printf("Concatenanted string: %s\n",str1);
        return 0;
}

