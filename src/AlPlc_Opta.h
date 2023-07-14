/*
  This file is part of the Arduino AlPlc_Opta library.
  Copyright (C) 2023 Arduino AG (http://www.arduino.cc/)
  SPDX-License-Identifier: CC-BY-4.0

  https://creativecommons.org/licenses/by/4.0/
*/

#ifndef ALPLC_OPTA_H
#define ALPLC_OPTA_H

#include <ArduinoRS485.h>
#include <PortentaEthernet.h>

extern "C" void sysMbMRtu_SetPostDelay(uint16_t delay);

extern uint8_t m_PLCSharedVarsOutputBuf[];
extern uint8_t m_PLCSharedVarsInputBuf[];


class AlPlc
{
public:
	AlPlc(int32_t sketchCrc);
	void Run();
	void ListFiles(bool resetPlc);
	void InitFileSystem();
};

#endif
