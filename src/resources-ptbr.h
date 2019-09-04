/**********************************************************************
 BrewManiac
 created by Vito Tai
 Copyright (C) 2015 Vito Tai

 This soft ware is provided as-is. Use at your own risks.
 You are free to modify and distribute this software without removing
 this statement.
 BrewManiac by Vito Tai is licensed under a Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License.
***********************************************************************/

#ifndef RESOURCES_H
#define RESOURCES_H

#define StringConst(v,c) const char C_##v []  PROGMEM = c
#define STR(v) C_##v

#define DefineButtonLabel(N,S,v) const byte BtnLabelId_##N=v; const char BtnLabel_##N[] PROGMEM = S
#define ButtonLabel(N) BtnLabelId_##N,BtnLabel_##N

#define _makeVERSION_INFORMATION(a) "Caju Brew - " a
#define _makeVERSION_indirect(v) _makeVERSION_INFORMATION(v)
#define VERSION_INFORMATION  _makeVERSION_indirect(_VERSION)

typedef const char* str_t;
#define str_t const char*

StringConst(IpAddress,"IP:");
StringConst(HS_Session_Number,"Adicao Lupu");
StringConst(HS_Start,"Inic Lup");
StringConst(HS_Keep,"Limi Lup");
StringConst(PBH_x,"PBH #");

StringConst(min,"min");

StringConst( welcome,VERSION_INFORMATION);

StringConst( Initialization,"Conectando...");
StringConst( SetupNetwork,"Config. Rede");

#if NoDelayStart == false
StringConst(To_be_started_in,"Inicio Em...");
StringConst( Setting_Delay,"Config. Atraso");
StringConst( Delay_Start,"Atrasar Inicio?");
#endif

StringConst( No_Delay_Start,"Atraso Inic");

StringConst( Resume_Process,"Continuar...?");

StringConst( In_Pause,"Pausado");
StringConst( IODINE_TEST,"TESTE DE IODO");
StringConst( AutomaticMode, "MODO AUTOMATICO");
StringConst( Pump_Prime, "Pulsando Bomba");
StringConst( Auto_Label, "AUTO -->");

#if MaximumNumberOfSensors > 1
// less than 11 chars, avoid overwrite 2nd temp display
StringConst( TemperatureReached,"SP Ating.");
StringConst(Add_Malt, "Adc. Malte");
StringConst(Remove_Malt, "Rem. Malte");

#if EnableExtendedMashStep
StringConst(Skip_Or_Extend,"Prol/Avan?");
#else
StringConst(Go_to_next_step,"Prox Etapa?");
#endif

#else
StringConst( TemperatureReached,"SP Ating.");
StringConst(Add_Malt, "Adc Malte");
StringConst(Remove_Malt, "Rem. Malte");

#if EnableExtendedMashStep
StringConst(Skip_Or_Extend,"Contin, ou Avan?");
#else
StringConst(Go_to_next_step,"Ir p/ prox etp?");
#endif

#endif

StringConst(START_COOLING,"INIC. RESFRIA.");
StringConst(WHIRLPOOL,"WHIRLPOOL");
StringConst(Timeing_Whirlpool,"Tempo Whirlpool");

StringConst(Brewing_Process,"Brassagem");
StringConst(Finished,"Finalizado");
//button labels

#if NoDelayStart == false
//DefineButtonLabel( x_x_Quit_Go,       "          Quit  Go",0);
DefineButtonLabel( x_x_Quit_Go,       "          Sair  Ir",0);

#endif
DefineButtonLabel( x_x_x_Ok,          "---  ---  ---   Ok",1);
DefineButtonLabel( x_x_Edit_Ok,       "---  ---  Edit  Ok",2);
DefineButtonLabel( Up_Down_Next_x,    "UP   DWN   >>  ---",3);
DefineButtonLabel( Up_Down_Done_x,    "UP  DWN Pronto ---",4);

DefineButtonLabel( No_Yes,            "           Nao Sim",5);
#if SupportDistilling
DefineButtonLabel( Manual_Auto_Setup, "DST MAN AUTO CONF.",6);
#else
DefineButtonLabel( Manual_Auto_Setup, "--- MAN AUTO CONF.",6);
#endif

#if UsePaddleInsteadOfPump
DefineButtonLabel( _Pump_Rest_,       " -  Stir  Rest  - ",7);
#else
DefineButtonLabel( _Pump_Rest_,       " -  Bomb  Desc  - ",7);
#endif


