/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACI�N: SESI�N 1
I_Salario: Indique cu�l ser�a el resultado de las siguientes operaciones:

   SALIDA DE salario_base -> 3500
   SALIDA DE salario_final -> 1200

Clara M Romero Lara
*******************************************************************************/


int salario_base;
int salario_final;
int incremento;

salario_base = 1000;
salario_final = salario_base;
incremento = 200;
salario_final = salario_final + incremento;
salario_base = 3500;

cout << "\nSalario base: " << salario_base;
cout << "\nSalario final: " << salario_final;

/*Responda razonadamente a la siguiente pregunta: 
�El hecho de realizar la asignaci�n

   salario_final = salario_base;

hace que ambas variables est�n ligadas
durante todo el programa y que cualquier modificaci�n posterior de
salario_base afecte a salario_final?*/

/*No, esas dos variables no est�n ligadas. Se ha realizado una asignaci�n al 
principio, y los cambios posteriores sobre las variables no afectar�n. En 
n�meros sobre este ejemplo, las asignaciones ser�an:

   salario_base (VALOR BASURA) = 1000;
   salario_final (VALOR BASURA) = salario_base (1000);
   incremento (VALOR BASURA) = 200;
   salario_final (1000) = salario_final (1000) + incremento (200);
   salario_base (1000) = 3500;

*/
