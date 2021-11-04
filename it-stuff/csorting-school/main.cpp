#include <iostream>
#include <stdlib.h>
#include <time.h>
#define N 10

using namespace std;

int main() {
    int tab[N];
    srand(time(0));
    for(int i = 0; i < N; i++)
    tab[i] = rand()%10;
    for(int i = 0; i < N; i++)
        printf("%d ", tab[i]);
    cout << endl;

    cout << "------------" << endl;

    for(int i = 0; i < N; i++)
        for(int j = 1; j < N; j++)
            if(tab[j - 1] > tab[j]){
                int help = tab[j - 1];
                tab[j - 1] = tab[j];
                tab[j] = help;
            }

    for(int i = 0; i < N; i++)
        printf("%d ", tab[i]);
    cout << endl;
    return 0;
}
