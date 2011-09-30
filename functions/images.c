OSL_IMAGE *sprite, *platform, *spike, *intro, *mainmenubg, *mainmenutext, *mainmenuselected,
*pausemenubg, *creditmenubg, *deathmenubg, *mdeathmenubg, *charselectdarkness, *charselectstitches, *charselect,
*spritePrev, *charselectpetey, *mainloadmenubg, *lives, *outro, *staminabar, *staminaborder, *heart, *skull, *gateway, 
*levelcompletemenu, *arrowDown, *arrowLeft, *arrowRight, *arrowUp, *teleport, *rock, *rockAnim, *backBar, *wall,
*sprite_01, *sprite_02, *sprite_03, *sprite_04, *sprite_05, *spriteDark_01, *spritePetey_01, *spritePrev_01,
*spritePrev_02, *spritePrev_03, *spritePrev_04, *spritePrev_05, *spritePrevDark_01, *spritePrevPetey_01,
*settingselected, *settingselected_01, *settingselected_02, *settingselected_03, *settingsmenubg;
	
void imageDefs() {
	sprite_01 = oslLoadImageFile(const_cast<char *>("image/sprites/Stitches/stitches01.png"), OSL_IN_RAM, OSL_PF_8888);
	sprite_02 = oslLoadImageFile(const_cast<char *>("image/sprites/Stitches/stitches02.png"), OSL_IN_RAM, OSL_PF_8888);
	sprite_03 = oslLoadImageFile(const_cast<char *>("image/sprites/Stitches/stitches03.png"), OSL_IN_RAM, OSL_PF_8888);
	sprite_04 = oslLoadImageFile(const_cast<char *>("image/sprites/Stitches/stitches04.png"), OSL_IN_RAM, OSL_PF_8888);
	sprite_05 = oslLoadImageFile(const_cast<char *>("image/sprites/Stitches/stitches05.png"), OSL_IN_RAM, OSL_PF_8888);
	spriteDark_01 = oslLoadImageFile(const_cast<char *>("image/sprites/Dark/dark.png"), OSL_IN_RAM, OSL_PF_8888);
	spritePetey_01 = oslLoadImageFile(const_cast<char *>("image/sprites/Petey/petey.png"), OSL_IN_RAM, OSL_PF_8888);
	spritePrev_01 = oslLoadImageFile(const_cast<char *>("image/sprites/Stitches/prev01.png"), OSL_IN_RAM, OSL_PF_8888);
	spritePrev_02 = oslLoadImageFile(const_cast<char *>("image/sprites/Stitches/prev02.png"), OSL_IN_RAM, OSL_PF_8888);
	spritePrev_03 = oslLoadImageFile(const_cast<char *>("image/sprites/Stitches/prev03.png"), OSL_IN_RAM, OSL_PF_8888);
	spritePrev_04 = oslLoadImageFile(const_cast<char *>("image/sprites/Stitches/prev04.png"), OSL_IN_RAM, OSL_PF_8888);
	spritePrev_05 = oslLoadImageFile(const_cast<char *>("image/sprites/Stitches/prev05.png"), OSL_IN_RAM, OSL_PF_8888);
	spritePrevDark_01 = oslLoadImageFile(const_cast<char *>("image/sprites/Dark/prev01.png"), OSL_IN_RAM, OSL_PF_8888);
	spritePrevPetey_01 = oslLoadImageFile(const_cast<char *>("image/sprites/Petey/prev01.png"), OSL_IN_RAM, OSL_PF_8888);
	platform = oslLoadImageFile(const_cast<char *>("image/enviro/platform.png"), OSL_IN_RAM, OSL_PF_5551);
	spike = oslLoadImageFile(const_cast<char *>("image/enviro/spike.png"), OSL_IN_RAM, OSL_PF_5551);
	mainloadmenubg = oslLoadImageFile(const_cast<char *>("image/menus/mainloadmenubg.png"), OSL_IN_RAM, OSL_PF_8888);
	mainmenubg = oslLoadImageFile(const_cast<char *>("image/menus/mainmenubg.png"), OSL_IN_RAM, OSL_PF_5551);
	mainmenutext = oslLoadImageFile(const_cast<char *>("image/menus/mainmenutext.png"), OSL_IN_RAM, OSL_PF_8888);
	mainmenuselected = oslLoadImageFile(const_cast<char *>("image/menus/mainmenuselected.png"), OSL_IN_RAM, OSL_PF_8888);
	pausemenubg = oslLoadImageFile(const_cast<char *>("image/menus/pausemenubg.png"), OSL_IN_RAM, OSL_PF_5551);
	creditmenubg = oslLoadImageFile(const_cast<char *>("image/menus/creditmenubg.png"), OSL_IN_RAM, OSL_PF_5551);
	deathmenubg = oslLoadImageFile(const_cast<char *>("image/menus/deathmenubg.png"), OSL_IN_RAM, OSL_PF_5551);
	mdeathmenubg = oslLoadImageFile(const_cast<char *>("image/menus/mdeathmenubg.png"), OSL_IN_RAM, OSL_PF_5551);
	settingsmenubg = oslLoadImageFile(const_cast<char *>("image/menus/settingsmenubg.png"), OSL_IN_RAM, OSL_PF_8888);
	settingselected_01 = oslLoadImageFile(const_cast<char *>("image/menus/settingsmenuselected01.png"), OSL_IN_RAM, OSL_PF_8888);
	settingselected_02 = oslLoadImageFile(const_cast<char *>("image/menus/settingsmenuselected02.png"), OSL_IN_RAM, OSL_PF_8888);
	settingselected_03 = oslLoadImageFile(const_cast<char *>("image/menus/settingsmenuselected03.png"), OSL_IN_RAM, OSL_PF_8888);
	charselectdarkness = oslLoadImageFile(const_cast<char *>("image/menus/charselectdarkness.png"), OSL_IN_RAM, OSL_PF_5551);
	charselectstitches = oslLoadImageFile(const_cast<char *>("image/menus/charselectstitches.png"), OSL_IN_RAM, OSL_PF_5551);
	charselect = oslLoadImageFile(const_cast<char *>("image/menus/charselect.png"), OSL_IN_RAM, OSL_PF_5551);
	charselectpetey = oslLoadImageFile(const_cast<char *>("image/menus/charselectpetey.png"), OSL_IN_RAM, OSL_PF_5551);
	lives = oslLoadImageFile(const_cast<char *>("image/others/lives.png"), OSL_IN_RAM, OSL_PF_8888);
	outro = oslLoadImageFile(const_cast<char *>("image/others/outro.png"), OSL_IN_RAM, OSL_PF_8888);
	staminabar = oslLoadImageFile(const_cast<char *>("image/others/staminabar.png"), OSL_IN_RAM, OSL_PF_8888);
	staminaborder = oslLoadImageFile(const_cast<char *>("image/others/staminaborder.png"), OSL_IN_RAM, OSL_PF_8888);
	heart = oslLoadImageFile(const_cast<char *>("image/enviro/heart.png"), OSL_IN_RAM, OSL_PF_8888);
	skull = oslLoadImageFile(const_cast<char *>("image/enviro/skull.png"), OSL_IN_RAM, OSL_PF_8888);
	gateway = oslLoadImageFile(const_cast<char *>("image/enviro/gateway.png"), OSL_IN_RAM, OSL_PF_8888);
	levelcompletemenu = oslLoadImageFile(const_cast<char *>("image/menus/levelcompletemenu.png"), OSL_IN_RAM, OSL_PF_5551);
	arrowDown = oslLoadImageFile(const_cast<char *>("image/others/arrowDown.png"), OSL_IN_RAM, OSL_PF_5551);
	arrowLeft = oslLoadImageFile(const_cast<char *>("image/others/arrowLeft.png"), OSL_IN_RAM, OSL_PF_5551);
	arrowRight = oslLoadImageFile(const_cast<char *>("image/others/arrowRight.png"), OSL_IN_RAM, OSL_PF_5551);
	arrowUp = oslLoadImageFile(const_cast<char *>("image/others/arrowUp.png"), OSL_IN_RAM, OSL_PF_5551);
	teleport = oslLoadImageFile(const_cast<char *>("image/enviro/teleport.png"), OSL_IN_RAM, OSL_PF_8888);
	rock = oslLoadImageFile(const_cast<char *>("image/enviro/rocks.png"), OSL_IN_RAM, OSL_PF_5551);
	rockAnim = oslLoadImageFile(const_cast<char *>("image/anims/rockBreak.png"), OSL_IN_RAM, OSL_PF_5551);
	backBar = oslLoadImageFile(const_cast<char *>("image/others/backBar.png"), OSL_IN_RAM, OSL_PF_8888);
	wall = oslLoadImageFile(const_cast<char *>("image/enviro/wall.png"), OSL_IN_RAM, OSL_PF_5551);
	sprite = sprite_01;
	spritePrev = spritePrev_01;
	settingselected = settingselected_01;
}
void errorCheck() {
	if (!sprite || !intro || !mainloadmenubg ||
		!mainmenubg || !mainmenutext || !mainmenuselected ||
		!platform || !pausemenubg || !creditmenubg || !spike ||
		!deathmenubg || !mdeathmenubg || !charselectdarkness ||
		!charselectstitches || !charselectpetey || !lives || 
		!outro || !staminabar || !staminaborder || !heart || !spritePrev || 
		!skull || !gateway || !levelcompletemenu || !teleport || 
		!rock || !rockAnim || !backBar || !wall || !charselect) {
			oslDebug("Error loading one or more images. Verify all files are in the eboot folder.");
	}
}