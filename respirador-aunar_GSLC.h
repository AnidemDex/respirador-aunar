//<File !Start!>
// FILE: [respirador-aunar_GSLC.h]
// Created by GUIslice Builder version: [0.15.b004]
//
// GUIslice Builder Generated GUI Framework File
//
// For the latest guides, updates and support view:
// https://github.com/ImpulseAdventure/GUIslice
//
//<File !End!>

#ifndef _GUISLICE_GEN_H
#define _GUISLICE_GEN_H

// ------------------------------------------------
// Headers to include
// ------------------------------------------------
#include "GUIslice.h"
#include "GUIslice_drv.h"

// Include any extended elements
//<Includes !Start!>
// Include extended elements
#include "elem/XSlider.h"
//<Includes !End!>

// ------------------------------------------------
// Headers and Defines for fonts
// Note that font files are located within the Adafruit-GFX library folder:
// ------------------------------------------------
//<Fonts !Start!>
#if defined(DRV_DISP_TFT_ESPI)
  #error Project tab->Target Platform should be tft_espi
#endif
#include <Adafruit_GFX.h>
#include "Fonts/FreeSans12pt7b.h"
#include "Fonts/NotoSans8pt7b.h"
#include "Fonts/dosis_book8pt7b.h"
//<Fonts !End!>

// ------------------------------------------------
// Defines for resources
// ------------------------------------------------
//<Resources !Start!>
//<Resources !End!>

// ------------------------------------------------
// Enumerations for pages, elements, fonts, images
// ------------------------------------------------
//<Enum !Start!>
enum {E_PG_BASE,E_PG_MAIN,E_PG_MOTION,E_PG_CONFIG};
enum {E_BACKGROUND_FRAME,E_BACKGROUND_FRAME_C,E_BACKGROUND_FRAME_MOTION
      ,E_BOT_CONTAINER_P1,E_BOT_CONTAINER_P2,E_BTN_CONFIG
      ,E_BTN_CONF_ADULT,E_BTN_CONF_KID,E_BTN_CONF_YOUNG,E_BTN_START
      ,E_BTN_STOP,E_CONF_BTN_BACK,E_CONF_LABEL_RPM,E_CONF_SLIDER_RPM
      ,E_CONF_TITLE_TIDAL,E_CONF_TITLE_VENT,E_ELEM_BOX6,E_LABEL_BPM
      ,E_LABEL_IE_RATIO,E_LABEL_PROFILE,E_PERF_CONTAINER
      ,E_PERF_SEPARATOR,E_TITLE_BPM,E_TITLE_CONF_BPM,E_TITLE_IE_RATIO
      ,E_TOP_CONTAINER_P1,E_TOP_CONTAINER_P2,E_TOP_CONTAINER_TXT
      ,E_TOP_SHADOW};
// Must use separate enum for fonts with MAX_FONT at end to use gslc_FontSet.
enum {E_AO_10X16PT7B,E_AO_5X8PT7B,E_AO_DOSIS_BOOK8PT7B
      ,E_AO_FREESANS12PT7B,E_AO_NOTOSANS8PT7B,MAX_FONT};
//<Enum !End!>

// ------------------------------------------------
// Instantiate the GUI
// ------------------------------------------------

// ------------------------------------------------
// Define the maximum number of elements and pages
// ------------------------------------------------
//<ElementDefines !Start!>
#define MAX_PAGE                4

#define MAX_ELEM_PG_BASE 7 // # Elems total on page
#define MAX_ELEM_PG_BASE_RAM MAX_ELEM_PG_BASE // # Elems in RAM

#define MAX_ELEM_PG_MAIN 10 // # Elems total on page
#define MAX_ELEM_PG_MAIN_RAM MAX_ELEM_PG_MAIN // # Elems in RAM

#define MAX_ELEM_PG_MOTION 2 // # Elems total on page
#define MAX_ELEM_PG_MOTION_RAM MAX_ELEM_PG_MOTION // # Elems in RAM

