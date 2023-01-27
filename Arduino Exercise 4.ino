void setup() {
// put your setup code here, to run once:
SegmentDisplay segmentDisplay(2, 3, 4, 5, 6, 7, 8, 9);
  for(int i = 9; i >= 0; i--){
    segmentDisplay.displayHex(i, false);
    delay(1500);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
