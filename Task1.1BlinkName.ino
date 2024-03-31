// Define LED pin
const int LED_PIN = 13; // Change this to the actual pin number where your LED is connected

// Define dot and dash duration in milliseconds
const int DOT_DURATION = 500;
const int DASH_DURATION = 3 * DOT_DURATION;
const int LETTER_SPACE_DURATION = DOT_DURATION;
const int WORD_SPACE_DURATION = 3 * DOT_DURATION;


// Function for a dot (short blink)
void dot() {
  digitalWrite(LED_PIN, HIGH);
  delay(DOT_DURATION);
  digitalWrite(LED_PIN, LOW);
  delay(LETTER_SPACE_DURATION); // Delay between blinks
}

// Function for a dash (long blink)
void dash() {
  digitalWrite(LED_PIN, HIGH);
  delay(DASH_DURATION);
  digitalWrite(LED_PIN, LOW);
  delay(LETTER_SPACE_DURATION); // Delay between blinks
}

// Function to blink the Morse code for 'S'
void blinkS() {
  dot(); dot(); dot();
}

// Function to blink the Morse code for 'A'
void blinkA() {
  dot(); dash();
}

// Function to blink the Morse code for 'H'
void blinkH() {
  dot(); dot(); dot(); dot();
}

// Function to blink the Morse code for 'N'
void blinkN() {
  dash(); dot();
}

// Function to handle delay between words
void delayBetweenWords() {
  delay(WORD_SPACE_DURATION);
}

void setup() {
  pinMode(LED_PIN, OUTPUT); // Initialize LED pin as output
  
  // Blink the Morse code for 'S'
  blinkS();
  delayBetweenWords();

  // Blink the Morse code for 'A'
  blinkA();
  delayBetweenWords();

  // Blink the Morse code for 'H'
  blinkH();
  delayBetweenWords();

  // Blink the Morse code for 'A'
  blinkA();
  delayBetweenWords();

  // Blink the Morse code for 'N'
  blinkN();
}

void loop() {

}
