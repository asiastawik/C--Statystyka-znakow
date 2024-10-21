#include <stdio.h>

int main(void)
{
  int x;
  int lit[256]= {0}; // wszystkie mo¿liwe kody aski
  while (1)  //Pętla while wykonywana jest tak długo, jak długo warunek w nawiasach jest prawdą. (W przypadku pętli while wyliczana jest wartość
            //wyrażenia w nawiasach, i jeżeli jest ona różna od zera — pętla jest kontynuowana; w naszym przypadku wartość tego wyrażenia zawsze jest 1.)
            //Gdy, podczas czytania napotkany zostanie koniec pliku (po przeczytaniu wszystkich znaków lub zasymulowaniu takiej sytuacji przez naciśnięcie
            //odpowiedniej kombinacji klawiszy na klawiaturze) x przyjmuje wartość -1 i z pętli wychodzimy (polecenie break).
  {
        x= getchar();

        if (x == 10) break;
       // if (x == EOF ) break;//end of file; doszedles do konca pliku i funcja getchar drukuje -1
        lit[x]++;
        printf("x= %3d (%c)\n", x, x < 32 || x > 127 ? '.' : x ); // %c - kod aski; %3d - beda stale odstepy, jesli tal to wydruk kropki, jesli nie to wydruk x

  }

for (int i=0; i<256; i++)
        {
            if ((lit[i]!=0)&&(i>32 || i<127))
            {
                printf ("%d wystapilo: %d\n", i, lit[i] );
            }
        }

  return 0;
}
