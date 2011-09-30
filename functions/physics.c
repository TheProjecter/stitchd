void gravitySucks() {
	if (((collision == 0) && (jumping == 0)) || (rockColBottom == 1)) {
		sprite->y += gravity;
		gravity += .5;
		if (gravity > 7) gravity = 7;
		jumpcounter = 15;
	} else { gravity = 3; }
}

void PlayerJump() {
	if ((jumpcounter < 15) && (rockColBottom == 0)) {                           
		if (speed >= 3) {
			sprite->y -= (speed - 2);
		} else {
			sprite->y -= speed;
		}
		speed --;                                   
		jumpcounter ++;   
		jumpheight ++;  		
		jumping = 1; 
	}
	if ((osl_keys->pressed.JUMP) && (jumping == 0) && 
		(collision == 1) && (jumptimer > 3) && (rockColBottom == 0)) {  
		jumpcounter = 0;
	}
	if ((jumpcounter >= 15) && (jumpheight >= 15)) jumping = 0;
	if ((jumping == 0) && (collision == 1)) {
		jumpheight = 0;
		speed = 13;
	}
	if (jumping == 1) {
		if (sprite_position == RIGHT){
				sprite_march = 1;
		} else if (sprite_position == LEFT) {
				sprite_march = 1;
		}
	}
	if (jumping == 1) walkspeed = 4;
	if (rockColBottom == 1) jumping = 0;
}

void GravCol() {
	collisionCall();
	wallCall();
	spikeCall();
	heartCall();
	skullCall();
	rockCall();
	rockCallTop();
	rockCallBottom();
	gatewayCall();
	eleStart();
	eleCall();
	if ((sprite->y >= 500) && (jumping == 0)) death = 1, playerHealth --;
	if ((collision == 0) && (jumping == 0)) gravitySucks();
	if (collision == 1) jumping = 0, gravity = 3;
}

