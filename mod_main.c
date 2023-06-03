#include "mod_main.h"

void func(char* string) {
    PrintTextWrapper(100.0f, 10.0f, 0.0f, 1.0f, string, 1);
}

s32 loadEnemiesBool = 1;

char testing[] = "ＯＫ"; 
char textBfr[0x100] = {'\0'};

void hookCode(s32* patchAddr, void* jumpLocation, s32* instructionBuffer) {
    jumpLocation = (void*)(u32)((((u32)jumpLocation & 0x00FFFFFF) >> 2) | 0x08000000);
    instructionBuffer[0] = patchAddr[0];
    patchAddr[0] = (s32)jumpLocation; //write j instruction
    instructionBuffer[1] = patchAddr[1];
    patchAddr[1] = 0; //write nop
}

void patchInstruction(void* patchAddr, s32 patchInstruction) {
    *(s32*)patchAddr = patchInstruction;
}

s32 newFunc(void) {
    return 1;
}

void loadEnemyObjectsHook(void);
void newPrintf(void);

void mod_boot_func(void) {
    s32 instructionBuffer[2];

    hookCode((s32*)0x8002D660, &loadEnemyObjectsHook, instructionBuffer);
}


/*
 * mod_main_per_frame: where to add code that runs every frame
 */
void mod_main_per_frame(void) {
    
    PrintTextWrapper(64.0f, 32.0f, 0.0f, 1.0f, textBfr, 1);
}

//Thread 3 osStartThread function
//name is hardcoded in configure script. if name is changed, change it there too
void mod_main_func(void) {
    // func_8002D080(); //is already ran in MainLoop.s patch
    
    //convertAsciiToText(textBfr, "T E S T");
    //strncpy_custom(textBfr, "ＡＢ", strlength_custom("ＡＢ"));
    
    if (sGameModeStart != -1) {
        gameModeCurrent = sGameModeStart;
    }
    
    gGameModeState = 0;
    osRecvMesg(&D_801192E8, 0, 1);
    SaveData_LoadRecords(&gGameRecords.flags[0]);
    
    if (SaveData_RecordChecksum() != gGameRecords.flags[0]) {
        SaveData_ClearRecords();
    }

    gIsStero = gGameRecords.flags[1] & 1; //gIsStero = gGameRecords.flags0[1] & 1;
    osRecvMesg(&D_801192E8, 0, 1);
    mod_boot_func();
    //step current game mode
    loop:
    mod_main_per_frame();
    switch(gameModeCurrent) {
        case GAME_MODE_OVERWORLD:
            Porocess_Mode0();
            goto loop;
        case GAME_MODE_JUNGLE_LAND_MENU:
            Process_StageSelect();
            goto loop;
        case GAME_MODE_SAVE_MENU:
            FileWork();
            goto loop;
        case GAME_MODE_LOAD_GAME_MENU:
            func_8009C904();
            goto loop;
        case GAME_MODE_DEMO:
            func_800A9F84();
            goto loop;
        case GAME_MODE_DEMO_2:
            func_800AA3F0();
            goto loop;
        case GAME_MODE_CREDITS:
            func_800ADE70();
            goto loop;
        case GAME_MODE_OPENING_CUTSCENE:
            func_800AE4AC();
            goto loop;
        case GAME_MODE_TITLE_SCREEN:
            func_800A2BDC();
            goto loop;
        case GAME_MODE_BATTLE_MENU:
            Process_BattleMenu();
            goto loop;
        case GAME_MODE_OPTIONS_MENU:
            func_800A4320();
            goto loop;
        case GAME_MODE_GAME_OVER:
            Process_GameOver();
            goto loop;
        case GAME_MODE_SUPPLY_SYSTEM_LOGO:
            Process_JSSLogo();
            goto loop;
        case GAME_MODE_PRE_CREDITS:
            Process_PreCredits();
            goto loop;
        case GAME_MODE_NEW_GAME_MENU:
            func_800A1D38();
            goto loop;
        case GAME_MODE_JUNGLE_LAND:
            func_800A6DD8();
            goto loop;
        case GAME_MODE_STAGE_SELECT:
            func_800A07E0();
            goto loop;
        case GAME_MODE_RANKING:
            Process_Ranking();
            goto loop;
        case 17:
            func_800557F8();
            goto loop;
        case GAME_MODE_BOOT:
            Process_Boot();
            goto loop;
        case GAME_MODE_SUNSOFT_LOGO:
            Process_SunsoftLogo();
            goto loop;
        case GAME_MODE_UNK_15:
            DummiedPrintf(D_8010DB20, gameModeCurrent);
            goto loop;
    }
}