/* Using API function gpio_toggle(): */
		gpio_toggle(LEDPORT, LEDPIN);	/* LED on/off */
		for (i = 0; i < 10000; i++) {	/* Wait a bit. */
			__asm__("nop");