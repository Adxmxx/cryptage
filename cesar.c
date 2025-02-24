#include <stdio.h>
#include <stdlib.h>

int main() {
	int clef = 0;
	int i = 0;
	char txt_claire[26]; 
	char txt_chiffre[26];

	printf("Clef : ");
	scanf("%d", &clef);
	printf("Mot de passe (26 caractères minuscule) : ");
	scanf("%s", &txt_claire);
	while (i < 26) {
		if (txt_claire[i] >= 97) {
			txt_claire[i] -= 96;
			txt_chiffre[i] = (txt_claire[i] + clef) % 26 + 96;
		} else if (txt_claire[i] >= 65) {
			txt_claire[i] -=  64;
			txt_chiffre[i] = (txt_claire[i] + clef) % 26 +64;
		} else {
			//txt_chiffre[i] = (txt_claire[i] + clef) % 26;
		}
		printf("%c", txt_chiffre[i]);
		i++;
	}
	
}
