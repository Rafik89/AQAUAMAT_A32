/*
F    Aquamat - Sterownik akwariowy Open Source
    Copyright (C) 2009 Wojciech Todryk (wojciech@todryk.pl)

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
	
	$Id: com_menu.c 41 2009-02-23 23:01:59Z musashi@todryk.pl $
*/

/** @file strings.c
	@brief Definicje stringów używanych w programie.
*/

#include "aquamat.h"

PROGMEM const char RTC_MON_STR[] ="Po";
PROGMEM const char RTC_TUE_STR[] ="Wt";
PROGMEM const char RTC_WED_STR[] ="Sr";
PROGMEM const char RTC_THU_STR[] ="Cz";
PROGMEM const char RTC_FRI_STR[] ="Pi";
PROGMEM const char RTC_SAT_STR[] ="So";
PROGMEM const char RTC_SUN_STR[] ="Ni";
PROGMEM const char RTC_KAZ_STR[] ="Ka";

/** @var PGM_P RTC_WDAYS_STRS[] PROGMEM
	Dni tygodnia.
*/
PGM_P const RTC_WDAYS_STRS[] PROGMEM=
{
	RTC_SUN_STR,
	RTC_MON_STR,
	RTC_TUE_STR,
	RTC_WED_STR,
	RTC_THU_STR,
	RTC_FRI_STR,
	RTC_SAT_STR,
	RTC_KAZ_STR
};

PROGMEM const char AKT_S[] ="Akt";
PROGMEM const char BL_S[] ="Bl";
PROGMEM const char NZW_S[] ="Nzw";
PROGMEM const char QB_S[] ="Qb";
// PROGMEM const char ALARM_S[] ="Alarm: ";
// PROGMEM const char CENTURY_S[] = "20";
PROGMEM const char COLON_S[] = ":";
// PROGMEM const char COOLING_S[] ="Chlodzenie: ";
// PROGMEM const char DAYTIME_S[] = "Pora dnia: ";
PROGMEM const char DOT_S[] = ".";
// PROGMEM const char EVERYDAY_S[] = "Codziennie ";
PROGMEM const char EXCLEMATION_S[] = "!";
// PROGMEM const char FAILURE_S[] ="Uszkodzony ";
// PROGMEM const char FROM_S[] = "Od: ";
// PROGMEM const char GROUP_S[] ="Grupa: ";
// PROGMEM const char HEATING_S[] ="Podgrzewanie: ";
PROGMEM const char INTEMPSENS_S[] = " --.-";
// PROGMEM const char INT_MIN_S[] = "min. ";
// PROGMEM const char INT_OFF_S[] = "Wylaczony: ";
// PROGMEM const char INT_ON_S[] = "Wlaczony: ";
PROGMEM const char MAX_S[] ="Mx";
PROGMEM const char MIN_S[] ="Mn";
PROGMEM const char MINUS_S[] = "-";
PROGMEM const char MINUSMINUS_S[] = "--";
PROGMEM const char MINUSMINUSMINUS_S[] = "---";
// PROGMEM const char NNN_S[] = "\n\n\n";
// PROGMEM const char NN_S[] = "\n\n";
// PROGMEM const char NONE_S[] ="Brak ";
// PROGMEM const char NOTIFY_S[] = "Sygnalizacja alarmowa: ";
// PROGMEM const char NPAR_S[] = "\n    ";
// PROGMEM const char N_S[] = "\n";
// PROGMEM const char OFF_S[] ="Wyl. ";
// PROGMEM const char OK_S[] = "Ok";
// PROGMEM const char ON_S[] ="Wl. ";
// PROGMEM const char OUT_NONAME_S[] ="_____";
PROGMEM const char OUT_S[] ="Wy";
PROGMEM const char PAR_S[] = "    ";
PROGMEM const char RO_S[] = "R";
PROGMEM const char SLASH_S[] = "/";
PROGMEM const char SPACE_S[] = " ";
// PROGMEM const char START_S[] ="Start ";
// PROGMEM const char STATUS_ACTIVE_S[] = "Aktywn(y/e) ";
// PROGMEM const char STATUS_BAD_OUT_S[] = "Bledne wyjscie";
// PROGMEM const char STATUS_BAD_TIME_S[] = "Bledne ustawienia czas(u/ow)";
// PROGMEM const char STATUS_BAD_WDAY[] = "Nieakt. dzis";
// PROGMEM const char STATUS_BLOCKED_S[] = "Zablokowan(y/e)";
// PROGMEM const char STATUS_NOTACTIVE_S[] = "Niektywn(y/e) ";
// PROGMEM const char STATUS_OUT_BLOCKED_S[] = "Wyjscie zablokowane";
// PROGMEM const char STATUS_S[] ="Status: ";
// PROGMEM const char STATUS_STATUS_ALREADY_BUSY_S[] = "Konflikt wyjsc";
// PROGMEM const char TEMP_CURRENT_S[] ="biezaca: ";
// PROGMEM const char TEMP_FLAGS_S[] =" Flagi: ";
// PROGMEM const char TEMP_HISTERESIS_S[] ="Histereza: ";
// PROGMEM const char TEMP_MAX_S[] ="maksymalna: ";
// PROGMEM const char TEMP_MIN_S[] ="minimalna: ";
// PROGMEM const char TEMP_SENSOR_S[] = " Czujnik: ";
// PROGMEM const char TEMP_TARGET_NIGHT_S[] ="docelowa nocna: ";
// PROGMEM const char TEMP_TARGET_S[] ="docelowa: ";
// PROGMEM const char TEMP_TEMP_S[] ="Temperatura ";
// PROGMEM const char TIMER_S[] ="Timer: ";
// PROGMEM const char TO_S[] = "Do: ";
// PROGMEM const char TOP_OFF_MAX_RUN_S[] = "Pompa ";
// PROGMEM const char UINT8_BAD_S[] = "XX";
// PROGMEM const char UNKNOWN_S[] = "Nieznan(y/e)";
// PROGMEM const char WDAY_S[] = "Dzien tygodnia: ";