#define MAX_ELEM_PG_CONFIG 10 // # Elems total on page
#define MAX_ELEM_PG_CONFIG_RAM MAX_ELEM_PG_CONFIG // # Elems in RAM
//<ElementDefines !End!>

// ------------------------------------------------
// Create element storage
// ------------------------------------------------
gslc_tsGui                      m_gui;
gslc_tsDriver                   m_drv;
gslc_tsFont                     m_asFont[MAX_FONT];
gslc_tsPage                     m_asPage[MAX_PAGE];

//<GUI_Extra_Elements !Start!>
gslc_tsElem                     m_asBasePage1Elem[MAX_ELEM_PG_BASE_RAM];
gslc_tsElemRef                  m_asBasePage1ElemRef[MAX_ELEM_PG_BASE];
gslc_tsElem                     m_asPage1Elem[MAX_ELEM_PG_MAIN_RAM];
gslc_tsElemRef                  m_asPage1ElemRef[MAX_ELEM_PG_MAIN];
gslc_tsElem                     m_asPage2Elem[MAX_ELEM_PG_MOTION_RAM];
gslc_tsElemRef                  m_asPage2ElemRef[MAX_ELEM_PG_MOTION];
gslc_tsElem                     m_asPage3Elem[MAX_ELEM_PG_CONFIG_RAM];
gslc_tsElemRef                  m_asPage3ElemRef[MAX_ELEM_PG_CONFIG];
gslc_tsXSlider                  m_sXSlider1;

#define MAX_STR                 100

//<GUI_Extra_Elements !End!>

// ------------------------------------------------
// Program Globals
// ------------------------------------------------

// Element References for direct access
//<Extern_References !Start!>
extern gslc_tsElemRef* m_pElemOutTxt9;
extern gslc_tsElemRef* m_pElemSlider1;
extern gslc_tsElemRef* m_pLabelProfile;
extern gslc_tsElemRef* m_pLabel_BPM;
extern gslc_tsElemRef* m_pLabel_IERATIO;
extern gslc_tsElemRef* m_pTitleText;
//<Extern_References !End!>

// Define debug message function
static int16_t DebugOut(char ch);

// ------------------------------------------------
// Callback Methods
// ------------------------------------------------
bool CbBtnCommon(void* pvGui,void *pvElemRef,gslc_teTouch eTouch,int16_t nX,int16_t nY);
bool CbCheckbox(void* pvGui, void* pvElemRef, int16_t nSelId, bool bState);
bool CbDrawScanner(void* pvGui,void* pvElemRef,gslc_teRedrawType eRedraw);
bool CbKeypad(void* pvGui, void *pvElemRef, int16_t nState, void* pvData);
bool CbListbox(void* pvGui, void* pvElemRef, int16_t nSelId);
bool CbSlidePos(void* pvGui,void* pvElemRef,int16_t nPos);
bool CbSpinner(void* pvGui, void *pvElemRef, int16_t nState, void* pvData);
bool CbTickScanner(void* pvGui,void* pvScope);

