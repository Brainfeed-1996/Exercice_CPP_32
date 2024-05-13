/*
  Soient les déclarations suivantes :
int fct (int) ; // fonction I
int fct (float) ; // fonction II
void fct (int, float) ; // fonction III
void fct (float, int) ; // fonction IV
int n, p ;
float x, y ;
char c ;
double z ;
Les appels suivants sont-ils corrects et, si oui, quelles seront les fonctions
effectivement appelées et les conversions éventuellement mises en place ?
a. fct (n) ;
b. fct (x) ;
c. fct (n, x) ;
d. fct (x, n) ;
e. fct (c) ;
f. fct (n, p) ;
g. fct (n, c) ;
h. fct (n, z) ;
i. fct (z, z) ;
Les cas a, b, c et d
*/

/*
Les cas a, b, c et d ne posent aucun problème. Il y a respectivement appel des
fonctions I, II, III et IV, sans qu’aucune conversion d’argument ne soit nécessaire.
e. Appel de la fonction I, après conversion de la valeur de c en int.
f. Appel incorrect, compte tenu de son ambiguïté ; deux possibilités existent en
effet : conserver n, convertir p en float et appeler la fonction III ou, au
contraire, convertir n en float, conserver p et appeler la fonction IV.
g. Appel de la fonction III, après conversion de c en float.
h. Appel de la fonction III, après conversion (dégradante) de z en float.
i. Appel incorrect, compte tenu de son ambiguïté ; deux possibilités existent en
effet : convertir le premier argument en float et le second en int et appeler la
fonction III ou, au contraire, convertir le premier argument en int et le second
en float et appeler la fonction IV.
  */

