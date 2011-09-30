void playerLife() {
	oslDrawImage(lives);
	if (playerHealth == 3) {
		oslSetImageTileSize (lives, 0, 0, 123, 32);
	} else if (playerHealth == 2) {
		oslSetImageTileSize (lives, 0, 0, 105, 32);
	} else if (playerHealth == 1) {
		oslSetImageTileSize (lives, 0, 0, 90, 32);
	}
	if (playerHealth < 0) playerHealth = 0;
	if (playerHealth > 3) playerHealth = 3;
	if ((death == 1) && (playerHealth <= 0)) {
		oslCls();
		mdeathmenu = 1;
	} else if ((death == 1) && (playerHealth > 0)) {
		oslCls();
		deathmenu = 1;
	}
}

void playerStam() {
	staminabar->x = 270;
	staminabar->y = 10;
	if (staminabar->stretchX < 0) staminabar->stretchX = 0;
	if (staminabar->stretchX > 200) staminabar->stretchX = 200;
	oslDrawImage(staminabar);
	oslDrawImageXY(staminaborder, 270, 10);
}

void deathRules() {
	if (death == 1) {
		jumping = 0;
		gravitySucks();
	}
}

void playerAttack() {
	attackCounter ++;
	if ((osl_keys->pressed.square) && (attackCounter > 10) && (jumping == 0)) {
		attacking = 1;
		attackCounter = 0;
	} else {
		attacking = 0;
	}
}