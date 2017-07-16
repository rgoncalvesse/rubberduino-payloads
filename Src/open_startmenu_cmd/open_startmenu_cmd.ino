#include <Keyboard.h>

void setup() {

	// Start CMD

	Keyboard.begin();
	delay(1000);
	
	Keyboard.press(KEY_LEFT_GUI);
	delay(50);

	Keyboard.releaseAll();
	delay(200);

	Keyboard.print("cmd");
	delay(50);

	Keyboard.press(KEY_RETURN);
	delay(50);

	Keyboard.releaseAll();
	delay(50);

}

void loop() {
	

}
