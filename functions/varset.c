void varSet() {
	platSet();
	wallSet();
	spikeSet();
	heartSet();
	skullSet();
	rockSet();
	rockReset();
	arrowSet();
	gatewaySet();
	eleSet();
	mapone->scrollX = 0;
	mapone->scrollY = 0;
	if (level == 1) {
		sprite->x = 220;
		sprite->y = 5;
		skullmax = 3;
	} else if (level == 2) {
		sprite->x = 220;
		sprite->y = 5;
		skullmax = 3;
	} else if (level == 3) {
		sprite->x = 220;
		sprite->y = 5;
		skullmax = 4;
	}
	speed = 13;
	walkspeed = 2;
	gravity = 3;
	sprite_position = RIGHT;
	death = 0;
	staminabar->stretchX = 200;
	rAnimCount = 0;
	rockCounter = 0;
	gamestart = 1;
	jumping = 0;
	gravitySucks();
	oslStopSound(mainbgm);
}