#include <Servo.h>
 
#define SERVO1 8
#define SERVO2 9 
#define SERVO3 10 

#define SERVO4 11
#define SERVO5 12
#define SERVO6 13
 
Servo s1; // Variável Servo
Servo s2;
Servo s3;

Servo s4;
Servo s5;
Servo s6;

int pos; // Posição Servo

int Ptn1 = 4;
int Ptn2 = 5;
int Ptn3 = 6;
int Ptn4 = 7; 
int Ptn5 = 8;
int Ptn6 = 9;

int time1 = 2200;
int time2 = 100;

  
int val;
int ang = 12;

void setup()  
{  
  Serial.begin(9600);  
  pinMode(Ptn1,OUTPUT); 
   pinMode(Ptn2,OUTPUT); 
    pinMode(Ptn3,OUTPUT); 
     pinMode(Ptn4,OUTPUT); 
      pinMode(Ptn5,OUTPUT); 
       pinMode(Ptn6,OUTPUT); 

  s1.attach(SERVO1);
  s2.attach(SERVO2);
  s3.attach(SERVO3);
  
  s4.attach(SERVO4);
  s5.attach(SERVO5);
  s6.attach(SERVO6);
  
  s1.write(0); // Inicia motor posição zero
  s2.write(0);
  s3.write(0);

  s4.write(0);
  s5.write(0);
  s6.write(0);

  
}  
    
