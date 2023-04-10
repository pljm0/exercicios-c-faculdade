float valorServico(float n1) {
	float r; 
	r = (n1 * 10) / 100;
	r = (r - n1) * -1;
	printf("O valor do servico com 10 por cento de desconto e: %0.2f ", r);
	return r;
	
}
