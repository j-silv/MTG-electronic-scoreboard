**SCROLLING END GAME MESSAGE FUNCTION**

A user will input a string into a function, so that this string will be scrolled across the 4-digit display

`scrollMessage("SCROLL THIS MESSAGE");`

Next, a function is called to divide this string into 4-byte chunks, where each byte corresponds to one of the 
digits on the 4-digit LED display. For example:

`chopString4(string);`

Result: a 2D array comprised of 4 bytes for each index. If the message was "SCROLL THIS MESSAGE", then -->

`choppedString4[] = {"___S", "__SC", "_SCR", "SCRO", "CROL", "ROLL" ...} ` etc. etc.

Now that the requested string is correctly cut into "4 digit chunks", the scrolling mechanism has 2 main parts:

- A multiplexing frequency (fmux) where each digit is displayed for a certain period
- A scrolling frequency (fscroll) where all 4 digits for a particular "frame" (essentially an element of choppedString4[]) are displayed for a certain period

The pseudo-ish code for this mechanism is as follows:

```
int i,j = 0; // counters for the different for loops

int currentDigit = 1; // placeholder to keep track of which digit is currently illuminated

currentDigitFrame[4] = {0}; // this array holds 4 bytes, where each byte is the LED segment encoded data for each digit

// Perform the algorithm for every single "frame", i.e. until the entire string is scrolled
for (i = 0, i < sizeof(choppedString4), i++) {

	// Get the LED segment data for each digit in the current "frame"
	for (j = 0, j < 4, j++) {
		currentDigitFrame[j] = convert2LEDseg(choppedString[i][j]);
	}
	
	timeOld = time();
	
	// Continue switching between each digit until it's time to scroll 
	while ((time() - timeOldScroll) < 1/fscroll) {
		
		// Once the multiplexing time is up, change which digit is currently turned on (taken care of in displayDigit function)
		for (j = 0, j < 4, j++) {
			displayDigit(currentDigitFrame[j]);
		}	
	}	
}

```