void loop()  
{ 
     
 val=Serial.read(); 
//_______________________________________________Lowercase letters_______________________________

 
if (val=='a'){
  Serial.println("a");
  a();
}  
if (val=='b')
{
  Serial.println("b");
  b();
}
if (val=='c')
{
  Serial.println("c");
  c();
}
if (val=='d')
{
  Serial.println("d");
  d();
}
if (val=='e')
{
  Serial.println("e");
 e();
}
if (val=='f')
{
  Serial.println("f");
 f();
}
if (val=='g')
{
  Serial.println("g");
 g();
}
if (val=='h')
{
  Serial.println("h");
 h();
}
if (val=='i')
{
  Serial.println("i");
i();
}
if (val=='j')
{
  Serial.println("j");
 j();
}
if (val=='k')
{
  Serial.println("k");
 k();
}
if (val=='l')
{
  Serial.println("l");
l();
}
if (val=='m')
{
  Serial.println("m");
 m();
}
if (val=='n')
{
  Serial.println("n");
 n();
}
if (val=='o')
{
  Serial.println("o");
 o();
}
if (val=='p')
{
  Serial.println("p");
p();
}
if (val=='q')
{
  Serial.println("q");
 q();
}
if (val=='r')
{
  Serial.println("r");
 r();
}
if (val=='s')
{
  Serial.println("s");
 s();
}
if (val=='t')
{
  Serial.println("t");
 t();
}
if (val=='u')
{
  Serial.println("u");
 u();
}
if (val=='v')
{
  Serial.println("v");
v();
}
if (val=='w')
{
  Serial.println("w");
 w();
}
if (val=='x')
{
  Serial.println("x");
 x();
}
if (val=='y')
{
  Serial.println("y");
y();
}
if (val=='z')
{
  Serial.println("z");
z();
}


//________________________________________________Capital Letters___________________________________________
if (val=='A')
{
  Serial.println("A");
  MSL();
  a();
} 
if (val=='B')
{
  Serial.println("B");
  MSL();
  b();
}
if (val=='C')
{
  Serial.println("C");
  MSL();
  c();
}
if (val=='D')
{
  Serial.println("D");
  MSL();
  d();
}
if (val=='E')
{
  Serial.println("E");
  MSL();
 e();
}
if (val=='F')
{
  Serial.println("F");
  MSL();
 f();
}
if (val=='G')
{
  Serial.println("G");
  MSL();
 g();
}
if (val=='H')
{
  Serial.println("H");
  MSL();
 h();
}
if (val=='I')
{
  Serial.println("I");
  MSL();
i();
}
if (val=='J')
{
  Serial.println("J");
 j();
}
if (val=='K')
{
  Serial.println("K");
  MSL();
 k();
}
if (val=='L')
{
  Serial.println("L");
  MSL();
l();
}
if (val=='M')
{
  Serial.println("M");
  MSL();
 m();
}
if (val=='N')
{
  Serial.println("N");
  MSL();
 n();
}
if (val=='O')
{
  Serial.println("O");
  MSL();
 o();
}
if (val=='P')
{
  Serial.println("P");
  MSL();
p();
}
if (val=='Q')
{
  Serial.println("Q");
  MSL();
 q();
}
if (val=='R')
{
  Serial.println("R");
  MSL();
 r();
}
if (val=='S')
{
  Serial.println("S");
  MSL();
 s();
}
if (val=='T')
{
  Serial.println("T");
  MSL();
 t();
}
if (val=='U')
{Serial.println("U");
  MSL();
 u();
}
if (val=='V')
{
  Serial.println("V");
  MSL();
v();
}
if (val=='W')
{
  Serial.println("W");
  MSL();
 w();
}
if (val=='X')
{
  Serial.println("X");
  MSL();
 x();
}
if (val=='Y')
{
  Serial.println("Y");
  MSL();
y();
}
if (val=='Z')
{
  Serial.println("Z");
  MSL();
z();
}


//________________space
if (val == ' '){
  Serial.println(" ");
  space();
}


//____________________________Numbers
if(val=='0'){
  Serial.println("0");
  NMR();
  numero0();
}
if(val=='1'){
  Serial.println("1");
  NMR();
  numero1();
}
if(val=='2'){
  Serial.println("2");
  NMR();
  numero2();
}
if(val=='3'){
  Serial.println("3");
  NMR();
  numero3();
}
if(val=='4'){
  Serial.println("4");
  NMR();
  numero4();
}
if(val=='5'){
  Serial.println("5");
  NMR();
  numero5();
}
if(val=='6'){
  Serial.println("6");
  NMR();
  numero6();
}
if(val=='7'){
  Serial.println("7");
  NMR();
  numero7();
}
if(val=='8'){
  Serial.println("8");
  NMR();
  numero8();
}
if(val=='9'){
  Serial.println("9");
  NMR();
  numero9();
}


//______________________________________Symbols______
 if(val==','){
   Serial.println(",");
   virgula();
 }
if(val==';'){
  Serial.println(";");
   PontoeVirgula();
 }
 if(val=='.'){
   Serial.println(".");
   PontoOuApostofro();
 }
 if(val=='?'){
   Serial.println("?");
   Interrogacao();
 }
 if(val=='!'){
   Serial.println("!");
   exclamacao();
}
 if(val=='<'){
   Serial.println("<");
   AeFaspasFrancesas();
 }
 if(val=='"'){
   Serial.println('"');
   AeFvirgulasAltas();
 }
if(val=='&'){
  Serial.println("&");
   Ecomercial();
 }
 if(val=='|'){
   Serial.println("|");
   barraVertical();
 }
 if(val=='('){
   Serial.println("(");
   Aparentes();
 }
 if(val==')'){
   Serial.println(")");
   Fparentes();
 }
 if(val=='['){
   Serial.println("[");
   AparentesRecto();
 }
 if(val==']'){
   Serial.println("]");
   BparentesRecto();
 }
 if(val=='$'){
   Serial.println("$");
   cifrao();
 }
 if(val=='%'){
   Serial.println("%");
   porcentagem();
 }
 if(val=='='){
   Serial.println("=");
   igual();
 }
 if(val=='+'){
   Serial.println("+");
   mais();
 }if(val=='-'){
   Serial.println("-");
  menos();
 }
if(val=='*'){
  Serial.println("*");
   vezes();
 }
 if(val=='/'){
   Serial.println("/");
   divisao();
 }
 if(val=='@'){
   Serial.println("@");
   arroba();
 }
 if(val== 195){
   Serial.println("-&-");
   others();
 }

}

//___________________________________________symbols


//___________________________________________________SERVO______________________________

//_____________________________________servo01
void Pi1 () {
  for(pos = ang; pos >= 0; pos--)
  {
    s1.write(pos);
  delay(2);
  }
}
void Pf1 () {
  for(pos =0; pos < ang; pos++)  
  {
   s1.write(pos);
    delay(2);
 }
}
//_______________________________________________

//_____________________________________servo02
void Pi2 () {
  for(pos = ang; pos >= 0; pos--)
  {
    s2.write(pos);
  delay(2);
  }
}
void Pf2 () {
  for(pos =0; pos < ang; pos++)  
  {
   s2.write(pos);
    delay(2);
 }
}
//____________________________________________

//_____________________________________servo03
void Pi3 () {
  for(pos = ang; pos >= 0; pos--)
  {
    s3.write(pos);
  delay(2);
  }
}
void Pf3 () {
  for(pos =0; pos < ang; pos++)  
  {
   s3.write(pos);
    delay(2);
 }
}
//____________________________________________

