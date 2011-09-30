#include <pspkernel.h>
#include <pspdebug.h>
#include <stdio.h>
#include <stdlib.h>
#include <oslib/oslib.h>
#include "headers/mapone.h"
#include "functions/variables.c"
#include "functions/collision.c"
#include "functions/images.c"
#include "functions/maps.c"
#include "functions/animations.c"
#include "functions/structures.cpp"

#define RIGHT  0
#define LEFT   60 
#define ATKONE 120
#define ATKTWO 180
#define SATONE 240
#define SATTWO 300
#define JUMP cross
#define SCRUP up
#define SCRDN down
#define SPRINT circle
#define SCRRHT right
#define SCRLFT left

PSP_MODULE_INFO("Stitchd", 0, 1, 1);
PSP_MAIN_THREAD_ATTR(THREAD_ATTR_USER | THREAD_ATTR_VFPU);
OSL_SOUND *mainmenusound, *cutone, *mainbgm;

#include "functions/myfunctions.c"
#include "functions/elevator.c"
#include "functions/platform.c"
#include "functions/spike.c"
#include "functions/rock.c"
#include "functions/wall.c"
#include "functions/pickups.c"
#include "functions/gateway.c"
#include "functions/physics.c"
#include "functions/varset.c"
#include "functions/menus.c"
#include "functions/playermisc.c"
#include "functions/buttonfuncs.c"

int main() {
	oslInit(0);
	oslInitGfx(OSL_PF_8888, 1);
	oslInitConsole();
	oslInitAudio();
	PSP_HEAP_SIZE_KB(-1024);
	intro = oslLoadImageFile(const_cast<char *>("image/others/intro.png"), OSL_IN_RAM, OSL_PF_8888);
	oslStartDrawing();
	oslCls();
	oslDrawImage(intro);
	oslSyncFrame();
	sceKernelDelayThread(2 * 1000000);
	imageDefs();
	mapDefs();
	errorCheck();
	mainmenusound = oslLoadSoundFile("sound/menus/click.wav", OSL_FMT_NONE);
	cutone = oslLoadSoundFile("sound/enviro/cutone.wav", OSL_FMT_NONE);
	mainbgm = oslLoadSoundFile("sound/menus/wolfMF.bgm", OSL_FMT_STREAM);
	mainmenutext->x = 183;
	mainmenutext->y = 81;
	oslSetKeyAutorepeatInit(40);
	oslSetKeyAutorepeatInterval(10);
	oslEndDrawing();
	mapCreate();
	platSet();
	spikeSet();
	heartSet();
	skullSet();
	rockSet();
	arrowSet();
	gatewaySet();
	wallSet();
	eleSet();
	sprite->x = 120;
	sprite->y = 0;
	sprite_position = RIGHT;
	while(!osl_quit) {
		oslReadKeys();
		oslStartDrawing();
		oslClearScreen(0);
		Panning();
		deathRules();
		mainMenu();
		charMenu();
		credMenu();
		pausemenutimer ++;
		jumptimer ++;
		pauseMenu();
		deathMenu();
		mDeathMenu();
		settingsMenu();
		levelComplete();
		if ((pausemenu == 0) && (mainmenu == 0) && (creditmenu == 0) 
			&& (mdeathmenu == 0) && (deathmenu == 0) && (charselectmenu == 0) 
			&& (levelcomplete == 0) && (settingsmenu == 0)) {
			Buttons();
			GravCol();
			PlayerJump();
			oslDrawMapSimple(mapone);
			if ((osl_keys->pressed.start) && (pausemenutimer > 10)) {
				oslCls();
				pausemenu = 1;
				creditmenu = 0;
			}
			platSet();
			platDraw();
			wallSet();
			wallDraw();
			spikeSet();
			spikeDraw();
			heartSet();
			heartDraw();
			skullSet();
			skullDraw();
			skullPrint();
			rockSet();
			rockDraw();
			rockAnimStarter();
			arrowSet();
			arrowDraw();
			gatewaySet();
			gatewayDraw();
			gateway->angle ++;
			eleDraw();
			eleSet();
			oslDrawImage(sprite);
			oslDrawImage(backBar);
			playerLife();
			playerStam();
		}
		oslEndDrawing();
		oslSyncFrame();
		oslAudioVSync();
	}
	oslEndGfx();
	oslQuit();
	return 0;
}

////////////////////////////////////////////////////////////////
//Notes/////////////////////////////////////////////////////////
//                                                            //
// sceKernelDelayThread(Time in seconds * 1000000);           //
// oslPrintf_xy(245, 125, points);                            //
////////////////////////////////////////////////////////////////