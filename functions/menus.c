void mainMenu() {
	if (mainmenu == 1) {
		mainmenutimer ++;
		oslDrawImage(mainmenubg);
		oslDrawImage(mainmenutext);
		if (gamestart == 1) oslPlaySound(mainbgm, 0);
		gamestart = 0;
		if ((osl_keys->pressed.down) && (mainmenutimer >= 5)) {
			oslPlaySound(mainmenusound, 1);
			mainmenuselect ++;
			mainmenutimer = 0;
		} else if ((osl_keys->pressed.up) && (mainmenutimer >= 5)) {
			oslPlaySound(mainmenusound, 1);
			mainmenuselect --;
			mainmenutimer = 0;
		}
		if (mainmenuselect < 0)
			mainmenuselect = 5;
		else if (mainmenuselect > 5)
			mainmenuselect = 0;
		switch ( mainmenuselect ) {
			case 0:
				setSelection(mainmenuselected, 183, 81);
				oslSetImageTileSize(mainmenuselected, 0, 0, 115, 18);
				oslDrawImage(mainmenuselected);
				if (osl_keys->pressed.cross) {
					level = 1;
					heartReset();
					skullReset();
					rockReset();
					varSet();
					eleSpeedSet();
					playerHealth = 3;
					mainmenu = 0;
					pausemenu = 0;
					mainmenuselect = 0;
					jumping = 0;
					gravitySucks();
				} break;
			case 1:
				setSelection(mainmenuselected, 183, 99);
				oslSetImageTileSize(mainmenuselected, 0, 18, 115, 25);
				oslDrawImage(mainmenuselected);
				if (osl_keys->pressed.cross) {
					heartReset();
					skullReset();
					rockReset();
					varSet();
					eleSpeedSet();
					playerHealth = 3;
					mainmenu = 0;
					pausemenu = 0;
					mainmenuselect = 0;
					jumping = 0;
					gravitySucks();
				} break;
			case 2:
				setSelection(mainmenuselected, 183, 124);
				oslSetImageTileSize(mainmenuselected, 0, 43, 115, 26);
				oslDrawImage(mainmenuselected);
				if (osl_keys->pressed.cross) {
					oslCls();
					oslStopSound(mainbgm);
					mainmenutimer = 0;
					charselectmenu = 1;
					mainmenu = 0;
				} break;
			case 3:
				setSelection(mainmenuselected, 183, 150);
				oslSetImageTileSize(mainmenuselected, 0, 69, 115, 22);
				oslDrawImage(mainmenuselected);
				if (osl_keys->pressed.cross) {
					oslCls();
					oslStopSound(mainbgm);
					mainmenu = 0;
					mainmenuselect = 0;
					settingtimer = 0;
					settingsmenu = 1;
				} break;
			case 4:
				setSelection(mainmenuselected, 183, 172);
				oslSetImageTileSize(mainmenuselected, 0, 91, 115, 24);
				oslDrawImage(mainmenuselected);
				if (osl_keys->pressed.cross) {
					oslCls();
					creditmenu = 1;
					mainmenu = 0;
				} break;
			case 5:
				setSelection(mainmenuselected, 183, 196);
				oslSetImageTileSize(mainmenuselected, 0, 115, 115, 20);
				oslDrawImage(mainmenuselected);
				if (osl_keys->pressed.cross) {
					oslStartDrawing();
					oslCls();
					oslDrawImage(outro);
					oslSyncFrame();
					sceKernelDelayThread(3 * 1000000);
					oslEndDrawing();
					oslQuit();
				} break;
		}
		if ((osl_keys->pressed.R) && (mainmenutimer >= 10)) {
			manualscroll ++;
			mainmenutimer = 0;
		} else if ((osl_keys->pressed.L) && (mainmenutimer >= 10)) {
			manualscroll --;
			mainmenutimer = 0;
		}
		if (manualscroll > 1) manualscroll = 0;
		if (manualscroll < 0) manualscroll = 1;
		if (manualscroll == 0) {
			oslPrintf_xy(0, 260, "+Auto VScrolling");
		} else if (manualscroll == 1) {
			oslPrintf_xy(0, 260, "+A|M VScrolling");
		}
	}
}