#if UsePaddleInsteadOfPump
DefineButtonLabel( Continue_Yes_Pmp,  "Continue: Yes Stir",8);
#else
DefineButtonLabel( Continue_Yes_Pmp,  "Continuar: Sim  Bmb",8);
#endif

DefineButtonLabel( Continue_Yes_No,   "Continuar: Sim  Nao",9);

#if UsePaddleInsteadOfPump
DefineButtonLabel( x_x_x_Pmp,         "--* *--  ---  Stir",10);
DefineButtonLabel( x_x_Time_Pmp,      "--* *--  Tme  Stir",11);
DefineButtonLabel( Up_Down_x_Pmp,     "UP* *DWN  --- Stir",12);
#else
DefineButtonLabel( x_x_x_Pmp,         "--* *--  ---  Bmb",10);
DefineButtonLabel( x_x_Time_Pmp,      "--* *--  Tmp  Bmb",11);
//DefineButtonLabel( Up_Down_x_Pmp,     "UP* *DWN  ---  Bmb",12);
DefineButtonLabel( Up_Down_x_Pmp,     "UP* *DWN  Res  Bmb",12);
#endif

DefineButtonLabel( Up_Down_x_x,       "UP* *DWN  ---  ---",13);
DefineButtonLabel( x_x_Exit_x,        "---  ---  Sair ---",14);
DefineButtonLabel( x_x_Ok_x,          "---  ---   Ok  ---",15);

#if UsePaddleInsteadOfPump
DefineButtonLabel( Up_Down_END_Pmp,   "UP* *DWN  FIM Stir",16);
DefineButtonLabel( Up_Down_Heat_Pmp,  "UP* *DWN Heat Stir",17);
#else
DefineButtonLabel( Up_Down_END_Pmp,   "UP* *DWN  FIM  Bmb",16);
DefineButtonLabel( Up_Down_Heat_Pmp,  "UP* *DWN  RES  BMB",17);
#endif

DefineButtonLabel( Up_Down_Pause_STP, "UP* *DWN Pause STP",18);

DefineButtonLabel( Up_Down_PmPus_STP, "UP* *DWN  Bmb STP",19);

DefineButtonLabel( Up_Down_Pause_x,   "UP* *DWN Pausa ---",20);
DefineButtonLabel( Up_Down_Skip_Ok,   "UP* *DWN Pular  Ok",21);
DefineButtonLabel( Up_Down_x_Ok,      "UP* *DWN  ---   Ok",22);

DefineButtonLabel( Up_Down_Quit_Ok,   "Up   Dwn  Sair  Ok",23);
DefineButtonLabel( x_Down_Quit_Ok,    "---  Dwn  Sair  Ok",24);
DefineButtonLabel( Up_x_Quit_Ok,      "Up   ---  Sair  Ok",25);

#if UsePaddleInsteadOfPump
DefineButtonLabel( Up_Down_Pause_Pmp, "UP* *DWN Pause Stir",26);
DefineButtonLabel( Up_Down_RUN_Pmp,   "UP* *DWN  RUN  Stir",27);
#else
DefineButtonLabel( Up_Down_Pause_Pmp, "UP* *DWN Pausa Bmb",26);
DefineButtonLabel( Up_Down_RUN_Pmp,   "UP* *DWN  Exe  Bmb",27);
#endif

DefineButtonLabel( Up_Down_End_More,  "UP* *DWN Done Mais",28);

DefineButtonLabel( Up_x_x_Ok,  		  "Up   ---  ---   Ok",29);
DefineButtonLabel( x_Down_x_Ok,   	  "---  Dwn  ---   Ok",30);

#if UsePaddleInsteadOfPump
DefineButtonLabel( x_x_Exit_Pmp,      "---  --- Exit Stir",31);
#else
DefineButtonLabel( x_x_Exit_Pmp,      "---  ---  Sair Bmb",31);
#endif

DefineButtonLabel( Tune_PID_No_Yes,   "Cal. PID?  Nao Sim",32);
DefineButtonLabel( Stop_No_Yes,       " Parar?    Nao Sim",33);

DefineButtonLabel( AccessPoint_Yes,   "Modo AP?      Yes",34);

DefineButtonLabel( Extend_Skip_Back,   "Etapa -  Prox/Vol",35);

