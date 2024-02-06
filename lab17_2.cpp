void myString(char *&p,int N){
	p = new char;    
	for(int i = 0; i < N;i++) p[i] = 'A'+i;
	p[N] = 0;
}