#include <iostream>
using namespace std;

struct Elemento {
    int dado;
    Elemento* proximo;
};

void adicionar(Elemento*& inicio, int numero) {
    Elemento* novoNo = new Elemento{numero, inicio};
    inicio = novoNo;
}

void excluir(Elemento*& inicio, int numero) {
    Elemento* atual = inicio;
    Elemento* anterior = nullptr;

    while (atual != nullptr && atual->dado != numero) {
        anterior = atual;
        atual = atual->proximo;
    }

    if (atual == nullptr) {
        cout << "Valor não localizado." << endl;
        return;
    }

    if (anterior == nullptr) {
        inicio = atual->proximo;
    } else {
        anterior->proximo = atual->proximo;
    }

    delete atual;
}

void exibir(Elemento* inicio) {
    cout << "Conteúdo: ";
    while (inicio != nullptr) {
        cout << inicio->dado << " ";
        inicio = inicio->proximo;
    }
    cout << endl;
}

int tamanho(Elemento* inicio) {
    int total = 0;
    while (inicio != nullptr) {
        total++;
        inicio = inicio->proximo;
    }
    return total;
}

int contar(Elemento* inicio, int numero) {
    int qtde = 0;
    while (inicio != nullptr) {
        if (inicio->dado == numero)
            qtde++;
        inicio = inicio->proximo;
    }
    return qtde;
}

void trocar(Elemento* inicio, int antigo, int novoValor) {
    while (inicio != nullptr) {
        if (inicio->dado == antigo)
            inicio->dado = novoValor;
        inicio = inicio->proximo;
    }
}

void dividir_por_valor(Elemento* origem, int limite, Elemento*& maiores, Elemento*& menores) {
    maiores = nullptr;
    menores = nullptr;
    while (origem != nullptr) {
        if (origem->dado > limite)
            adicionar(maiores, origem->dado);
        else if (origem->dado < limite)
            adicionar(menores, origem->dado);
        origem = origem->proximo;
    }
}

bool contem(Elemento* lista, int numero) {
    while (lista != nullptr) {
        if (lista->dado == numero)
            return true;
        lista = lista->proximo;
    }
    return false;
}

Elemento* cruzamento(Elemento* a, Elemento* b) {
    Elemento* resultado = nullptr;
    Elemento* marcados = nullptr;

    while (a != nullptr) {
        if (contem(b, a->dado) && !contem(marcados, a->dado)) {
            adicionar(resultado, a->dado);
            adicionar(marcados, a->dado);
        }
        a = a->proximo;
    }

    return resultado;
}

void limpar(Elemento*& lista) {
    while (lista != nullptr) {
        Elemento* lixo = lista;
        lista = lista->proximo;
        delete lixo;
    }
}

int main() {
    Elemento* conjunto1 = nullptr;
    Elemento* conjunto2 = nullptr;

    int escolha, num, antigo, novoValor, referencia;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Adicionar na Lista 1\n";
        cout << "2. Adicionar na Lista 2\n";
        cout << "3. Excluir da Lista 1\n";
        cout << "4. Mostrar Listas\n";
        cout << "5. Ver Tamanho da Lista 1\n";
        cout << "6. Contar Ocorrências na Lista 1\n";
        cout << "7. Substituir Valor na Lista 1\n";
        cout << "8. Dividir Lista 1 por Valor\n";
        cout << "9. Ver Interseção\n";
        cout << "0. Sair\n";
        cout << "Escolha: ";
        cin >> escolha;

        switch (escolha) {
            case 1:
                cout << "Valor para Lista 1: ";
                cin >> num;
                adicionar(conjunto1, num);
                break;

            case 2:
                cout << "Valor para Lista 2: ";
                cin >> num;
                adicionar(conjunto2, num);
                break;

            case 3:
                cout << "Valor para remover da Lista 1: ";
                cin >> num;
                excluir(conjunto1, num);
                break;

            case 4:
                cout << "Lista 1: ";
                exibir(conjunto1);
                cout << "Lista 2: ";
                exibir(conjunto2);
                break;

            case 5:
                cout << "Tamanho da Lista 1: " << tamanho(conjunto1) << endl;
                break;

            case 6:
                cout << "Número a contar: ";
                cin >> referencia;
                cout << "Ocorrências de " << referencia << ": " << contar(conjunto1, referencia) << endl;
                break;

            case 7:
                cout << "Valor original: ";
                cin >> antigo;
                cout << "Novo valor: ";
                cin >> novoValor;
                trocar(conjunto1, antigo, novoValor);
                exibir(conjunto1);
                break;

            case 8:
                cout << "Digite o valor de referência: ";
                cin >> referencia;
                {
                    Elemento* acima = nullptr;
                    Elemento* abaixo = nullptr;
                    dividir_por_valor(conjunto1, referencia, acima, abaixo);
                    cout << "Valores maiores que " << referencia << ": ";
                    exibir(acima);
                    cout << "Valores menores que " << referencia << ": ";
                    exibir(abaixo);
                    limpar(acima);
                    limpar(abaixo);
                }
                break;

            case 9:
                {
                    Elemento* inter = cruzamento(conjunto1, conjunto2);
                    cout << "Valores em comum: ";
                    exibir(inter);
                    limpar(inter);
                }
                break;

            case 0:
                cout << "Saindo do programa..." << endl;
                break;

            default:
                cout << "Opção inválida!" << endl;
        }

    } while (escolha != 0);

    limpar(conjunto1);
    limpar(conjunto2);

    return 0;
}