#if UsePaddleInsteadOfPump
DefineButtonLabel( Up_Down_Skip_Pmp,   "UP* *DWN Skip Stir",36);
#else
DefineButtonLabel( Up_Down_Skip_Pmp,   "UP* *DWN Pular Pmp",36);
#endif
DefineButtonLabel( x_x_Mashout_Extend,  "        M.Out  Ext",37);
DefineButtonLabel( DistillConfirm,  "    MAN AUTO CANCL",38);
// end of menu

StringConst( SensorResolution ,"Resol. Sensor");

StringConst( Manual_Mode ,"MODO MANUAL");
StringConst( Water_Added ,"Agua Adicionada?");

#if SpargeHeaterSupport == true
StringConst( SpargeWater_Added ,"Adic. Agua Sparge?");
StringConst( Sparge_Heater,"Rele Sparge");
StringConst( Enable,"Sparge Heatine");
StringConst( Temp_Ctrl,"Contrl Temp");
StringConst( Sparge_Sensor,"Sensor Sparge");
StringConst( Sparge_Temp,"Temp Sparge");
StringConst( Temp_Diff,"Histerese");
#endif

StringConst( PWM_Is, "PWM=   %");

// Setting strings
//StringConst( Setup, "SETUP MENU");
StringConst( Setup, "CONFIGURACOES");
StringConst( PID_PWM, "PID -- PWM");
StringConst( Misc_Setting, "Param. Gerais");

StringConst( Button_Buzz, "Teste Buzzer");
StringConst( PumpPrime, "Pulsos Bomba");
StringConst( PrimeOn, "Pulsar On");
StringConst( PrimeOff, "Pulsar Off");

StringConst( PID_AUTOTUNE, "PID Autoconfig");

//StringConst( Use, "Use");
//StringConst( Electric, "Electric");
//StringConst( Gas, "Gas");
#if SecondaryHeaterSupport == true
StringConst( kP_1, "1st Only kP");
StringConst( kI_1, "1st Only kI");
StringConst( kD_1, "1st Only kD");

StringConst( kP_2, "2nd Only kP");
StringConst( kI_2, "2nd Only kI");
StringConst( kD_2, "2nd Only kD");

StringConst( kP_both, "ambos: kP");
StringConst( kI_both, "ambos: kI");
StringConst( kD_both, "ambos: kD");

StringConst(HeaterPreMash,  "Rele PreMash");
StringConst(HeaterMashing,  "Rele no Mash");
StringConst(HeaterBoiling,  "Rele na Ferv");
StringConst(HeaterPostBoil, "Rele Pos-Ferv");

StringConst(PrimaryHeater,"#1");
StringConst(SecondaryHeater,"#2");
StringConst(BothHeater,"ambos");

#else
StringConst( kP, "Ganho kP");
StringConst( kI, "Ganho kI");
StringConst( kD, "Ganho kD");
#endif

//StringConst( SampleTime, "SampleTime");
StringConst( SampleTime, "Sample Time");
StringConst( WindowSet_ms, "WindowSet ms");
StringConst( Heat_in_Boil, "PWM Fervura");

#if MaximumNumberOfSensors > 1
StringConst( Calibration, "Calibrar#");
#else
StringConst( Calibration, "Calibracao");
#endif

//StringConst( Hysteresi, "Hysteresi");
StringConst( Start_PID_In, "Inicio PID");
StringConst( PID_Dough_In, "PID DoughIn");

//StringConst( Unit_Parameters, "Unit Parameters");
StringConst( Unit_Parameters, "Param. Brassagem");
StringConst( Set_Degree, "Unid Temper.");
StringConst( Sensor, "Sensor");
StringConst( Inside, "Inside");
StringConst( Outside, "Outside");
StringConst( Temp_Boil, "Temp Ferv");

#if UsePaddleInsteadOfPump
StringConst( Pump_Cycle, "Stir Cycle");
StringConst( Pump_Rest, "Stir Rest");
StringConst( Pump_PreMash, "Stir PreMash");
#else
StringConst( Pump_Cycle, "Circula ON");
StringConst( Pump_Rest,  "Circula OFF");
StringConst( Pump_PreMash, "Circ. PreMash");
#endif
StringConst( On, "On");
StringConst( Off, "Off");
#if UsePaddleInsteadOfPump
StringConst( Pump_On_Mash, "Stir on Mash");
StringConst( Pump_Mashout, "Stir Mashout");
StringConst( Pump_On_Boil, "Stir on Boil");
StringConst( Pump_Stop, "Stir Stop");
#else
StringConst( Pump_On_Mash, "Bmb no Mash");
StringConst( Pump_Mashout, "Bmb Mashout");
StringConst( Pump_On_Boil, "Bmb na Ferv.");
StringConst( Pump_Stop, "Desl Bmb");
#endif
StringConst( PID_MaltOut, "PID Malt Out");
StringConst( Active, "Ativo");
StringConst( Passive, "Passivo");
StringConst( HeatOnPump,"Heat@Pump");

