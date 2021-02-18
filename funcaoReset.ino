/*===========================================================================================
 *                                   FUNÇÃO RESET
 * Canal Brincando com Ideias: Como dar reset no arduino usando programação - 28/03/2019                        
 * 
 * Postagem original em: https://www.instructables.com/two-ways-to-reset-arduino-in-software/             
 * 
 * 
 *============================================================================================
 */

void (*funcReset)()=0;   // O Asterisco indica que a função é um ponteiro.
                          // Declara a função reset no endereço zero

void setup() {


 funcReset (); // Toda vez que essa função for chamada o arduino dar um reset

 
}

void loop() {


 

}