void charMenu() {
	if ((charselectmenu == 1) && (mainmenu == 0)) {
		mainmenutimer ++;
		oslDrawImage(charselect);
		oslDrawImageXY(spritePrev, 213, 116);
		if ((osl_keys->pressed.R) && (mainmenutimer >= 5)) {
			oslPlaySound(mainmenusound, 1);
			charselected ++;
			mainmenutimer = 0;
		} else if ((osl_keys->pressed.L) && (mainmenutimer >= 5)) {
			oslPlaySound(mainmenusound, 1);
			charselected --;
			mainmenutimer = 0;
		} else if ((osl_keys->pressed.up) && (mainmenutimer >= 3)) {
			oslPlaySound(mainmenusound, 1);
			charcolorselected --;
			mainmenutimer = 0;
		} else if ((osl_keys->pressed.down) && (mainmenutimer >= 3)) {
			oslPlaySound(mainmenusound, 1);
			charcolorselected ++;
			mainmenutimer = 0;
		}
		if (charselected == 0) {
			switch ( charcolorselected ) {
				case 0:
					if ((osl_keys->pressed.cross) && (mainmenutimer >= 10)) {
						sprite = sprite_01;
						mainmenutimer = 0;
						oslCls();
						mainmenu = 1;
						charselectmenu = 0;
					}
					if (spritePrev != spritePrev_01) {
						spritePrev = spritePrev_01;
					}
					break;
				case 1:
					if ((osl_keys->pressed.cross) && (mainmenutimer >= 10)) {
						sprite = sprite_02;
						mainmenutimer = 0;
						oslCls();
						mainmenu = 1;
						charselectmenu = 0;
					}
					if (spritePrev != spritePrev_02) {
						spritePrev = spritePrev_02;
					}
					break;
				case 2:
					if ((osl_keys->pressed.cross) && (mainmenutimer >= 10)) {
						sprite = sprite_03;
						mainmenutimer = 0;
						oslCls();
						mainmenu = 1;
						charselectmenu = 0;
					}
					if (spritePrev != spritePrev_03) {
						spritePrev = spritePrev_03;
					}
					break;
				case 3:
					if ((osl_keys->pressed.cross) && (mainmenutimer >= 10)) {
						sprite = sprite_04;
						mainmenutimer = 0;
						oslCls();
						mainmenu = 1;
						charselectmenu = 0;
					}
					if (spritePrev != spritePrev_04) {
						spritePrev = spritePrev_04;
					}
					break;
				case 4:
					if ((osl_keys->pressed.cross) && (mainmenutimer >= 10)) {
						sprite = sprite_05;
						mainmenutimer = 0;
						oslCls();
						mainmenu = 1;
						charselectmenu = 0;
					}
					if (spritePrev != spritePrev_05) {
						spritePrev = spritePrev_05;
					}
					break;
			}
			if (charcolorselected > 4) charcolorselected = 0;
			if (charcolorselected < 0) charcolorselected = 4;
		} else if (charselected == 1) {
			if ((osl_keys->pressed.cross) && (mainmenutimer >= 10)) {
				sprite = spriteDark_01;
				mainmenutimer = 0;
				oslCls();
				mainmenu = 1;
				charselectmenu = 0;
			}
			if (spritePrev != spritePrevDark_01) {
				spritePrev = spritePrevDark_01;
			}
		} else if (charselected == 2) {
			if ((osl_keys->pressed.cross) && (mainmenutimer >= 10)) {
				sprite = spritePetey_01;
				mainmenutimer = 0;
				oslCls();
				mainmenu = 1;
				charselectmenu = 0;
			}
			if (spritePrev != spritePrevPetey_01) {
				spritePrev = spritePrevPetey_01;
			}
		}
		if (charselected > 2) {
			charselected = 0;
		} else if (charselected < 0) {
			charselected = 2;
		}
		if (osl_keys->pressed.circle) {
			oslCls();
			mainmenu = 1;
			charselectmenu = 0;
		}
	}
}

void credMenu() {
	if ((creditmenu == 1) && (mainmenu == 0)) {
		oslDrawImage(creditmenubg);
		if (osl_keys->pressed.select) {
			oslCls();
			creditmenu = 0;
			mainmenu = 1;
		}
	}
}

