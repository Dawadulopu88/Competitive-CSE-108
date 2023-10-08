#include <stdio.h>

int main() {
    int goals_inter = 0, goals_gremio = 0, draws = 0, victories_inter = 0, victories_gremio = 0, grenais = 0;
    int option;

    do {
        int inter_score, gremio_score;

        scanf("%d %d", &inter_score, &gremio_score);

        if (inter_score > gremio_score) {
            victories_inter++;
        } else if (gremio_score > inter_score) {
            victories_gremio++;
        } else {
            draws++;
        }

        grenais++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &option);

    } while (option == 1);

    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", victories_inter);
    printf("Gremio:%d\n", victories_gremio);
    printf("Empates:%d\n", draws);

    if (victories_inter > victories_gremio) {
        printf("Inter venceu mais\n");
    } else if (victories_gremio > victories_inter) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Nao houve vencedor\n");
    }

    return 0;
}