//_____________________________________servo04
void Pi4 () {
  for(pos = ang; pos >= 0; pos--)
  {
    s4.write(pos);
  delay(2);
  }
}
void Pf4 () {
  for(pos =0; pos < ang; pos++)  
  {
   s4.write(pos);
    delay(2);
 }
}

//_______________________________________

//_____________________________________servo05
void Pi5 () {
  for(pos = ang; pos >= 0; pos--)
  {
    s5.write(pos);
  delay(2);
  }
}
void Pf5 () {
  for(pos =0; pos < ang; pos++)  
  {
   s5.write(pos);
    delay(2);
 }
}

//__________________________________________

//_____________________________________servo06
void Pi6 () {
  for(pos = ang; pos >= 0; pos--)
  {
    s6.write(pos);
  delay(2);
  }
}
void Pf6 () {
  for(pos =0; pos < ang; pos++)  
  {
   s6.write(pos);
    delay(2);
 }
}
//___________________________________________


//______________________________________________________FUNCTIONS_________________________________________________
void off() {
   Pi1();
   Pi2();
   Pi3();
   
   Pi4();
   Pi5();
   Pi6();
 
}


void a (){
   Pf1();
   Pi2();
   Pi3();
   
   Pi4();
   Pi5();
   Pi6();
 delay(time1);

  off (); 
 
  delay(time2);

}


void b(){
   Pf1();
   Pf2();
   Pi3();
   
   Pi4();
   Pi5();
   Pi6();
 delay(time1);

  off ();
  
 delay(time2);

}


void c (){
 
   Pf1();
   Pi2();
   Pi3();
   
   Pf4();
   Pi5();
   Pi6();
 

 delay(time1);
 off();
   delay(time2);

}


void d(){
   Pf1();
   Pi2();
   Pi3();
   
   Pf4();
   Pf5();
   Pi6();

 
 delay(time1);

 off();
   delay(time2);

}


void e(){
     
   Pf1();
   Pi2();
   Pi3();
   
   Pi4();
   Pf5();
   Pi6();
 delay(time1);

 off(); 
   delay(time2);

}


void f (){ 

   Pf1();
   Pf2();
   Pi3();
   
   Pf4();
   Pi5();
   Pi6();
 delay(time1);

 off();
   delay(time2);

}


void g (){

   Pf1();
   Pf2();
   Pi3();
   
   Pf4();
   Pf5();
   Pi6();
 delay(time1);

 off();
   delay(time2);

}


void h (){
   
   Pf1();
   Pf2();
   Pi3();
   
   Pi4();
   Pf5();
   Pi6();
 delay(time1);

 off();
   delay(time2);

}
void i(){
    
   Pi1();
   Pf2();
   Pi3();
   
   Pf4();
   Pi5();
   Pi6();
 delay(time1);

 off(); 
   delay(time2);

}


void j(){
    
   Pi1();
   Pf2();
   Pi3();
   
   Pf4();
   Pf5();
   Pi6();
 delay(time1);
 off(); 
   delay(time2);

}


void k (){
    
   Pf1();
   Pi2();
   Pi3();
   
   Pf4();
   Pi5();
   Pi6();
 delay(time1);

 off(); 
   delay(time2);

}


void l(){
    
   Pf1();
   Pf2();
   Pf3();
   
   Pi4();
   Pi5();
   Pi6();
 delay(time1);
 off(); 
   delay(time2);

}


void m (){
  
   Pf1();
   Pi2();
   Pf3();
   
   Pf4();
   Pi5();
   Pi6();
 delay(time1);
 off();
   delay(time2);

}


void n (){
  
   Pf1();
   Pi2();
   Pf3();
   
   Pf4();
   Pf5();
   Pi6();
 delay(time1);

 off(); 
   delay(time2);

}


void o (){

   Pf1();
   Pi2();
   Pf3();
   
   Pi4();
   Pf5();
   Pi6();

 delay(time1);
 off();
   delay(time2);

}


void p (){
   
   Pf1();
   Pf2();
   Pf3();
   
   Pf4();
   Pi5();
   Pi6();
    
 delay(time1);

 off(); 
    delay(time2);

}


void q (){
  
   Pf1();
   Pf2();
   Pf3();
   
   Pf4();
   Pf5();
   Pi6();
 delay(time1);
 off(); 
   delay(time2);
}


void r (){
 
   Pf1();
   Pf2();
   Pf3();
   
   Pi4();
   Pf5();
   Pi6();
 delay(time1);
 off(); 
   delay(time2);
}


void s (){
   
   Pi1();
   Pf2();
   Pf3();
   
   Pf4();
   Pi5();
   Pi6(); 

 delay(time1);
 off();
   delay(time2);

}


