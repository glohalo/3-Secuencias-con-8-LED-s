// ----------------------------------------------------------------------------
// INIT ALL LED PINS AS OUTPUTS
// ----------------------------------------------------------------------------
void setup() {
    pinMode(0, OUTPUT);
    pinMode(1, OUTPUT);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
}

// ----------------------------------------------------------------------------
// MAIN LOOP
// ----------------------------------------------------------------------------
void loop() {

    pattern1(3);
    pattern2(3);
    pattern3(8);

}


// ----------------------------------------------------------------------------
// PATTERN 1
// ----------------------------------------------------------------------------
void pattern1(int times) {

    // TURN ON ALL LEDS
    for (int i = 0; i < 8; ++i) {
        digitalWrite(i, HIGH);
    }

    // REPEAT "TIMES" TIMES
    for (int i = 0; i < times; ++i) {

        // TURN OFF LED
        for (int i = 0; i < 8; ++i) {
            digitalWrite(i, LOW);
            delay(300);
        }

        // TURN ON ALL LEDS
        for (int i = 0; i < 8; ++i) {
            digitalWrite(i, HIGH);
            delay(300);
        }
    }

}


// ----------------------------------------------------------------------------
// PATTERN 2
// ----------------------------------------------------------------------------
void pattern2(int times) {
    
    // TURN ON ALL LEDS
    for (int i = 0; i < 8; ++i) {
        digitalWrite(i, HIGH);
    }

    // REPEAT "TIMES" TIMES
    for (int i = 0; i < times; ++i) {

        // TURN OFF LED
        for (int i = 7; i < 0; --i) {
            digitalWrite(i, LOW);
            delay(300);
        }

        // TURN ON ALL LEDS
        for (int i = 7; i < 0; --i) {
            digitalWrite(i, HIGH);
            delay(300);
        }
    }
}


// ----------------------------------------------------------------------------
// PATTERN 3
// ----------------------------------------------------------------------------
void pattern3(int times) {

    // TURN ON ALL LEDS
    for (int i = 0; i < 8; ++i) {
        digitalWrite(i, HIGH);
    }

    // REPEAT "TIMES" TIMES
    for (int i = 0; i < times; ++i) {

        // ON 
        for (int i = 0; i < 8; ++i) {
            digitalWrite(i, i % 2 == 0 ? LOW : HIGH);
        }
        delay(300);

        for (int i = 0; i < 8; ++i) {
            digitalWrite(i, i % 2 == 0 ? HIGH : LOW);
        }
        delay(300);

    }    

}