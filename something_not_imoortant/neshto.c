#include <stdio.h>

int main()
{
    int num = 259;
    int *pn = &num;
    char *pc = &num;

    printf("pn=%p *pn=%d\n", pn, *pn);
    printf("pn+1=%p *pn + 1=%d\n", pn + 1, *pn + 1);
    printf("pc=%p *pc=%d\n", pc, *pc);
    printf("pc+1=%p *pc+1=%d\n", *(pc + 1), *(pc + 1) + 1);

    printf("pn=%p *pn=%d\n", pn, *pn);
    printf("pn+1=%p *pn + 1=%d\n", pn + 2, *pn + 2);
    printf("pc=%p *pc=%d\n", pc, *pc);
    printf("pc+1=%p *pc+1=%d\n", *(pc + 2), *(pc + 2));
}