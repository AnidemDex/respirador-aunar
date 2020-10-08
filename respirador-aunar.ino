//<App !Start!>
// FILE: [respirador-aunar.ino]
// Created by GUIslice Builder version: [0.15.b004]
//
// GUIslice Builder Generated File
//
// For the latest guides, updates and support view:
// https://github.com/ImpulseAdventure/GUIslice
//
//<App !End!>

// ------------------------------------------------
// Developer Info
// ------------------------------------------------
// Made by AnidemDex (Medina D.) juana18()
//
// Project hosted in:
// https://github.com/AnidemDex/respirador-aunar
// 
// All configuration related can be done in config.h
// Process related MUST be done in process_file.ino
// GUI related things should not be modified through code. Use GUISlicer instead.
// 
// Many comments in this code are auto-generated by GUISlicer Builder
// ------------------------------------------------

// ------------------------------------------------
// Headers to include
// ------------------------------------------------
#include <Encoder.h>
#include <AccelStepper.h>

#include "tools/Buzzer.h"
#include "config.h"
#include "respirador-aunar_GSLC.h"


// ------------------------------------------------
// Program Globals
// ------------------------------------------------

// Save some element references for direct access
//<Save_References !Start!>
gslc_tsElemRef* m_pElemOutTxt9    = NULL;
gslc_tsElemRef* m_pElemSlider1    = NULL;
gslc_tsElemRef* m_pLabelProfile   = NULL;
gslc_tsElemRef* m_pLabel_BPM      = NULL;
gslc_tsElemRef* m_pLabel_IERATIO  = NULL;
gslc_tsElemRef* m_pTitleText      = NULL;
//<Save_References !End!>

// Program functions
void updateProcess();
void updateValues();
void setDefaultValues();
void startMotorMotion();
void stopMotorMotion();

// Program variables
Encoder selector(ENCODER_DT, ENCODER_CLK);
Buzzer buzzer(BUZZER_PIN);
AccelStepper motor(MOTOR_INTERFACE, MOTOR_PUL, MOTOR_DIR, false);

int current_page;
int current_profile;

enum {ADULT, YOUNG, KID};

bool inMotion = false;


// Define debug message function
static int16_t DebugOut(char ch) { if (ch == (char)'\n') Serial.println(""); else Serial.write(ch); return 0; }

// ------------------------------------------------
// Callback Methods
// ------------------------------------------------
// Common Button callback
bool CbBtnCommon(void* pvGui,void *pvElemRef,gslc_teTouch eTouch,int16_t nX,int16_t nY)
{
  // Typecast the parameters to match the GUI and element types
  gslc_tsGui*     pGui     = (gslc_tsGui*)(pvGui);
  gslc_tsElemRef* pElemRef = (gslc_tsElemRef*)(pvElemRef);
  gslc_tsElem*    pElem    = gslc_GetElemFromRef(pGui,pElemRef);

  if ( eTouch == GSLC_TOUCH_UP_IN ) {
    // From the element's ID we can determine which button was pressed.
    switch (pElem->nId) {
//<Button Enums !Start!>
      case E_BTN_START:
        gslc_SetPageCur(&m_gui, E_PG_MOTION);
        break;
      case E_BTN_CONFIG:
        gslc_SetPageCur(&m_gui, E_PG_CONFIG);
        break;
      case E_BTN_STOP:
        gslc_SetPageCur(&m_gui, E_PG_MAIN);
        break;
      case E_BTN_CONF_ADULT:
        current_profile = ADULT;
        break;
      case E_BTN_CONF_YOUNG:
        current_profile = YOUNG;
        break;
      case E_BTN_CONF_KID:
        current_profile = KID;
        break;
      case E_CONF_BTN_BACK:
        gslc_SetPageCur(&m_gui, E_PG_MAIN);
        break;
//<Button Enums !End!>
      default:
        break;
    }
  }
  return true;
}
//<Checkbox Callback !Start!>
//<Checkbox Callback !End!>
//<Keypad Callback !Start!>
//<Keypad Callback !End!>
//<Spinner Callback !Start!>
//<Spinner Callback !End!>
//<Listbox Callback !Start!>
//<Listbox Callback !End!>
//<Draw Callback !Start!>
//<Draw Callback !End!>

// Callback function for when a slider's position has been updated
bool CbSlidePos(void* pvGui,void* pvElemRef,int16_t nPos)
{
  gslc_tsGui*     pGui     = (gslc_tsGui*)(pvGui);
  gslc_tsElemRef* pElemRef = (gslc_tsElemRef*)(pvElemRef);
  gslc_tsElem*    pElem    = gslc_GetElemFromRef(pGui,pElemRef);
  int16_t         nVal;

  // From the element's ID we can determine which slider was updated.
  switch (pElem->nId) {
//<Slider Enums !Start!>
    case E_CONF_SLIDER_RPM:
      // Fetch the slider position
      nVal = gslc_ElemXSliderGetPos(pGui,m_pElemSlider1);
      break;

//<Slider Enums !End!>
    default:
      break;
  }

  return true;
}
//<Tick Callback !Start!>
//<Tick Callback !End!>

void setup()
{
  // ------------------------------------------------
  // Initialize
  // ------------------------------------------------
  Serial.begin(CONFIG_BAUDRATE);
  // Wait for USB Serial 
  //delay(1000);  // NOTE: Some devices require a delay after Serial.begin() before serial port can be used

  gslc_InitDebug(&DebugOut);

  // ------------------------------------------------
  // Create graphic elements
  // ------------------------------------------------
  InitGUIslice_gen();
  setDefaultValues();

}

// -----------------------------------
// Main event loop
// -----------------------------------
void loop()
{

  updateProcess();

  // ------------------------------------------------
  // Update GUI Elements
  // ------------------------------------------------
  
  //TODO - Add update code for any text, gauges, or sliders
  
  // ------------------------------------------------
  // Periodically call GUIslice update function
  // ------------------------------------------------
  gslc_Update(&m_gui);
  
  
    
}
