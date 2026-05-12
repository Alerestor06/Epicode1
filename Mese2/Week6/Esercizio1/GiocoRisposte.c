#include <stdio.h>
#include <math.h>
#include <string.h>


int main(){

char inizioFine;
char nomeutente[10];
int punteggio = 0;
char risposta[20];
int punteggioM = 0;

do {
printf("Gioco delle tre domande, vuoi vincere 100k euro? beh allora prova a rispondere a queste 3 temibili domande! Clicca 'Y' per iniziare una nuova partita o 'N' per uscire dal gioco: ");
scanf(" %c", &inizioFine);

if(inizioFine == 'Y'){
    punteggio=0;
    printf("Grande! allora iniziamo! Gentilmente inserisci il tuo nome utente(massimo 10 caratteri): ");
    scanf(" %s", &nomeutente);
    printf("ok ciao %s ! iniziamo con le domande!", nomeutente);
    printf("--------------------------------------------------\n");
    printf("Quando e' stata scoperta l'america?:\n"); 
    printf("1)1494\n2)1492\n3)1498\n");
    scanf(" %s", risposta);
    if(strcmp(risposta, "2")==0 || strcmp(risposta, "1914")==0){ //per confrontare due stringhe utilizziamo la funzione string compare della libreria <string.h> perchè c non può usare il == tra stringhe perchè confronteresti gli indirizzi di memoria e non il contenuto
        printf("Bravo risposta esatta hai guadagnato 2 punti!\n");//HO dovuto aggiungere == 0 perchè c vede lo zero come falso e qualsiasi altro numero come vero, calcolando la differenza tra i numeri usciva sempre un numero diverso da 0 e quindi vero anche se la risposta era sbagliata, in questo modo  solo quando il risultato delconfronto è zero ovvero sono uguali allora è corrretta
        punteggio+=2;

    }else {
        printf("peccato hai sbagliato la risposta corrretta era '1492' \n");
    }

    printf("Quando e' nato hitler?:\n"); 
    printf("1)1892\n2)1890\n3)1889\n");
    scanf(" %s", risposta);
    if(strcmp(risposta, "3")==0 || strcmp(risposta, "1889")==0){
        printf("Bravo risposta esatta hai guadagnato altri 2 punti! \n");
        punteggio+=2;
    }else {
        printf("peccato hai sbagliato la risposta corrretta era '1889' \n");
    }

    printf("quando entro l'italia nella prima guerra mondiale?: \n"); 
    printf("1)1915\n2)1914\n3)1912\n");
    scanf(" %s", risposta);
    if(strcmp(risposta,"1")==0 || strcmp(risposta,"1915")==0){
        printf("Bravo risposta esatta hai guadagnato altri 2 punti! \n");
        punteggio+=2;
    }else {
        printf("peccato hai sbagliato la risposta corrretta era '1915' \n");
    }
    punteggioM += punteggio;

    printf("il punteggio di %s e' di %d ! \n", nomeutente, punteggio);
    printf("il punteggio totale e' di %d ! \n", punteggioM);
    

    } 
    else if(inizioFine == 'N'){
        return 0;
    }
    } while (inizioFine != 'N');


    return 0;
}