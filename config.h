#define CONFIG_BAUDRATE 9600

//////////////////////////////////////////////////////////////////////

/*                               ENCODER                           */

// Pin DT del encoder, corresponde al pin de activación
#define ENCODER_DT 22 

// Pin CLK del encoder, corresponde a la dirección de giro del encoder
#define ENCODER_CLK 23 

// Pin SW del encoder, corresponde al botón del encoder
#define ENCODER_SW 24


/////////////////////////////////////////////////////////////////////

/*                                 BUZZER                          */
#define BUZZER_PIN 25


/////////////////////////////////////////////////////////////////////

/*                                  MOTOR                          */
#define MOTOR_EN 26
#define MOTOR_DIR 27
#define MOTOR_PUL 28
#define MOTOR_STEPS 200

// No existe necesidad de cambiar esta variable si se usa un Driver
#define MOTOR_INTERFACE 1

#define DEFAULT_INIT_SPEED 200
#define DEFAULT_MAX_SPEED  1000

// Bipolar 4-wire: Black A +, Green A-, Red B +, Blue B-.

//////////////////////////////////////////////////////////////////////
