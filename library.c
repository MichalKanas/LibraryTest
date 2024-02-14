/* Using API function gpio_toggle(): */
	
	void blink()
	{

		gpio_toggle(LEDPORT, LEDPIN);	/* LED on/off */
		for (i = 0; i < 10000; i++) {	/* Wait a bit. */
			__asm__("nop");
			}
			}
