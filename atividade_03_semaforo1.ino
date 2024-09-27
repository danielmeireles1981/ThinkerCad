#define VM_a 4
#define AM_a 5
#define VD_a 6
#define VM_b 7
#define AM_b 8
#define VD_b 9

void setup() {
  pinMode(VM_a, OUTPUT);
  pinMode(AM_a, OUTPUT);
  pinMode(VD_a, OUTPUT);
  pinMode(VM_b, OUTPUT);
  pinMode(AM_b, OUTPUT);
  pinMode(VD_b, OUTPUT);

  digitalWrite(VM_a, HIGH);  // Começa com vermelho
  digitalWrite(AM_a, LOW);
  digitalWrite(VD_a, LOW);
  digitalWrite(VM_b, HIGH);  // Começa com vermelho
  digitalWrite(AM_b, LOW);
  digitalWrite(VD_b, LOW);
}

void loop() {
  // Sinal verde para carros
  digitalWrite(VM_a, LOW);
  digitalWrite(AM_a, LOW);
  digitalWrite(VD_a, HIGH);
  
  digitalWrite(VM_b, HIGH);
  digitalWrite(AM_b, LOW);
  digitalWrite(VD_b, LOW);
  
  delay(5000);  // Espera por 5 segundos
  
  // Sinal amarelo para carros
  digitalWrite(VM_a, HIGH);
  digitalWrite(AM_a, HIGH);
  digitalWrite(VD_a, LOW);
  
  digitalWrite(VM_b, HIGH);
  digitalWrite(AM_b, HIGH);
  digitalWrite(VD_b, LOW);
  
  delay(2000);  // Espera por 2 segundos
  
  // Sinal vermelho para carros
  digitalWrite(VM_a, HIGH);
  digitalWrite(AM_a, LOW);
  digitalWrite(VD_a, LOW);
  
  digitalWrite(VM_b, LOW);
  digitalWrite(AM_b, LOW);
  digitalWrite(VD_b, HIGH);
  
  delay(5000);  // Espera por 5 segundos
}
