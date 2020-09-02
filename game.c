#include <stdio.h>
#include <stdlib.h>

int main() {
    char color[20];
    char pluralNoun[20];
    char person[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a name: ");
    scanf("%s", person);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s\n", person);

    return 0;
}