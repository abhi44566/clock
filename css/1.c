#include <stdio.h>
#include <stdlib.h>

typedef struct node

{

int number;

struct node *next;

=}

node;

int main(int argc, char *argv[])

{

node *list = NULL;

for (int n = 1; n < argc; n++)

{

int number atoi(argv[n]);

node *m malloc(sizeof(node)); if(m NULL)

{

free(m);

return 1;

}

m->number = number;

m->next = NULL;

list = m;

}

node *ptr = list;

while(ptr != NULL)

{

printf("%i\n", ptr->number); ptr ptr->next;

}

}