int potencia(int a, int b){
  int resultado;
  
  resultado = a;
  if (b == 0) return 1;
  for (int i = 0 ; i < b-1 ; i++){
    resultado = resultado * a;
  }
 
  return resultado;
}