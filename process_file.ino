
void setDefaultValues()
{
  // This may be called once
  // Here, default values and setup configuration are made

  // Configure motor driver
  motor.setEnablePin(MOTOR_EN);
  motor.setPinsInverted(false,false,true);
  //motor.disableOutputs();
  motor.enableOutputs();

  motor.setMaxSpeed(DEFAULT_MAX_SPEED);
  motor.setSpeed(DEFAULT_INIT_SPEED);

  // Configure variable data
  current_page = gslc_GetPageCur(&m_gui);
  current_profile = ADULT;
}

void updateValues()
{
  //
  switch(current_page)
  {
    case E_PG_MAIN:
      gslc_ElemSetTxtStr(&m_gui, m_pTitleText, "Menu");
      inMotion = false;
      break;
    case E_PG_MOTION:
      gslc_ElemSetTxtStr(&m_gui, m_pTitleText, "En Proceso");
      inMotion = true;
      break;
    case E_PG_CONFIG:
      gslc_ElemSetTxtStr(&m_gui, m_pTitleText, "Ajustes");
      inMotion = false;
      break;
    default:
      inMotion = false;
      break;
  }

  switch(current_profile)
  {
    case ADULT:
      gslc_ElemSetTxtStr(&m_gui, m_pLabelProfile, "Adulto");
      break;
    case YOUNG:
      gslc_ElemSetTxtStr(&m_gui, m_pLabelProfile, "Joven");
      break;
    case KID:
      gslc_ElemSetTxtStr(&m_gui, m_pLabelProfile, "Infante");
      break;
    default:
      gslc_ElemSetTxtStr(&m_gui, m_pLabelProfile, "Personalizado");
      break;
  }
}

void updateProcess()
{
  current_page = gslc_GetPageCur(&m_gui);
  updateValues();

  if(inMotion)
  {
    startMotorMotion();
  }
  else
  {
    stopMotorMotion();
  }

  
}

void startMotorMotion()
{
  motor.enableOutputs();
  motor.runSpeed();
}

void stopMotorMotion()
{
  motor.stop();
  motor.disableOutputs();
}
