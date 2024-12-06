#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char arr[] = "aababca";
    char tar[] = "bca";

    int n = strlen(arr);
    int m = strlen(tar);



    for(int i = 0;i<=n-m;i++){
            int j;
            for(j = 0;j<m;j++){

                if(arr[i+j]!=tar[j]){

                    break;
                }

            }
            if(j==m){
                    printf("%d",i);
                }
    }

    return 0;
}
