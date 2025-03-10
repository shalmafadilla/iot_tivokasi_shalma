#include <Arduino.h> // Wajib untuk PlatformIO + ESP32

// Deklarasi pin LED
int red = 32;
int yellow = 33;
int green = 26;

void setup()
{
  Serial.begin(115200); // Inisialisasi komunikasi Serial
  Serial.println("=====TRAFFIC LIGHT=====");

  // Atur pin sebagai OUTPUT
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  // lampu merah
  Serial.println("Lampu Merah Nyala");
  digitalWrite(red, HIGH); // nyala
  delay(5000);             // Tunggu 5 detik
  Serial.println("Lampu Merah Mati");
  digitalWrite(red, LOW); // mati
  
  // lampu hijau
  Serial.println("Lampu Hijau Nyala");
  digitalWrite(green, HIGH); // nyala
  delay(2000);               // Tunggu 2 detik
  Serial.println("Lampu Hijau Mati");
  digitalWrite(green, LOW); // mati

  // lampu kuning 
  Serial.println("Lampu Kuning Berkedip");
  digitalWrite(yellow, HIGH); // nyala
  delay(300);                 // Tunggu 0,3 detik
  digitalWrite(yellow, LOW);  // mati
  delay(300);                 // Tunggu 0,3 detik
  digitalWrite(yellow, HIGH); // nyala
  delay(300);                 // Tunggu 0,3 detik
  digitalWrite(yellow, LOW);  // mati
  delay(300);                 // Tunggu 0,3 detik
  digitalWrite(yellow, HIGH); // nyala
  delay(300);                 // Tunggu 0,3 detik
  digitalWrite(yellow, LOW);  // mati
  delay(300);                 // Tunggu 0,3 detik
  digitalWrite(yellow, HIGH); // nyala
  delay(300);                 // Tunggu 0,3 detik
  digitalWrite(yellow, LOW);  // mati

  // menunggu sebelum mengulang
  delay(500); // Tunggu 0,5 detik
}
