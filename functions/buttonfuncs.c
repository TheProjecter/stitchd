void SpriteAnimate() {
	marchtimer ++;
	if (marchtimer >= 3) {
		sprite_march ++;
		oslSetImageTileSize(sprite,(sprite_march * 60),sprite_position,60,60);
		marchtimer = 0;
	}
	if (sprite_march == 6) {
		sprite_march = 0;
	}
}

void Buttons() {
	if ((death == 0) && (spikeCol == 0)) {
		if ((osl_keys->held.right) && (rightCol == 0) && (rightWCol == 0)) {
			sprite->x += walkspeed;
			if (attacking == 0) sprite_position = RIGHT;
			SpriteAnimate();
		} else if ((osl_keys->held.left) && (leftCol == 0) && (leftWCol == 0)) {
			sprite->x -= walkspeed;
			if (attacking == 0) sprite_position = LEFT;
			SpriteAnimate();
		}
	}
	if (!osl_keys->held.value) {
		if (jumping == 0)
			sprite_march = 0;
		oslSetImageTileSize(sprite,0,sprite_position,60,60);
		staminabar->stretchX ++;
	}
	if ((osl_keys->held.SPRINT) && (staminabar->stretchX >= 1)) {
		walkspeed = 3;
		staminabar->stretchX --;
	} else { walkspeed = 2; }
	switch ( manualscroll ) {
		case 0:
			if ((sprite->y < 70) && (mapone->scrollY > 0) && (eleCol == 0) && (jumping == 0)) mapone->scrollY -= 4;
			if ((sprite->y >= 150) && (mapone->scrollY < 512) && (eleCol == 0) && (jumping == 0)) mapone->scrollY += 4;
			if (eleCol == 1) {
				if ((sprite->y < 106) && (osl_keys->held.SCRUP)) {
					mapone->scrollY -= 4;
					sprite->y += 4;
				} else if ((sprite->y > 166) && (osl_keys->held.SCRDN)) {
					mapone->scrollY += 4;
					sprite->y -= 4;
				}
				if ((sprite->x > 260) && (osl_keys->held.SCRLFT)) {
					mapone->scrollX -= 4;
					sprite->x += 4;
				} else if ((sprite->x < 200) && (osl_keys->held.SCRRHT)) {
					mapone->scrollX += 4;
					sprite->x -= 4;
				}
			}
			break;
		case 1:
			if ((osl_keys->held.SCRUP) && (sprite->y < 150) && (mapone->scrollY > 0) && (eleCol == 0) && (jumping == 0)) mapone->scrollY -= 4;
			if ((osl_keys->held.SCRDN) && (sprite->y > 75) && (mapone->scrollY < 512) && (eleCol == 0) && (jumping == 0)) mapone->scrollY += 4;
			if ((sprite->y < 70) && (mapone->scrollY > 0) && (eleCol == 0)) mapone->scrollY -= 4;
			if ((sprite->y >= 150) && (mapone->scrollY < 512) && (eleCol == 0)) mapone->scrollY += 4;
			break;
	}
	playerAttack();
}

void Panning() {
	if ((sprite->x < 215) && (rightCol == 0) && (leftCol == 0) && 
		(rightWCol == 0) && (leftWCol == 0) && (eleCol == 0)) 
		mapone->scrollX -= 2, sprite->x += 2;
	else if ((sprite->x > 225)  && (rightCol == 0) && (leftCol == 0) && 
		(rightWCol == 0) && (leftWCol == 0) && (eleCol == 0))
		mapone->scrollX += 2, sprite->x -= 2;
}