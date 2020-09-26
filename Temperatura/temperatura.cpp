#include <iostream>

using namespace std;

int main(){

    string dec; //decisões de continuar ou encerrar
    double res; //res é o resultado final
    int valor_01, valor_02 = 0;
    //valor_01 é a medida que será convertida para outra medida
    //valor_02 é a medida que será usada para converter o valor_01

    cout << " -=-=-=-=CONVERSOR DE MEDIDAS=-=-=-=-";
    while(true){
        cout << "\n\n 0 - Sair do programa\n 1 - Celsius\n 2 - Fahrenheit\n 3 - Kelvin \n\n Digite qual sera convertida: ";
        cin >> valor_01;
        if(valor_01==0){
            cout << "\n Fechando o prgrama...\n";
            system("pause");
            break;
        }
        cout << "\n 0 - Sair do programan\n 1 - Celsius\n 2 - Fahrenheit\n 3 - Kelvin \n\n Digite para qual ira converter: ";
        cin >> valor_02;
        if(valor_02==0){
            cout << "\n Fechando o prgrama...\n";
            system("pause");
            break;
        }
        if(valor_01==1&&valor_02==1){
            cout << "\n Nao e possivel converter o mesmo tipo de medida.\n Deseja continuar a conversao? (S/N):";
            cin >> dec;
            if(dec=="N"||dec=="n"){
                system("pause");
                break;
            }
        }
        if(valor_01==1&&valor_02==2){
            cout << " Digite o valor de celsius: ";
            cin >> res;
            res = (res * 9/5) + 32;
            cout << " O resultado e: " << res;
        }
        if(valor_01==1&&valor_02==3){
            cout << " Digite o valor de celsius: ";
            cin >> res;
            res += 273.15;
            cout << " O resultado e: " << res;
        }
        if(valor_01==2&&valor_02==1){
            cout << " Digite o valor de fahreinheit: ";
            cin >> res;
            res = (res - 32) * 5/9;
            cout << " O resultado e: " << res;
        }
        if(valor_01==2&&valor_02==2){
            cout << "\n Nao e possivel converter o mesmo tipo de medida.\n Deseja continuar a conversão? (S/N): ";
            cin >> dec;
            if(dec=="N"||dec=="n"){
                system("pause");
                break;
            }
        }
        if(valor_01==2&&valor_02==3){
            cout << " Digite o valor de fahreinheit: ";
            cin >> res;
            res = (res - 32) * 5/9 + 273.15;
            cout << " O resultado e: " << res;
        }
        if(valor_01==3&&valor_02==1){
            cout << " Digite o valor de kelvin: ";
            cin >> res;
            res -= 273.15;
            cout << " O resultado e: " << res;
        }
        if(valor_01==3&&valor_02==2){
            cout << " Digite o valor de fahreinheit: ";
            cin >> res;
            res = (res - 273.15) * 9/5 + 32;
            cout << " O resultado e: " << res;
        }
        if(valor_01==3&&valor_02==3){
            cout << "\n Nao e possivel converter o mesmo tipo de medida.\n Deseja continuar a conversao? (S/N): ";
            cin >> dec;
            if(dec=="N"||dec=="n"){
                system("pause");
                break;
            }
        }
    }
    return 0;
}