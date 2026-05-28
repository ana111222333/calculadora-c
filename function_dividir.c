int dividir(int a, int b) {

    int contador = 0;
    int soma = 0;

    while (soma < a) {
        soma += b;
        contador++;
    }

    return contador;
}
