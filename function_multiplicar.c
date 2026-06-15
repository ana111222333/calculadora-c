int multiplicar(int a, int b) {

    int resultado = 0;

    for(int i = 0; i < b; i++) {
        resultado += a;
    }

    return resultado;
}

int dividir(int a, int b) {

    if (b == 0) {
        printf("Erro: divisao por zero.\n");
        return 0;
    }

    int contador = 0;

    while (a >= b) {
        a -= b;
        contador++;
    }

    return contador;
}
