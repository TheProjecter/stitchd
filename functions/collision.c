int collisionCheck(int spriteX, int spriteY,
	int spriteWidth, int spriteHeight,
	int platformX, int platformY,
	int platformWidth, int platformHeight) {
		if ((spriteX + 20 <= platformWidth) && 
			(spriteWidth - 20 >= platformX) &&
			(spriteHeight >= platformY) &&
			(spriteY + 50 <= platformHeight)) {
		} else {
			return 0;
		}
	return 1;
}

int spikeCheck(int spriteX, int spriteY,
	int spriteWidth, int spriteHeight,
	int spikeX, int spikeY,
	int spikeWidth, int spikeHeight) {
		if ((spriteX + 35 <= spikeWidth) && 
			(spriteWidth - 35 >= spikeX) &&
			(spriteHeight >= spikeY) &&
			(spriteY + 50 <= spikeHeight)) {
		} else {
			return 0;
		}
	return 1;
}

int heartCheck(int spriteX, int spriteY,
	int spriteWidth, int spriteHeight,
	int heartX, int heartY,
	int heartWidth, int heartHeight) {
		if ((spriteX <= heartWidth) && 
			(spriteWidth >= heartX) &&
			(spriteHeight >= heartY) &&
			(spriteY <= heartHeight)) {
		} else {
			return 0;
		}
	return 1;
}

int skullCheck(int spriteX, int spriteY,
	int spriteWidth, int spriteHeight,
	int skullX, int skullY,
	int skullWidth, int skullHeight) {
		if ((spriteX + 10 <= skullWidth) && 
			(spriteWidth - 10 >= skullX) &&
			(spriteHeight - 10 >= skullY) &&
			(spriteY + 10 <= skullHeight)) {
		} else {
			return 0;
		}
	return 1;
}

int gatewayAdvance(int spriteX, int spriteY,
	int spriteWidth, int spriteHeight,
	int gatewayX, int gatewayY,
	int gatewayWidth, int gatewayHeight) {
		if ((spriteX <= gatewayWidth) &&
			(spriteWidth >= gatewayX) &&
			(spriteHeight >= gatewayY) &&
			(spriteY <= gatewayHeight)) {
		} else {
			return 0;
		}
	return 1;
}

int teleportCheck(int spriteX, int spriteY,
	int spriteWidth, int spriteHeight, 
	int teleportX, int teleportY,
	int teleportWidth, int teleportHeight) {
		if ((spriteX <= teleportWidth) &&
			(spriteWidth >= teleportX) &&
			(spriteHeight >= teleportY) &&
			(spriteY <= teleportHeight)) {
		} else {
			return 0;
		}
	return 1;
}

int rightCollision(int spriteX, int spriteY,
	int spriteWidth, int spriteHeight,
	int wallX, int wallY,
	int wallWidth, int wallHeight, int facing, 
	int facingRight, int facingLeft) {
		if ((spriteWidth - 20 >= wallX) && 
			(spriteWidth <= wallWidth) &&
			(facing == facingRight) && 
			(spriteHeight >= wallY) &&
			(spriteY <= wallY)) {
		} else {
			return 0;
		}
	return 1;
}

int leftCollision(int spriteX, int spriteY,
	int spriteWidth, int spriteHeight,
	int wallX, int wallY,
	int wallWidth, int wallHeight, int facing, 
	int facingRight, int facingLeft) {
		if ((spriteX + 20 <= wallWidth) &&
			(spriteX >= wallX) &&
			(facing == facingLeft) &&
			(spriteHeight >= wallY) &&
			(spriteY <= wallY)) {
		} else {
			return 0;
		}
	return 1;
}

int rightWCollision(int spriteX, int spriteY,
	int spriteWidth, int spriteHeight,
	int wallX, int wallY,
	int wallWidth, int wallHeight, int facing, 
	int facingRight, int facingLeft) {
		if ((spriteWidth - 20 >= wallX) && 
			(spriteWidth - 20 <= wallWidth) &&
			(facing == facingRight) && 
			(spriteHeight >= wallY) &&
			(spriteY <= wallHeight)) {
		} else {
			return 0;
		}
	return 1;
}

int leftWCollision(int spriteX, int spriteY,
	int spriteWidth, int spriteHeight,
	int wallX, int wallY,
	int wallWidth, int wallHeight, int facing, 
	int facingRight, int facingLeft) {
		if ((spriteX + 20 <= wallWidth) &&
			(spriteX + 20 >= wallX) &&
			(facing == facingLeft) &&
			(spriteHeight >= wallY) &&
			(spriteY <= wallHeight)) {
		} else {
			return 0;
		}
	return 1;
}

int rockTopCheck(int spriteX, int spriteY,
	int spriteWidth, int spriteHeight,
	int rockX, int rockY,
	int rockWidth, int rockHeight) {
		if ((spriteX + 25 <= rockWidth) && 
			(spriteWidth - 25 >= rockX) &&
			(spriteHeight >= rockY) &&
			(spriteY + 50 <= rockHeight)) {
		} else {
			return 0;
		}
	return 1;
}

int rockBottomCheck(int spriteX, int spriteY,
	int spriteWidth, int spriteHeight,
	int rockX, int rockY,
	int rockWidth, int rockHeight) {
		if ((spriteX + 25 <= rockWidth) &&
			(spriteWidth - 25 >= rockX) &&
			(spriteHeight + 35 >= rockY) &&
			(spriteY <= rockHeight)) {
		} else {
			return 0;
		}
	return 1;
}

int elevatorCheck(int spriteX, int spriteY,
	int spriteWidth, int spriteHeight,
	int platformX, int platformY,
	int platformWidth, int platformHeight) {
		if ((spriteX + 20 <= platformWidth) && 
			(spriteWidth - 20 >= platformX) &&
			(spriteHeight >= platformY) &&
			(spriteY + 50 <= platformHeight)) {
		} else {
			return 0;
		}
	return 1;
}
		