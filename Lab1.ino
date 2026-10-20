void setup() {
  Serial.begin(9600);
  hello();


}

void loop() {
  Serial.println("Emb");
  delay(1000);

}
void hello(){
  Serial.println("Panaruj wat");
  Serial.println("tonmai.p24@gmail.com");
  Serial.println(16);
}