void t (){
 
   Pi1();
   Pf2();
   Pf3();
   
   Pf4();
   Pf5();
   Pi6();
 delay(time1);
 off();
   delay(time2);
}


void u (){
   
   Pf1();
   Pi2();
   Pf3();
   
   Pi4();
   Pi5();
   Pf6();
 delay(time1);

 off(); 
   delay(time2);

}


void v (){
   
   Pf1();
   Pf2();
   Pf3();
   
   Pi4();
   Pi5();
   Pf6();

 delay(time1);
 off();
   delay(time2);

}


void w (){
    
   Pi1();
   Pf2();
   Pi3();
   
   Pf4();
   Pf5();
   Pf6();
 delay(time1);
 off();
   delay(time2);

}


void x (){
   Pf1();
   Pi2();
   Pf3();
   
   Pf4();
   Pi5();
   Pf6(); 
 delay(time1);

 off(); 
   delay(time2);

}


void y (){
 
   Pf1();
   Pi2();
   Pf3();
   
   Pf4();
   Pf5();
   Pf6();
 delay(time1);

  off();
   delay(time2);

}


void z (){

   Pf1();
   Pi2();
   Pf3();
   
   Pi4();
   Pf5();
   Pf6();
 delay(time1);

 off(); 
   delay(time2);

}


void Cedilha (){//ç

   Pf1();
   Pf2();
   Pf3();
   
   Pf4();
   Pi5();
   Pf6();
 delay(time1);

 off(); 
   delay(time2);

}


//__________________________________MSL(pre capital letter symbol)
void MSL (){
  
   Pi1();
   Pi2();
   Pi3();
   
   Pf4();
   Pi5();
   Pf6();
 delay(time1);

 off(); 
   delay(time2);

}



//_______________________________________SPACE
void space (){
  off();
   delay(1500);
   off();

}
// _______________________________________________________Alfabet__________________________________________





//_______________________________NMR (pre-number symbol)

void NMR () {

   Pi1();
   Pi2();
   Pf3();
   
   Pf4();
   Pf5();
   Pf6();
 delay(time1);

 off(); 
   delay(time2);

}


//________________________________________________________Numbers____________________________________________

void numero0(){
  Pi1();
   Pf2();
   Pi3();
   
   Pf4();
   Pf5();
   Pi6();
 delay(time1);

 off(); 
   delay(time2);
}


void numero1(){
  Pf1();
   Pi2();
   Pi3();
   
   Pi4();
   Pi5();
   Pi6();
 delay(time1);

 off(); 
   delay(time2);
}


void numero2(){
  Pf1();
   Pf2();
   Pi3();
   
   Pi4();
   Pi5();
   Pi6();
 delay(time1);

 off(); 
   delay(time2);
}


void numero3(){
  Pf1();
   Pi2();
   Pi3();
   
   Pf4();
   Pi5();
   Pi6();
 delay(time1);

 off(); 
   delay(time2);
}


void numero4(){
  Pf1();
   Pi2();
   Pi3();
   
   Pf4();
   Pf5();
   Pi6();
 delay(time1);

 off(); 
   delay(time2);
}


void numero5(){
  Pf1();
   Pi2();
   Pi3();
   
   Pi4();
   Pf5();
   Pi6();
 delay(time1);

 off(); 
   delay(time2);
}


void numero6(){
  Pf1();
   Pf2();
   Pi3();
   
   Pf4();
   Pi5();
   Pi6();
 delay(time1);

 off(); 
   delay(time2);
}


void numero7(){
  Pf1();
   Pf2();
   Pi3();
   
   Pf4();
   Pf5();
   Pi6();
 delay(time1);

 off(); 
   delay(time2);
}


void numero8(){
   Pf1();
   Pf2();
   Pi3();
   
   Pi4();
   Pf5();
   Pi6();
 delay(time1);

 off(); 
   delay(time2);
}


void numero9(){
    Pi1();
   Pf2();
   Pi3();
   
   Pf4();
   Pi5();
   Pi6();
 delay(time1);

 off(); 
   delay(time2);
}


//________________________________________________________Numbers____________________________________________


//________________________________Symbols___________________________
void virgula () {
    Pi1();
   Pf2();
   Pi3();
   
   Pi4();
   Pi5();
   Pi6();
 delay(time1);

 off(); 
   delay(time2);
}


void PontoeVirgula(){
    Pi1();
   Pf2();
   Pf3();
   
   Pi4();
   Pi5();
   Pi6();
 delay(time1);

 off(); 
   delay(time2);
}


