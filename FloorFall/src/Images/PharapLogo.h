#pragma once

//
//  Copyright (C) 2021 Pharap (@Pharap)
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

// For uint8_t
#include <stdint.h>

// For PROGMEM
#include <avr/pgmspace.h>

namespace Images
{
	constexpr uint8_t pharapLogoWidth = 48;
	constexpr uint8_t pharapLogoHeight = 48;

	constexpr uint8_t pharapLogo[] PROGMEM
	{
		// Dimensions
		pharapLogoWidth, pharapLogoHeight,

		// Frame 0
		0x24, 0x4C, 0xFF, 0xFD, 0xFC, 0xFE, 0xFD, 0xFC,
		0xFE, 0xFD, 0xFC, 0xFE, 0xFD, 0xFC, 0xFE, 0xFD,
		0xFC, 0xFE, 0x7D, 0x7C, 0x3E, 0x3D, 0x3C, 0x3E,
		0x3D, 0x3C, 0x3E, 0x3D, 0x7C, 0x7E, 0xFD, 0xFC,
		0xFE, 0xFD, 0xFC, 0xFE, 0xFD, 0xFC, 0xFE, 0xFD,
		0xFC, 0xFE, 0xFD, 0xFC, 0xFE, 0xFF, 0x24, 0x4C,
		0x49, 0x92, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0x7F, 0x1F, 0x8F, 0xE7, 0xF3, 0xF9,
		0x7C, 0x7C, 0x7E, 0x7E, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0x7E, 0x7E, 0x7C, 0x7C,
		0xF9, 0xF3, 0xE7, 0x8F, 0x1F, 0x7F, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x49, 0x92,
		0x92, 0x24, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0x01, 0x00, 0xFE, 0xFF, 0xFF, 0x01, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF,
		0xFF, 0xFF,	0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x01, 0xFF, 0xFF, 0xFE, 0x00, 0x01, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x92, 0x24,
		0x24, 0x49, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFE, 0xF8, 0xE1, 0xC7, 0x9F, 0x3E, 0x7C,
		0xF8, 0xF8, 0xF8, 0xF8, 0xFC, 0xFE, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFE, 0xFC, 0xF8, 0xF8, 0xF8, 0xF8,
		0x7C, 0x3E, 0x9F, 0xC7, 0xE1, 0xF8, 0xFE, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x24, 0x49,
		0x49, 0x92, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE,
		0xFC, 0x00, 0x01, 0x7F, 0x7F, 0x03, 0x03, 0x7F,
		0x7F, 0x03, 0x03, 0x7F, 0x7F, 0x01, 0x00, 0xFC,
		0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x49, 0x92,
		0x32, 0x24, 0xFF, 0x7F, 0x3F, 0xBF, 0x7F, 0x3F,
		0xBF, 0x7F, 0x3F, 0xBF, 0x7F, 0x3F, 0xBF, 0x7F,
		0x3F, 0xBF, 0x7E, 0x3E, 0xBE, 0x7E, 0x3E, 0xBE,
		0x7E, 0x3E, 0xBE, 0x7E, 0x3E, 0xBE, 0x7F, 0x3F,
		0xBF, 0x7F, 0x3F, 0xBF, 0x7F, 0x3F, 0xBF, 0x7F,
		0x3F, 0xBF, 0x7F, 0x3F, 0xBF, 0xFF, 0x32, 0x24
	};
}