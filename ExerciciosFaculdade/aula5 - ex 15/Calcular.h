int somar(int v1, int v2) {
	int r = v1 + v2;
	printf("Resultado: %d", r);
	printf("\nOperador escolhido: 1. + (Soma)");
	return r;
	
}

int subtrair(int v1, int v2) {
	int r = v1 - v2;
	printf("Resultado: %d", r);
	printf("\nOperador escolhido: 2. - (Subtracao)");
	return r;

}

int multiplicar(int v1, int v2) {
	int r = v1 * v2;
	printf("Resultado: %d", r);
	printf("\nOperador escolhido: 3. * (Multiplicacao)");
	return r;
	
}

int dividir(int v1, int v2) {
	int r = v1 / v2;
	printf("Resultado: %d", r);
	printf("\nOperador escolhido: 4. / (Divisao)");
	return r;
	
}
