#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFSIZE 80
#define STDNT   5

struct student {
    int id;
    char account[9];
};

void set(struct student *s, int id, char *account) {
  s->id=id;
  strcpy(s->account,account);

}

struct student *search(struct student students[], int n, int id) {
  int j;
  for(j=0;j<n;j++){
    if(students[j].id==id){return &students[j];}
}
  return NULL;  
}


int main(void) {
    struct student students[STDNT], *s;
    char buf[BUFSIZE], *account;
    int i, len, id;
    for (i=0; i<STDNT; i++) {
        fgets(buf, sizeof(buf), stdin);
        len = strlen(buf);
        if (buf[len - 1] == '\n')
            buf[len - 1] = '\0';
        buf[7] = '\0';
        id = atoi(buf);
        account = buf + 8;
        while (*account == ' ')
            account++;
        set(&students[i], id, account);
    }
    while (fgets(buf, sizeof(buf), stdin) == buf) {
        if (buf[0] == '\n' || buf[0] == '\0')
            break;
        s = search(students, STDNT, atoi(buf));
        if (s == NULL)
            printf("no data\n");
        else
            printf("%s\n", s->account);
    }
    return 0;
}