StringConst( Skip_Add, "Pul Add Malte");
StringConst( Yes, "Sim");
StringConst( No, "Nao");
StringConst( Skip_Remove, "Pul Rem Malte");
StringConst( Skip_Iodine, "Pul Tst Iodo");
StringConst( IodineTime, "Dur. Tst Iodo");
StringConst( Whirlpool_e, "Whirlpool");
StringConst( Hot, "Hot");
StringConst( Cold, "Cold"); // and off

StringConst( Set_Automation, "Param. Receita");
StringConst( Mash_In, "Mash In");
StringConst( Phytase, "Phytase");
StringConst( Glucanase, "Glucanase");
StringConst( Protease, "Protease");
StringConst( bAmylase, "\xE2""Amylase");
StringConst( aAmylase1, "\xE0""Amylase1");
StringConst( aAmylase2, "\xE0""Amylase2");
StringConst( Mash_out, "Mash Out");
StringConst( Boil, "Fervura");
StringConst( Cooling, "Resfri.");
StringConst( Whirlpool, "Whirlpool");
StringConst( HopStandChilling,"Chilling");
StringConst( HopStand, "HopStand");
StringConst( Number_Of_Hops, "Qtd Add Lupu");
StringConst( Hops_Number_leftPara, "Lupu nmbr#");
StringConst( right_Para, ")");

StringConst( Hops_Number_x, "Hop #");
StringConst( Pbh_Number_x,"PBH #");

StringConst( Manage_Recipes, "Gerir Receitas");
StringConst(Mash_x,"Mash ");

#if MaximumNumberOfSensors > 1
StringConst(Sensor_Setting, "Func. Sensores");
StringConst(No_Sensor_Found, "Sens N/ Encon.");

StringConst(Sensor_PreMash,     "PreMash Primar.");
StringConst(Sensor_Mash, 	    "Mash Primar.");
StringConst(Sensor_MashOut,     "MashOut Primar.");
StringConst(Sensor_Boil,        "Ferv. Primar.");
StringConst(Sensor_PostBoil,    "Pos-Ferv Prim.");

StringConst(AuxSensor_PreMash,  "PreMash Aux.");
StringConst(AuxSensor_Mash,     "Mash Aux.");
StringConst(AuxSensor_MashOut,  "MashOut Aux.");
StringConst(AuxSensor_Boil,     "Ferv. Aux.");
StringConst(AuxSensor_PostBoil, "Pos-Ferv Aux.");

StringConst(Sensor_Idle,        "Tela Primar.");
StringConst(AuxSensor_Idle,     "Tela Auxiliar");
StringConst(Sensor_Manual,      "Manual Primar.");
StringConst(AuxSensor_Manual,   "Manual Aux.");

#endif // MaximumNumberOfSensors > 1

#if SupportDistilling
StringConst(Manual_Distill,"Manual Distill");
StringConst(Sensor_Distill, "Distill Primario");
StringConst(AuxSensor_Distill,   "Distill Aux");

StringConst(StartTemp,   "Head Temp");
StringConst(HeadPwm,   "Head PWM");
StringConst(HeartTemp,   "Heart Temp");
StringConst(HeartPwm,   "Heart PWM");
StringConst(TailTemp,   "Tail Temp");
StringConst(TailPwm,   "Tail PWM");
StringConst(EndTemp,   "End Temp");

StringConst(Distill_Recipe,"Distill Recipe");
StringConst(StartDistilling,"Start Distilling?");
StringConst(Distilling,"Distilling");
StringConst(TurnOnCoolWater,"Start Cooling");
StringConst(Distill_finished,"Distilling Finished");

StringConst(DistillTitle,"Distill-");
StringConst(Start,"Preheat");
StringConst(Head,"Head");
StringConst(Heart,"Heart");
StringConst(Tail,"Tail");
#endif

#if EnableLevelSensor
StringConst(Enable_Level_Sensor,"Enable LV Sen");
StringConst(Lv_Trig,"LV Trig. ms");
StringConst(Ext_Pump_Rest,"Ext Pump Rest");
#endif


#endif //RESOURCES_H