// ------------------------------------------------
// Create page elements
// ------------------------------------------------
void InitGUIslice_gen()
{
  gslc_tsElemRef* pElemRef = NULL;

  if (!gslc_Init(&m_gui,&m_drv,m_asPage,MAX_PAGE,m_asFont,MAX_FONT)) { return; }

  // ------------------------------------------------
  // Load Fonts
  // ------------------------------------------------
//<Load_Fonts !Start!>
    if (!gslc_FontSet(&m_gui,E_AO_10X16PT7B,GSLC_FONTREF_PTR,NULL,2)) { return; }
    if (!gslc_FontSet(&m_gui,E_AO_5X8PT7B,GSLC_FONTREF_PTR,NULL,1)) { return; }
    if (!gslc_FontSet(&m_gui,E_AO_DOSIS_BOOK8PT7B,GSLC_FONTREF_PTR,&dosis_book8pt7b,1)) { return; }
    if (!gslc_FontSet(&m_gui,E_AO_FREESANS12PT7B,GSLC_FONTREF_PTR,&FreeSans12pt7b,1)) { return; }
    if (!gslc_FontSet(&m_gui,E_AO_NOTOSANS8PT7B,GSLC_FONTREF_PTR,&NotoSans8pt7b,1)) { return; }
//<Load_Fonts !End!>

//<InitGUI !Start!>
  gslc_PageAdd(&m_gui,E_PG_BASE,m_asBasePage1Elem,MAX_ELEM_PG_BASE_RAM,m_asBasePage1ElemRef,MAX_ELEM_PG_BASE);
  gslc_PageAdd(&m_gui,E_PG_MAIN,m_asPage1Elem,MAX_ELEM_PG_MAIN_RAM,m_asPage1ElemRef,MAX_ELEM_PG_MAIN);
  gslc_PageAdd(&m_gui,E_PG_MOTION,m_asPage2Elem,MAX_ELEM_PG_MOTION_RAM,m_asPage2ElemRef,MAX_ELEM_PG_MOTION);
  gslc_PageAdd(&m_gui,E_PG_CONFIG,m_asPage3Elem,MAX_ELEM_PG_CONFIG_RAM,m_asPage3ElemRef,MAX_ELEM_PG_CONFIG);

  // Now mark E_PG_BASE as a "base" page which means that it's elements
  // are always visible. This is useful for common page elements.
  gslc_SetPageBase(&m_gui, E_PG_BASE);


  // NOTE: The current page defaults to the first page added. Here we explicitly
  //       ensure that the main page is the correct page no matter the add order.
  gslc_SetPageCur(&m_gui,E_PG_MAIN);
  
  // Set Background to a flat color
  gslc_SetBkgndColor(&m_gui,GSLC_COL_BLACK);

  // -----------------------------------
  // PAGE: E_PG_BASE
  
   
  // Create E_TOP_SHADOW box
  pElemRef = gslc_ElemCreateBox(&m_gui,E_TOP_SHADOW,E_PG_BASE,(gslc_tsRect){5,50,310,2});
  gslc_ElemSetCol(&m_gui,pElemRef,MTL_COL_DIVIDER,MTL_COL_DIVIDER,MTL_COL_DIVIDER);
   
  // Create E_TOP_CONTAINER_P1 box
  pElemRef = gslc_ElemCreateBox(&m_gui,E_TOP_CONTAINER_P1,E_PG_BASE,(gslc_tsRect){5,5,310,25});
  gslc_ElemSetRoundEn(&m_gui, pElemRef, true);
  gslc_ElemSetCol(&m_gui,pElemRef,MTL_COL_CYAN_P,MTL_COL_CYAN_P,MTL_COL_CYAN_P);
   
  // Create E_TOP_CONTAINER_P2 box
  pElemRef = gslc_ElemCreateBox(&m_gui,E_TOP_CONTAINER_P2,E_PG_BASE,(gslc_tsRect){5,20,310,30});
  gslc_ElemSetCol(&m_gui,pElemRef,MTL_COL_CYAN_P,MTL_COL_CYAN_P,MTL_COL_CYAN_P);
  
  // Create E_TOP_CONTAINER_TXT runtime modifiable text
  static char m_sDisplayText1[16] = "TitleScreen";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_TOP_CONTAINER_TXT,E_PG_BASE,(gslc_tsRect){62,12,195,28},
    (char*)m_sDisplayText1,16,E_AO_FREESANS12PT7B);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_MID);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_WHITE,MTL_COL_CYAN_P,GSLC_COL_BLACK);
  m_pTitleText = pElemRef;
   
  // Create E_ELEM_BOX6 box
  pElemRef = gslc_ElemCreateBox(&m_gui,E_ELEM_BOX6,E_PG_BASE,(gslc_tsRect){15,210,20,20});
  gslc_ElemSetCol(&m_gui,pElemRef,MTL_COL_CYAN_DK_P,MTL_COL_CYAN_DK_P,MTL_COL_CYAN_DK_P);
   
  // Create E_BOT_CONTAINER_P1 box
  pElemRef = gslc_ElemCreateBox(&m_gui,E_BOT_CONTAINER_P1,E_PG_BASE,(gslc_tsRect){5,220,310,15});
  gslc_ElemSetRoundEn(&m_gui, pElemRef, true);
  gslc_ElemSetCol(&m_gui,pElemRef,MTL_COL_CYAN_P,MTL_COL_CYAN_P,MTL_COL_CYAN_P);
   
  // Create E_BOT_CONTAINER_P2 box
  pElemRef = gslc_ElemCreateBox(&m_gui,E_BOT_CONTAINER_P2,E_PG_BASE,(gslc_tsRect){5,205,310,20});
  gslc_ElemSetCol(&m_gui,pElemRef,MTL_COL_CYAN_P,MTL_COL_CYAN_P,MTL_COL_CYAN_P);

  // -----------------------------------
  // PAGE: E_PG_MAIN
  
   
  // Create E_BACKGROUND_FRAME box
  pElemRef = gslc_ElemCreateBox(&m_gui,E_BACKGROUND_FRAME,E_PG_MAIN,(gslc_tsRect){5,52,310,153});
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_WHITE,GSLC_COL_WHITE,GSLC_COL_WHITE);
  
  // create E_BTN_START button with text label
  pElemRef = gslc_ElemCreateBtnTxt(&m_gui,E_BTN_START,E_PG_MAIN,
    (gslc_tsRect){10,70,300,40},(char*)"Iniciar Proceso",0,E_AO_10X16PT7B,&CbBtnCommon);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_WHITE,MTL_COL_CYAN_P,MTL_COL_CYAN_DK_P);
  gslc_ElemSetRoundEn(&m_gui, pElemRef, true);
  
  // create E_BTN_CONFIG button with text label
  pElemRef = gslc_ElemCreateBtnTxt(&m_gui,E_BTN_CONFIG,E_PG_MAIN,
    (gslc_tsRect){215,120,95,72},(char*)"Ajustes",0,E_AO_10X16PT7B,&CbBtnCommon);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_WHITE,MTL_COL_CYAN_P,MTL_COL_CYAN_DK_P);
  gslc_ElemSetRoundEn(&m_gui, pElemRef, true);
  
  // Create E_LABEL_PROFILE runtime modifiable text
  static char m_sDisplayText3[16] = "Ninguno";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_LABEL_PROFILE,E_PG_MAIN,(gslc_tsRect){50,120,135,19},
    (char*)m_sDisplayText3,16,E_AO_NOTOSANS8PT7B);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,MTL_PRIMARY_TXT);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_WHITE,GSLC_COL_WHITE,GSLC_COL_WHITE);
  m_pLabelProfile = pElemRef;
   
  // Create E_PERF_CONTAINER box
  pElemRef = gslc_ElemCreateBox(&m_gui,E_PERF_CONTAINER,E_PG_MAIN,(gslc_tsRect){20,140,180,50});
  gslc_ElemSetRoundEn(&m_gui, pElemRef, true);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_WHITE,MTL_COL_CYAN_P,MTL_COL_CYAN_P);
  
  // Create E_TITLE_BPM text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_TITLE_BPM,E_PG_MAIN,(gslc_tsRect){30,150,18,10},
    (char*)"Rpm",0,E_AO_5X8PT7B);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetCol(&m_gui,pElemRef,MTL_COL_CYAN_P,MTL_COL_CYAN_P,GSLC_COL_BLACK);
  
  // Create E_LABEL_BPM runtime modifiable text
  static char m_sDisplayText4[3] = "0";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_LABEL_BPM,E_PG_MAIN,(gslc_tsRect){115,150,12,10},
    (char*)m_sDisplayText4,3,E_AO_5X8PT7B);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetCol(&m_gui,pElemRef,MTL_COL_CYAN_P,MTL_COL_CYAN_P,MTL_COL_CYAN_P);
  m_pLabel_BPM = pElemRef;
  
  // Create E_TITLE_IE_RATIO text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_TITLE_IE_RATIO,E_PG_MAIN,(gslc_tsRect){30,170,66,10},
    (char*)"Ventilacion",0,E_AO_5X8PT7B);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetCol(&m_gui,pElemRef,MTL_COL_CYAN_P,MTL_COL_CYAN_P,MTL_COL_CYAN_P);
  
  // Create E_LABEL_IE_RATIO runtime modifiable text
  static char m_sDisplayText5[4] = "0:0";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_LABEL_IE_RATIO,E_PG_MAIN,(gslc_tsRect){115,170,18,10},
    (char*)m_sDisplayText5,4,E_AO_5X8PT7B);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetCol(&m_gui,pElemRef,MTL_COL_CYAN_P,MTL_COL_CYAN_P,MTL_COL_CYAN_P);
  m_pLabel_IERATIO = pElemRef;

  // Create E_PERF_SEPARATOR line 
  pElemRef = gslc_ElemCreateLine(&m_gui,E_PERF_SEPARATOR,E_PG_MAIN,25,165,195,165);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_GRAY_LT2,GSLC_COL_GRAY_LT2);

  // -----------------------------------
  // PAGE: E_PG_MOTION
  
   
  // Create E_BACKGROUND_FRAME_MOTION box
  pElemRef = gslc_ElemCreateBox(&m_gui,E_BACKGROUND_FRAME_MOTION,E_PG_MOTION,(gslc_tsRect){5,52,310,153});
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_WHITE,GSLC_COL_WHITE,GSLC_COL_WHITE);
  
  // create E_BTN_STOP button with text label
  pElemRef = gslc_ElemCreateBtnTxt(&m_gui,E_BTN_STOP,E_PG_MOTION,
    (gslc_tsRect){20,155,280,40},(char*)"Detener Operacion",0,E_AO_10X16PT7B,&CbBtnCommon);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_WHITE,GSLC_COL_RED_LT3,GSLC_COL_RED_DK2);
  gslc_ElemSetRoundEn(&m_gui, pElemRef, true);

  // -----------------------------------
  // PAGE: E_PG_CONFIG
  
   
  // Create E_BACKGROUND_FRAME_C box
  pElemRef = gslc_ElemCreateBox(&m_gui,E_BACKGROUND_FRAME_C,E_PG_CONFIG,(gslc_tsRect){5,52,310,153});
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_WHITE,GSLC_COL_WHITE,GSLC_COL_WHITE);
  
  // create E_BTN_CONF_ADULT button with text label
  pElemRef = gslc_ElemCreateBtnTxt(&m_gui,E_BTN_CONF_ADULT,E_PG_CONFIG,
    (gslc_tsRect){10,60,80,40},(char*)"Adulto",0,E_AO_DOSIS_BOOK8PT7B,&CbBtnCommon);
  gslc_ElemSetCol(&m_gui,pElemRef,MTL_COL_CYAN_DK_P,MTL_COL_CYAN_P,MTL_COL_CYAN_DK_P);
  gslc_ElemSetRoundEn(&m_gui, pElemRef, true);
  
  // create E_BTN_CONF_YOUNG button with text label
  pElemRef = gslc_ElemCreateBtnTxt(&m_gui,E_BTN_CONF_YOUNG,E_PG_CONFIG,
    (gslc_tsRect){10,105,80,40},(char*)"Joven",0,E_AO_DOSIS_BOOK8PT7B,&CbBtnCommon);
  gslc_ElemSetCol(&m_gui,pElemRef,MTL_COL_CYAN_DK_P,MTL_COL_CYAN_P,MTL_COL_CYAN_DK_P);
  gslc_ElemSetRoundEn(&m_gui, pElemRef, true);
  
  // create E_BTN_CONF_KID button with text label
  pElemRef = gslc_ElemCreateBtnTxt(&m_gui,E_BTN_CONF_KID,E_PG_CONFIG,
    (gslc_tsRect){10,150,80,40},(char*)"Infante",0,E_AO_DOSIS_BOOK8PT7B,&CbBtnCommon);
  gslc_ElemSetCol(&m_gui,pElemRef,MTL_COL_CYAN_DK_P,MTL_COL_CYAN_P,MTL_COL_CYAN_DK_P);
  gslc_ElemSetRoundEn(&m_gui, pElemRef, true);
  
  // Create E_TITLE_CONF_BPM text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_TITLE_CONF_BPM,E_PG_CONFIG,(gslc_tsRect){100,65,186,10},
    (char*)"Respiraciones Por Minuto (rpm):",0,E_AO_5X8PT7B);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,MTL_PRIMARY_TXT);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_WHITE,GSLC_COL_WHITE,GSLC_COL_WHITE);

  // Create slider E_CONF_SLIDER_RPM 
  pElemRef = gslc_ElemXSliderCreate(&m_gui,E_CONF_SLIDER_RPM,E_PG_CONFIG,&m_sXSlider1,
          (gslc_tsRect){100,80,200,20},6,40,0,5,false);
  gslc_ElemXSliderSetStyle(&m_gui,pElemRef,true,MTL_COL_CYAN_P,6,10,MTL_PRIMARY_TXT);
  gslc_ElemXSliderSetPosFunc(&m_gui,pElemRef,&CbSlidePos);
  gslc_ElemSetCol(&m_gui,pElemRef,MTL_COL_CYAN_P,GSLC_COL_WHITE,MTL_COL_CYAN_LT_P);
  m_pElemSlider1 = pElemRef;
  
  // Create E_CONF_LABEL_RPM runtime modifiable text
  static char m_sDisplayText9[3] = "0";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_CONF_LABEL_RPM,E_PG_CONFIG,(gslc_tsRect){290,60,18,19},
    (char*)m_sDisplayText9,3,E_AO_DOSIS_BOOK8PT7B);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_RED);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_WHITE,GSLC_COL_WHITE,GSLC_COL_WHITE);
  m_pElemOutTxt9 = pElemRef;
  
  // Create E_CONF_TITLE_VENT text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_CONF_TITLE_VENT,E_PG_CONFIG,(gslc_tsRect){100,110,72,10},
    (char*)"Ventilación:",0,E_AO_5X8PT7B);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,MTL_PRIMARY_TXT);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_WHITE,GSLC_COL_WHITE,GSLC_COL_WHITE);
  
  // Create E_CONF_TITLE_TIDAL text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_CONF_TITLE_TIDAL,E_PG_CONFIG,(gslc_tsRect){205,110,84,10},
    (char*)"Volumen Tidal:",0,E_AO_5X8PT7B);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,MTL_PRIMARY_TXT);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_WHITE,GSLC_COL_WHITE,GSLC_COL_WHITE);
  
  // create E_CONF_BTN_BACK button with text label
  pElemRef = gslc_ElemCreateBtnTxt(&m_gui,E_CONF_BTN_BACK,E_PG_CONFIG,
    (gslc_tsRect){100,150,80,40},(char*)"Volver",0,E_AO_10X16PT7B,&CbBtnCommon);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_WHITE,MTL_COL_CYAN_P,MTL_COL_CYAN_DK_P);
  gslc_ElemSetRoundEn(&m_gui, pElemRef, true);
//<InitGUI !End!>

//<Startup !Start!>
  gslc_SetTransparentColor(&m_gui, GSLC_COL_BLACK);
//<Startup !End!>

}

#endif // end _GUISLICE_GEN_H