void PontoOuApostofro(){
    Pi1();
   Pi2();
   Pf3();
   
   Pi4();
   Pi5();
   Pi6();
 delay(time1);

 off(); 
   delay(time2);
}


void Interrogacao(){
    Pi1();
   Pf2();
   Pi3();
   
   Pi4();
   Pi5();
   Pf6();
 delay(time1);

 off(); 
   delay(time2);
}
void exclamacao(){
   Pi1();
   Pf2();
   Pf3();
   
   Pi4();
   Pf5();
   Pi6();
 delay(time1);

 off(); 
   delay(time2);
}

void hifen(){
menos();
}

void AeFvirgulasAltas(){
  Pi1();
   Pf2();
   Pf3();
   
   Pi4();
   Pi5();
   Pf6();
 delay(time1);

 off(); 
   delay(time2);
}
void asterisco(){
  vezes();
}
void Ecomercial(){
  Pf1();
   Pf2();
   Pf3();
   
   Pf4();
   Pi5();
   Pf6();
 delay(time1);

 off(); 
   delay(time2);
}
void barraObliqua(){
 divisao();
}
void barraVertical(){
  Pi1();
   Pi2();
   Pi3();
   
   Pf4();
   Pf5();
   Pf6();
 delay(time1);

 off(); 
   delay(time2);
}
void Aparentes(){
  Pf1();
   Pf2();
   Pi3();
   
   Pi4();
   Pi5();
   Pf6();
 delay(time1);

 off(); 
   delay(time2);

     Pi1();
   Pi2();
   Pf3();
   
   Pi4();
   Pi5();
   Pi6();
 delay(time1);

 off(); 
   delay(time2);
}
void Fparentes(){
    Pi1();
   Pi2();
   Pi3();
   
   Pi4();
   Pi5();
   Pf6();
 delay(time1);

 off(); 
   delay(time2);

   Pi1();
   Pi2();
   Pf3();
   
   Pf4();
   Pf5();
   Pi6();
 delay(time1);

 off(); 
   delay(time2);
}
void AparentesRecto (){
      Pf1();
   Pf2();
   Pf3();
   
   Pi4();
   Pf5();
   Pf6();
 delay(time1);

 off(); 
   delay(time2);

   Pi1();
   Pi2();
   Pf3();
   
   Pi4();
   Pi5();
   Pi6();
 delay(time1);

 off(); 
   delay(time2);
}
void BparentesRecto(){
   Pi1();
   Pi2();
   Pi3();
   
   Pi4();
   Pi5();
   Pf6();
 delay(time1);

 off(); 
   delay(time2);

   Pi1();
   Pf2();
   Pf3();
   
   Pf4();
   Pf5();
   Pf6();
 delay(time1);

 off(); 
   delay(time2);
}
void cifrao(){
  Pi1();
   Pi2();
   Pi3();
   
   Pi4();
   Pf5();
   Pf6();
 delay(time1);

 off(); 
   delay(time2);
}
void porcentagem(){
  Pi1();
   Pi2();
   Pi3();
   
   Pf4();
   Pf5();
   Pf6();
 delay(time1);

 off(); 
   delay(time2);

   Pi1();
   Pi2();
   Pf3();
   
   Pi4();
   Pf5();
   Pf6();
 delay(time1);

 off(); 
   delay(time2);
}
void igual(){
  Pi1();
   Pf2();
   Pf3();
   
   Pi4();
   Pf5();
   Pf6();
 delay(time1);

 off(); 
   delay(time2);
}
void mais(){
  Pi1();
   Pf2();
   Pf3();
   
   Pi4();
   Pf5();
   Pi6();
 delay(time1);

 off(); 
   delay(time2);
}
void menos(){
  Pi1();
   Pi2();
   Pf3();
   
   Pi4();
   Pi5();
   Pf6();
 delay(time1);

 off(); 
   delay(time2);
}
void vezes(){
  Pi1();
   Pf2();
   Pf3();
   
   Pi4();
   Pi5();
   Pf6();
 delay(time1);

 off(); 
   delay(time2);
}
void divisao (){
  Pi1();
   Pf2();
   Pi3();
   
   Pi4();
   Pf5();
   Pf6();
 delay(time1);

 off(); 
   delay(time2);
}
void arroba(){
  Pi1();
   Pi2();
   Pf3();
   
   Pf4();
   Pf5();
   Pi6();
 delay(time1);

 off(); 
   delay(time2);
}
void others(){
  Ecomercial();
}
//_______________________________________________Symbols_____________________