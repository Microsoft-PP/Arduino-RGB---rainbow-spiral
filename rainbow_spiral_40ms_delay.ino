    #include <FastLED.h>
    #define NUM_LEDS 12
    #define DATA_PIN 2
    CRGB leds[NUM_LEDS];
    int speed = 40;  //change visual spin speed
    
void setup() {
  // put your setup code here, to run once:

    FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);
}

void loop() {
  // put your main code here, to run repeatedly:
  
    //ROUND 1 of 12
    leds[1] = CRGB(0,0,255);
    leds[2] = CRGB(0,128,255);
    leds[3] = CRGB(0,255,255);
    leds[4] = CRGB(0,255,128);
    leds[5] = CRGB(0,255,0);
    leds[6] = CRGB(128,255,0);
    leds[7] = CRGB(255,255,0);
    leds[8] = CRGB(255,128,0);
    leds[9] = CRGB(255,0,0);
    leds[10] = CRGB(255,0,128);
    leds[11] = CRGB(255,0,255);
    leds[12] = CRGB(128,0,255);
    FastLED.show();
    delay(speed);
    
      //ROUND 2 of 12
    leds[2] = CRGB(0,0,255);
    leds[3] = CRGB(0,128,255);
    leds[4] = CRGB(0,255,255);
    leds[5] = CRGB(0,255,128);
    leds[6] = CRGB(0,255,0);
    leds[7] = CRGB(128,255,0);  
    leds[8] = CRGB(255,255,0);
    leds[9] = CRGB(255,128,0);
    leds[10] = CRGB(255,0,0);
    leds[11] = CRGB(255,0,128);
    leds[12] = CRGB(255,0,255);
    leds[1] = CRGB(128,0,255);
    FastLED.show();
    delay(speed);
    
        //ROUND 3 of 12
    leds[3] = CRGB(0,0,255);
    leds[4] = CRGB(0,128,255);
    leds[5] = CRGB(0,255,255);
    leds[6] = CRGB(0,255,128);
    leds[7] = CRGB(0,255,0);
    leds[8] = CRGB(128,255,0);  
    leds[9] = CRGB(255,255,0);
    leds[10] = CRGB(255,128,0);
    leds[11] = CRGB(255,0,0);
    leds[12] = CRGB(255,0,128);
    leds[1] = CRGB(255,0,255);
    leds[2] = CRGB(128,0,255);
    FastLED.show();
    delay(speed);
    
        //ROUND 4 of 12
    leds[4] = CRGB(0,0,255);
    leds[5] = CRGB(0,128,255);
    leds[6] = CRGB(0,255,255);
    leds[7] = CRGB(0,255,128);
    leds[8] = CRGB(0,255,0);
    leds[9] = CRGB(128,255,0);  
    leds[10] = CRGB(255,255,0);
    leds[11] = CRGB(255,128,0);
    leds[12] = CRGB(255,0,0);
    leds[1] = CRGB(255,0,128);
    leds[2] = CRGB(255,0,255);
    leds[3] = CRGB(128,0,255);
    FastLED.show();
    delay(speed);
    
            //ROUND 5 of 12
    leds[5] = CRGB(0,0,255);
    leds[6] = CRGB(0,128,255);
    leds[7] = CRGB(0,255,255);
    leds[8] = CRGB(0,255,128);
    leds[9] = CRGB(0,255,0);
    leds[10] = CRGB(128,255,0);  
    leds[11] = CRGB(255,255,0);
    leds[12] = CRGB(255,128,0);
    leds[1] = CRGB(255,0,0);
    leds[2] = CRGB(255,0,128);
    leds[3] = CRGB(255,0,255);
    leds[4] = CRGB(128,0,255);
    FastLED.show();
    delay(speed);
        
            //ROUND 6 of 12
    leds[6] = CRGB(0,0,255);
    leds[7] = CRGB(0,128,255);
    leds[8] = CRGB(0,255,255);
    leds[9] = CRGB(0,255,128);
    leds[10] = CRGB(0,255,0);
    leds[11] = CRGB(128,255,0);  
    leds[12] = CRGB(255,255,0);
    leds[1] = CRGB(255,128,0);
    leds[2] = CRGB(255,0,0);
    leds[3] = CRGB(255,0,128);
    leds[4] = CRGB(255,0,255);
    leds[5] = CRGB(128,0,255);
    FastLED.show();
    delay(speed);
            
            //ROUND 7 of 12
    leds[7] = CRGB(0,0,255);
    leds[8] = CRGB(0,128,255);
    leds[9] = CRGB(0,255,255);
    leds[10] = CRGB(0,255,128);
    leds[11] = CRGB(0,255,0);
    leds[12] = CRGB(128,255,0);  
    leds[1] = CRGB(255,255,0);
    leds[2] = CRGB(255,128,0);
    leds[3] = CRGB(255,0,0);
    leds[4] = CRGB(255,0,128);
    leds[5] = CRGB(255,0,255);
    leds[6] = CRGB(128,0,255);
    FastLED.show();
    delay(speed);
                
            //ROUND 8 of 12
    leds[8] = CRGB(0,0,255);
    leds[9] = CRGB(0,128,255);
    leds[10] = CRGB(0,255,255);
    leds[11] = CRGB(0,255,128);
    leds[12] = CRGB(0,255,0);
    leds[1] = CRGB(128,255,0);  
    leds[2] = CRGB(255,255,0);
    leds[3] = CRGB(255,128,0);
    leds[4] = CRGB(255,0,0);
    leds[5] = CRGB(255,0,128);
    leds[6] = CRGB(255,0,255);
    leds[7] = CRGB(128,0,255);
    FastLED.show();
    delay(speed);
                    
            //ROUND 9 of 12
    leds[9] = CRGB(0,0,255);
    leds[10] = CRGB(0,128,255);
    leds[11] = CRGB(0,255,255);
    leds[12] = CRGB(0,255,128);
    leds[1] = CRGB(0,255,0);
    leds[2] = CRGB(128,255,0);  
    leds[3] = CRGB(255,255,0);
    leds[4] = CRGB(255,128,0);
    leds[5] = CRGB(255,0,0);
    leds[6] = CRGB(255,0,128);
    leds[7] = CRGB(255,0,255);
    leds[8] = CRGB(128,0,255);
    FastLED.show();
    delay(speed);
                        
            //ROUND 10 of 12
    leds[10] = CRGB(0,0,255);
    leds[11] = CRGB(0,128,255);
    leds[12] = CRGB(0,255,255);
    leds[1] = CRGB(0,255,128);
    leds[2] = CRGB(0,255,0);
    leds[3] = CRGB(128,255,0);  
    leds[4] = CRGB(255,255,0);
    leds[5] = CRGB(255,128,0);
    leds[6] = CRGB(255,0,0);
    leds[7] = CRGB(255,0,128);
    leds[8] = CRGB(255,0,255);
    leds[9] = CRGB(128,0,255);
    FastLED.show();
    delay(speed);
                            
            //ROUND 11 of 12
    leds[11] = CRGB(0,0,255);
    leds[12] = CRGB(0,128,255);
    leds[1] = CRGB(0,255,255);
    leds[2] = CRGB(0,255,128);
    leds[3] = CRGB(0,255,0);
    leds[4] = CRGB(128,255,0);  
    leds[5] = CRGB(255,255,0);
    leds[6] = CRGB(255,128,0);
    leds[7] = CRGB(255,0,0);
    leds[8] = CRGB(255,0,128);
    leds[9] = CRGB(255,0,255);
    leds[10] = CRGB(128,0,255);
    FastLED.show();
    delay(speed);
                                
            //ROUND 12 of 12
    leds[12] = CRGB(0,0,255);
    leds[1] = CRGB(0,128,255);
    leds[2] = CRGB(0,255,255);
    leds[3] = CRGB(0,255,128);
    leds[4] = CRGB(0,255,0);
    leds[5] = CRGB(128,255,0);  
    leds[6] = CRGB(255,255,0);
    leds[7] = CRGB(255,128,0);
    leds[8] = CRGB(255,0,0);
    leds[9] = CRGB(255,0,128);
    leds[10] = CRGB(255,0,255);
    leds[11] = CRGB(128,0,255);
    FastLED.show();
    delay(speed);
}
