#include <Arduino.h>
#include "Adafruit_NeoPixel.h"
// #include "FastLED.h"

#define LED_PIN1     27
#define LED_PIN2     26
#define LED_PIN3     25
#define LED_PIN4     32

#define Blink_led 21

#define LED_COUNT1  8

#define BRIGHTNESS 50 // Set BRIGHTNESS to about 1/5 (max = 255)

Adafruit_NeoPixel strip1(LED_COUNT1, LED_PIN1, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip2(LED_COUNT1, LED_PIN2, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip3(LED_COUNT1, LED_PIN3, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip4(LED_COUNT1, LED_PIN4, NEO_GRB + NEO_KHZ800);


void offFull(int time);
void showAllcolor(uint8_t red, uint8_t green, uint8_t blue, int timedelay);
void clearALl();
void loopBlink(uint8_t red, uint8_t green, uint8_t blue, int numberLoop, int timeDelay);

void setup() {

  pinMode(Blink_led, OUTPUT);

  strip1.begin();           // INITIALIZE NeoPixel strip object (REQUIRED)
  strip2.begin();           // INITIALIZE NeoPixel strip object (REQUIRED)
  strip3.begin();           // INITIALIZE NeoPixel strip object (REQUIRED)
  strip4.begin();           // INITIALIZE NeoPixel strip object (REQUIRED)
}


void loop() {
  digitalWrite(Blink_led, HIGH);
  delay(200);
  digitalWrite(Blink_led, LOW);
  delay(200);
  
  clearALl();

/* BLUE */
  for (int i = 0; i < LED_COUNT1; i++)
  {
    /* code */
    strip1.setPixelColor(i, strip1.Color(0,0, 255));
    strip1.show();
    strip2.setPixelColor(i, strip2.Color(0,0, 255));
    strip2.show();
    strip3.setPixelColor(i, strip3.Color(0,0, 255));
    strip3.show();
    strip4.setPixelColor(i, strip4.Color(0,0, 255));
    strip4.show();
    delay(125);
  }

  clearALl();

      for (int i = 7; i >= 0; i--)
  {
    strip1.setPixelColor(i, strip1.Color(0,0, 255));
    strip1.show();
    strip2.setPixelColor(i, strip2.Color(0,0, 255));
    strip2.show();
    strip3.setPixelColor(i, strip3.Color(0,0, 255));
    strip3.show();
    strip4.setPixelColor(i, strip4.Color(0,0, 255));
    strip4.show();
    delay(125);
  }

  offFull(500);


  showAllcolor(0, 0, 255, 1000);

  offFull(500);

  showAllcolor(0, 0, 255, 1000);

  clearALl();

  for ( int i = 0; i < LED_COUNT1; i= i+2)
  {
    /* code */
    strip1.setPixelColor(i, strip1.Color(255,0,0));
    strip1.show();
    strip2.setPixelColor(i, strip2.Color(255,0, 0));
    strip2.show();
    strip3.setPixelColor(i, strip3.Color(255,0, 0));
    strip3.show();
    strip4.setPixelColor(i, strip4.Color(255,0, 0));
    strip4.show();
    delay(175);
  }

  for ( int i = 7; i >= 0; i= i-2)
  {
    /* code */
    strip1.setPixelColor(i, strip1.Color(255,0,0));
    strip1.show();
    strip2.setPixelColor(i, strip2.Color(255,0, 0));
    strip2.show();
    strip3.setPixelColor(i, strip3.Color(255,0, 0));
    strip3.show();
    strip4.setPixelColor(i, strip4.Color(255,0, 0));
    strip4.show();
    delay(175);
  } 

  offFull(800);

    for ( int i = 0; i < LED_COUNT1; i= i+2)
  {
    /* code */
    strip1.setPixelColor(i, strip1.Color(255,0,0));
    strip1.show();
    strip2.setPixelColor(i, strip2.Color(255,0, 0));
    strip2.show();
    strip3.setPixelColor(i, strip3.Color(255,0, 0));
    strip3.show();
    strip4.setPixelColor(i, strip4.Color(255,0, 0));
    strip4.show();
    delay(175);
  }

  for ( int i = 7; i >= 0; i= i-2)
  {
    /* code */
    strip1.setPixelColor(i, strip1.Color(255,0,0));
    strip1.show();
    strip2.setPixelColor(i, strip2.Color(255,0, 0));
    strip2.show();
    strip3.setPixelColor(i, strip3.Color(255,0, 0));
    strip3.show();
    strip4.setPixelColor(i, strip4.Color(255,0, 0));
    strip4.show();
    delay(175);
  } 

  offFull(800);
  showAllcolor(255, 0, 0, 1000); 
  clearALl();


  /*GREEN*/

    for (int i = 0; i < LED_COUNT1; i++)
  {
    /* code */
    strip1.setPixelColor(i, strip1.Color(0,255, 0));
    strip4.setPixelColor(7-i, strip4.Color(0,255, 0));
    strip4.show();
    strip1.show();
    delay(125);
  }

      for (int i = 0; i < LED_COUNT1; i++)
  {
    /* code */
    strip2.setPixelColor(i, strip2.Color(0,255, 0));
    strip2.show();
    strip3.setPixelColor(7-i, strip3.Color(0,255, 0));
    strip3.show();
    delay(110);
  }

  offFull(600);

  for (int i = 7; i >= 0; i--)
  {
    strip2.setPixelColor(i, strip2.Color(0,255, 0));
    strip2.show();
    delay(125);
  }

  for (int i = 7; i >= 0; i--)
  {
    strip1.setPixelColor(i, strip1.Color(0,255, 0));
    strip1.show();
    delay(125);
  }

  for (int i = 0; i < LED_COUNT1; i++)
  {
    /* code */
    strip3.setPixelColor(i, strip3.Color(0,255, 0));
    strip3.show();
    delay(125);
  }

  for (int i = 0; i < LED_COUNT1; i++)
  {
    /* code */
    strip4.setPixelColor(i, strip4.Color(0,255, 0));
    strip4.show();
    delay(125);
  }

  offFull(350);

  showAllcolor(0, 255, 0, 400);

  offFull(350);

  showAllcolor(0, 255, 0, 400);

  offFull(350);

  showAllcolor(0, 255, 0, 400);

  offFull(350);




/* DarkOrange1 */
  int i= 7 ,u = 7; 

  do
  {
    /* code */
    for(int j = 0; j <= 7; j++)
    {
      strip1.setPixelColor(j, strip1.Color(255,127, 0));
      strip4.setPixelColor(7-j, strip4.Color(255,127, 0));
      strip1.show();
      strip4.show();
      delay(95);
      strip1.setPixelColor(j, strip1.Color(0,0, 0));
      
      strip4.setPixelColor(7-j, strip4.Color(0,0, 0));
      strip1.show();
      strip4.show();
      delay(95);
    }
    for(int j = 0; j <= i; j++)
    {
      strip2.setPixelColor(j, strip1.Color(255,127, 0));
      
      strip3.setPixelColor(7-j, strip3.Color(255,127, 0));
      strip2.show();
      strip3.show();
      delay(95);
      strip2.setPixelColor(j, strip1.Color(0,0, 0));
      
      strip3.setPixelColor(7-j, strip3.Color(0,0, 0));
      strip2.show();
      strip3.show();
      delay(95);
    }

  strip2.setPixelColor(i, strip2.Color(255,127, 0));
  strip3.setPixelColor(7-i, strip3.Color(255,127, 0));
  strip2.show();
  strip3.show();
  i--;
  } while(i >= 0);

  do
  {
    /* code */
    for(int j = 0; j <= u; j++)
    {
      strip1.setPixelColor(j, strip1.Color(255,127, 0));
      strip4.setPixelColor(7-j, strip4.Color(255,127, 0));
      strip1.show();
      strip4.show();
      delay(95);
      strip1.setPixelColor(j, strip1.Color(0,0, 0));
      strip4.setPixelColor(7-j, strip4.Color(0,0, 0));
      strip1.show();
      strip4.show();
      delay(95);
    }
    strip1.setPixelColor(u, strip1.Color(255,127, 0));
    strip4.setPixelColor(7-u, strip4.Color(255,127, 0));
    strip1.show();
    strip4.show();
    u--;
  } while (u>=0);
  
  delay(3000);

  offFull(1000);



/*(255, 62, 150)*/
  for (int i = 0; i < LED_COUNT1; i++)
  {
    /* code */
    strip1.setPixelColor(i, strip1.Color(255, 62, 150));
    strip1.show();
    delay(110);
  }
  for (int i = 0; i < LED_COUNT1; i++)
  {
    /* code */
    strip2.setPixelColor(i, strip2.Color(255, 62, 150));
    strip2.show();
    delay(110);
  }
  for (int i = 0; i < LED_COUNT1; i++)
  {
    /* code */
    strip3.setPixelColor(i, strip3.Color(255, 62, 150));
    strip3.show();
    delay(110);
  }
  for (int i = 0; i < LED_COUNT1; i++)
  {
    /* code */
    strip4.setPixelColor(i, strip4.Color(255, 62, 150));
    strip4.show();
    delay(110);
  }
  offFull(1000);
  for (int i = 7; i >= 0; i--)
  {
    /* code */
    strip4.setPixelColor(i, strip4.Color(255, 62, 150));
    strip4.show();
    delay(110);
  }
  for (int i = 7; i >= 0; i--)
  {
    /* code */
    strip3.setPixelColor(i, strip3.Color(255, 62, 150));
    strip3.show();
    delay(110);
  }
  for (int i = 7; i >= 0; i--)
  {
    /* code */
    strip2.setPixelColor(i, strip2.Color(255, 62, 150));
    strip2.show();
    delay(110);
  }
  for (int i = 7; i >= 0; i--)
  {
    /* code */
    strip1.setPixelColor(i, strip1.Color(255, 62, 150));
    strip1.show();
    delay(110);
  }
  loopBlink(255,62, 150, 4, 350);


/* (255, 106, 106) */







}

void loopBlink(uint8_t red, uint8_t green, uint8_t blue, int numberLoop, int timeDelay)
{
  for (int i = 0; i < numberLoop; i++)
  {
  offFull(timeDelay);
  showAllcolor(red, green, blue, timeDelay);
  }
}

void clearALl()
{
  strip1.clear();
  strip2.clear();
  strip3.clear();
  strip4.clear();
}


void offFull(int time)
{
  strip1.clear();
  strip2.clear();
  strip3.clear();
  strip4.clear();

        for (int i = 0; i < LED_COUNT1; i++)
  {
    /* code */
    strip1.setPixelColor(i, strip1.Color(0,0,0));
    strip2.setPixelColor(i, strip2.Color(0,0,0));
    strip3.setPixelColor(i, strip3.Color(0,0,0));
    strip4.setPixelColor(i, strip4.Color(0,0,0));
  }

  strip1.show();
  strip2.show();
  strip3.show();
  strip4.show();
  delay(time);
}

void showAllcolor(uint8_t red, uint8_t green, uint8_t blue, int timedelay)
{
  for (int i = 0; i < LED_COUNT1; i++)
  {
    /* code */
    strip1.setPixelColor(i, strip1.Color(red,green,blue));
    strip2.setPixelColor(i, strip2.Color(red,green,blue));
    strip3.setPixelColor(i, strip3.Color(red,green,blue));
    strip4.setPixelColor(i, strip4.Color(red,green,blue));
  }
  strip1.show();
  strip2.show();
  strip3.show();
  strip4.show();
  delay(timedelay);
}
// void whiteOverRainbow(int whiteSpeed, int whiteLength) {

//   if(whiteLength >= strip.numPixels()) whiteLength = strip.numPixels() - 1;

//   int      head          = whiteLength - 1;
//   int      tail          = 0;
//   int      loops         = 3;
//   int      loopNum       = 0;
//   uint32_t lastTime      = millis();
//   uint32_t firstPixelHue = 0;

//   for(;;) { // Repeat forever (or until a 'break' or 'return')
//     for(int i=0; i<strip.numPixels(); i++) {  // For each pixel in strip...
//       if(((i >= tail) && (i <= head)) ||      //  If between head & tail...
//          ((tail > head) && ((i >= tail) || (i <= head)))) {
//         strip.setPixelColor(i, strip.Color(0, 0, 0, 255)); // Set white
//       } else {                                             // else set rainbow
//         int pixelHue = firstPixelHue + (i * 65536L / strip.numPixels());
//         strip.setPixelColor(i, strip.gamma32(strip.ColorHSV(pixelHue)));
//       }
//     }

//     strip.show(); // Update strip with new contents
//     // There's no delay here, it just runs full-tilt until the timer and
//     // counter combination below runs out.

//     firstPixelHue += 40; // Advance just a little along the color wheel

//     if((millis() - lastTime) > whiteSpeed) { // Time to update head/tail?
//       if(++head >= strip.numPixels()) {      // Advance head, wrap around
//         head = 0;
//         if(++loopNum >= loops) return;
//       }
//       if(++tail >= strip.numPixels()) {      // Advance tail, wrap around
//         tail = 0;
//       }
//       lastTime = millis();                   // Save time of last movement
//     }
//   }
// }

// void pulseWhite(uint8_t wait) {
//   for(int j=0; j<256; j++) { // Ramp up from 0 to 255
//     // Fill entire strip with white at gamma-corrected brightness level 'j':
//     strip.fill(strip.Color(0, 0, 0, strip.gamma8(j)));
//     strip.show();
//     delay(wait);
//   }

//   for(int j=255; j>=0; j--) { // Ramp down from 255 to 0
//     strip.fill(strip.Color(0, 0, 0, strip.gamma8(j)));
//     strip.show();
//     delay(wait);
//   }
// }

// void rainbowFade2White(int wait, int rainbowLoops, int whiteLoops) {
//   int fadeVal=0, fadeMax=100;

//   // Hue of first pixel runs 'rainbowLoops' complete loops through the color
//   // wheel. Color wheel has a range of 65536 but it's OK if we roll over, so
//   // just count from 0 to rainbowLoops*65536, using steps of 256 so we
//   // advance around the wheel at a decent clip.
//   for(uint32_t firstPixelHue = 0; firstPixelHue < rainbowLoops*65536;
//     firstPixelHue += 256) {

//     for(int i=0; i<strip.numPixels(); i++) { // For each pixel in strip...

//       // Offset pixel hue by an amount to make one full revolution of the
//       // color wheel (range of 65536) along the length of the strip
//       // (strip.numPixels() steps):
//       uint32_t pixelHue = firstPixelHue + (i * 65536L / strip.numPixels());

//       // strip.ColorHSV() can take 1 or 3 arguments: a hue (0 to 65535) or
//       // optionally add saturation and value (brightness) (each 0 to 255).
//       // Here we're using just the three-argument variant, though the
//       // second value (saturation) is a constant 255.
//       strip.setPixelColor(i, strip.gamma32(strip.ColorHSV(pixelHue, 255,
//         255 * fadeVal / fadeMax)));
//     }

//     strip.show();
//     delay(wait);

//     if(firstPixelHue < 65536) {                              // First loop,
//       if(fadeVal < fadeMax) fadeVal++;                       // fade in
//     } else if(firstPixelHue >= ((rainbowLoops-1) * 65536)) { // Last loop,
//       if(fadeVal > 0) fadeVal--;                             // fade out
//     } else {
//       fadeVal = fadeMax; // Interim loop, make sure fade is at max
//     }
//   }

//   for(int k=0; k<whiteLoops; k++) {
//     for(int j=0; j<256; j++) { // Ramp up 0 to 255
//       // Fill entire strip with white at gamma-corrected brightness level 'j':
//       strip.fill(strip.Color(0, 0, 0, strip.gamma8(j)));
//       strip.show();
//     }
//     delay(1000); // Pause 1 second
//     for(int j=255; j>=0; j--) { // Ramp down 255 to 0
//       strip.fill(strip.Color(0, 0, 0, strip.gamma8(j)));
//       strip.show();
//     }
//   }

//   delay(500); // Pause 1/2 second
// }