#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
 
void dramatic_pause(int seconds) {
    sleep(seconds);
}
 
int main() {
    printf("\n[system] Starting diagnosis...\n");
    fflush(stdout);
    dramatic_pause(1);
 
    printf("[ERROR] Anomaly detected.\n");
    printf("[ERROR] Severity: What have you done?\n\n");
    dramatic_pause(1);
 
    for (int i = 3; i > 0; i--) {
        printf("[COUNT DOWN] %d...\n", i);
        fflush(stdout);
        dramatic_pause(1);
    }
    
    while(1){
        printf("\n\t*** What have you done? ***\n\n");

    }

    return 0;
}