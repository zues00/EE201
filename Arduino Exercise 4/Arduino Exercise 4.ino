void setup() {
// put your setup code here, to run once:
  SegmentDisplay segmentDisplay(2, 3, 4, 5, 6, 7, 8, 9); #//displays numbers
  for(int i = 9; i >= 0; i--) // for loop ffrom 9 to 0
  {
    segmentDisplay.displayHex(i, false);  
    delay(1500); //delay of 1500 ns
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
