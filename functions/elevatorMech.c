int elevator(int dist, int platVar, int speed, 
	int spriteVar, int col, int distTravelled) {
	if (distTravelled != dist) {
		platVar += speed;
		if (col == 1) spriteVar += speed;
		distTravelled += speed;
	} else if (distTravelled == dist) {
		speed *= -1;
		distTravelled = 0;
	} else return 0;
	return 1;
}

/* Example:
	elevator(100, platx[10], 1, sprite->x, eleCol, int ab);
	platVar   -> Variable of elevator to change.
	speed     -> Amount to change per execution (Pixels).
	spriteVar -> Variable to change on contact.
	dist      -> Distance to move the elevator.
	col       -> Name of collision variable.
	distTravelled -> Just initiallize a new variable here.
   Fin     */