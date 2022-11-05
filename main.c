// Projet MIPS 2022-2023
// Auteurs: Taleb_Rosselet

#include <stdio.h>
#include <stdlib.h>

void modeInteractif();
void modeAutomatique_pas(char *nom);
void modeAutomatique(char *nom1, char *nom2, char *nom3);

int 
main(int argc, char **argv)
{

	switch(argc){
		case 1: modeInteractif();
			break;
		case 3: modeAutomatique_pas(argv[1]);
		       	break;
		case 4: modeAutomatique(argv[1], argv[2], argv[3]);
			break;
		default: perror("Nombre d'arguments incorrect\n");
	}

   	printf("Hello émulateur MIPS!\n");

    	return 0;
}

void 
modeInteractif()
{
	printf("mode interactif\n");
}

void 
modeAutomatique_pas(char *nom)
{
	printf("mode automatique pas à pas\n");
	FILE *fic = NULL;
	fic =  fopen(nom,"r");

	fclose(fic);

}
void 
modeAutomatique(char *nom1, char *nom2, char *nom3)
{
	printf("mode automatique \n");

	FILE *fic_ass;
	FILE *fic_code, *fic_final;
	fic_ass=  fopen(nom1,"r");
	fic_code= fopen(nom2, "w");
	fic_final = fopen(nom3, "w");
	fclose(fic_ass);
	fclose(fic_code);
	fclose(fic_final);
}


























