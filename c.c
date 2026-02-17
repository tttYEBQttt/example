
char* PalindromoMasGrande (char* cadena) {
    int n = 0;
    while (cadena[n] != '\0') {
        n++;
    }
    
    int i, j;          
    int k;             
    int longitud_actual;       
    int es_palindromo; 

    int longitud_maxima = 0;
    int indice_inicio = 0; 
    
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            
            longitud_actual = j - i + 1; 
            es_palindromo = 1; 

            for (k = 0; k < longitud_actual / 2; k++) {
                if (cadena[i + k] != cadena[j - k]) {
                    es_palindromo = 0; 
                    break;             
                }
            }

            if (es_palindromo == 1) {
                if (longitud_actual > longitud_maxima) {
                    longitud_maxima = longitud_actual;
                    indice_inicio = i;
                }
            }
        }
    }

    return &cadena[indice_inicio];
}