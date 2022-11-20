#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float funcao(float x){
	return log(3*x -1) + 2*x;
}

float media(float a, float b){

return(a + b)/2;
}

float a, b, med, fxmed;
int i;
int main(){
system("clear");
	scanf("%f", &a);
	scanf("%f", &b);
	printf("i a f(x) < 0 b f(x) > 0 x_med f(x_med)\n");
	for(i = 0; i < 10; i++){
		 printf("%d %f %f %f  %f\n", i + 1, a, b, media(a,b), funcao(media(a, b)));
		 if(funcao(media(a, b)) > 0){
		 	b = media(a, b);
		 } else {
		 	a = media(a,b);
		 }
	}
	return 0;
}