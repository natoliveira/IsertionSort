#include <cstdlib>
#include <iostream>

// Funçāo desse algoritmo: ordena um array. Primeiro divide-se o array em duas partes;
//uma parte contém o array ordenado, a outra os arrays desordenados. A cada etapa pegamos
// o elemento e o ordenamos no local apropriado, o array vai perdendo elementos até que ele seja ordenado.
//Pega-se o primeiro elemento do array Nāo ordenado e acha o seu local no array ordenado, compara-se com
// a primeira posiçāo atrás dele, se é menor eu posso inverter a posiçāo. A cada chamada identifica a posiçāo
//anterior ao elemento. Caso o número já esteja ordenado, nāo faço alteraçāo.

using namespace std;

int main(int argc, char** argv) {
    double notas[10] = {9, 9.5, 7, 1, 8, 7.5, 9.6, 8.2, 8.4, 8.1};
    double aux;

    for(int i=0; i<9; i++){
        //i dita as posições do array
        for(int j=i+1; j>0; j--) {
            //j será o primeiro elemento do array nāo ordenado, andando pra trás.
            //j começa com i+1 e vai sempre andando pra trás.
            if(notas[j] < notas[j-1]){
                aux = notas [j];
                notas [j] = notas[j-1];
                notas [j-1] = aux;
            }
            else
                break;
        }
    }
    for(int i=0; i<10; i++)
        cout << notas[i] << " | ";
    cout << endl;
    return 0;

}
