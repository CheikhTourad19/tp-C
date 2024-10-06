#include <stdio.h>
int main()
{
    float devoir_math, devoir_prog, exam_math, exam_prog, moyenne_math = 0, moyenne_prog = 0, moyenne_generale = 0;
    printf("Entrer la note du devoir de math \n");
    scanf("%f", &devoir_math);
    printf("Entrer la note du devoir de programmation \n");
    scanf("%f", &devoir_prog);
    printf("Entrer la note examen de math \n");
    scanf("%f", &exam_math);
    printf("Entrer la note examen de programmation \n");
    scanf("%f", &exam_prog);
    moyenne_math = 0.4 * devoir_math + 0.6 * exam_math;
    moyenne_prog = 0.4 * devoir_prog + 0.6 * exam_prog;
    moyenne_generale = (moyenne_math + moyenne_prog) / 2;
    printf("Moyenne Math = %f\n", moyenne_math);
    printf("Moyenne Programmation = %f\n", moyenne_prog);
    printf("Moyenne generale = %f\n", moyenne_generale);
    return 0;
}