void pauseMenu() {
	if ((pausemenu == 1) && (mainmenu == 0) && (mdeathmenu == 0) && (deathmenu == 0)) {
		oslDrawImage(pausemenubg);
		if (osl_keys->pressed.select) {
			oslCls();
			mainmenu = 1;
			pausemenu = 0;
		} else if (osl_keys->pressed.cross) {
			oslCls();
			pausemenu = 0;
			creditmenu = 0;
			jumptimer = 0;
		}
	}
}

void deathMenu() {
	if (deathmenu == 1) {
		oslDrawImage(deathmenubg);
		if (osl_keys->pressed.start) {
			oslCls();
			death = 0;
			deathmenu = 0;
			varSet();
			eleSpeedSet();
			pausemenutimer = 0;
		}
	}
}

void mDeathMenu() {
	if (mdeathmenu == 1) {
		oslDrawImage(mdeathmenubg);
		if (osl_keys->pressed.start) {
			oslCls();
			mainmenu = 1;
			mdeathmenu = 0;
			death = 0;
		}
	}
}

void settingsMenu() {
	if ((settingsmenu == 1) && (mainmenu == 0)) {
		oslDrawImage(settingsmenubg);
		oslDrawImage(settingselected);
		settingtimer ++;
		if ((osl_keys->pressed.down) && (settingtimer > 3)) {
			settingsmenuselected ++;
			settingtimer = 0;
		} else if ((osl_keys->pressed.up) && (settingtimer > 3)) {
			settingsmenuselected --;
			settingtimer = 0;
		}
		if (settingsmenuselected > 2) settingsmenuselected = 0;
		if (settingsmenuselected < 0) settingsmenuselected = 2;
		switch ( settingsmenuselected ) {
			case 0:
				settingselected = settingselected_01;
				if ((osl_keys->pressed.cross) 
					&& (settingtimer > 2)) {
					settingtimer = 0;
					oslCls();
					mainmenu = 1;
					settingsmenu = 0;
					mainmenutimer = 0;
				}
			break;
			case 1:
				settingselected = settingselected_02;
				if ((osl_keys->pressed.cross) 
					&& (settingtimer > 2)) {
					settingtimer = 0;
					oslCls();
					mainmenu = 1;
					settingsmenu = 0;
					mainmenutimer = 0;
				}
			break;
			case 2:
				settingselected = settingselected_03;
				if ((osl_keys->pressed.cross) 
					&& (settingtimer > 2)) {
					settingtimer = 0;
					oslCls();
					mainmenu = 1;
					settingsmenu = 0;
					mainmenutimer = 0;
				}
			break;
		}
		if ((osl_keys->pressed.circle) && (settingtimer > 5)) {
			settingtimer = 0;
			oslCls();
			mainmenu = 1;
			settingsmenu = 0;
			settingsmenuselected = 0;
		}
	}
}

void levelComplete() {
	if (levelcomplete == 1) {
		leveltimer ++;
		oslDrawImage(levelcompletemenu);
		if ((osl_keys->pressed.cross) && (leveltimer > 5)) {
			if (level != levelmax) level ++;
			levelcomplete = 0;
			mainmenu = 1;
			mainmenuselect = 0;
			mainmenutimer = 0;
			leveltimer = 0;
		}
	}
}

//------------------------------------------------------------------------------//
//To test RAM available:
//oslPrintf_xy(100, 200, "Bytes available: %i", oslGetRamStatus().maxAvailable);
//Place anywhere in function.
//[ENTER]
//Image debugging tool:
//int Images = 0;
//OSL_IMAGE *DebugLoadImage(char *Filename,int Location,int PixelFormat)
//    {
//        OSL_IMAGE *Img = oslLoadImageFile(Filename,Location,PixelFormat);
//        if(Img) Images++;
//        oslPrintf_xy(10,10, "Image(s) loaded: %d\n",Images);
//        return Img;
//    }
//#define oslLoadImageFile DebugLoadImage
//Place at beginning of code. Probably under necessary include files.
//------------------------------------------------------------------------------//