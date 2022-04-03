enum unicode_names {
	DIAM,
	TIMES,
	APPROX,
	PLUSMINUS,
	GTOET,
	LTOET
};

const uint32_t PROGMEM unicode_map[] = {
	[DIAM]  = 0x2300,
	[TIMES] = 0x00D7,
	[APPROX] = 0x2248,
	[PLUSMINUS] = 0x00B1,
	[GTOET] = 0x2265,
	[LTOET] = 0x2264
};
