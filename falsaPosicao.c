#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float funcao(float x){
	return 3*x - 1/sqrt(3*x) -3;
}

float media(float a, float b){
	return (a*funcao(b) - b*funcao(a))/(funcao(b) - funcao(a));
}
float a, b;

int main(){
	system("clear");
	scanf("%f", &a);
	scanf("%f", &b);
	for( int i = 0; i < 3; i ++){
		printf("%d %f %f %f %f\n", i + 1, a, b, media(a,b), funcao(media(a, b)));
		if(funcao(media(a, b)) > 0){
			a = media(a, b);
		} else {
			b = media(a, b);
		}
	}
	return 0;
}