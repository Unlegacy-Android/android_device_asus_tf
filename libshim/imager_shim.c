/*
 * Copyright (C) 2018 Unlegacy Android Project
 * Copyright (C) 2018 Svyatoslav Ryhel
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define LOG_TAG "OdmImagerShim"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <cutils/log.h>

// Taken from nvapi.h
typedef unsigned char     NvBool;
typedef int               NvS32;
typedef unsigned __int64  NvU64;

NvBool NvOdmImagerGetDevices(NvS32 *pCount, NvOdmImagerHandle *phImagers){
	ALOGI("NvOdmImagerGetDevices is called\n");
}

void NvOdmImagerReleaseDevices(NvS32 Count, NvOdmImagerHandle *phImagers) {
	ALOGI("NvOdmImagerReleaseDevices is called\n");
}

NvBool NvOdmImagerOpen(NvU64 ImagerGUID, NvOdmImagerHandle *phImager) {
	ALOGI("NvOdmImagerOpen is called\n");
}

void NvOdmImagerClose(NvOdmImagerHandle hImager) {
	ALOGI("NvOdmImagerClose is called\n");
}

void NvOdmImagerGetCapabilities(NvOdmImagerHandle hImager, NvOdmImagerCapabilities *pCapabilities) {
	ALOGI("NvOdmImagerGetCapabilities is called\n");
}

void NvOdmImagerListSensorModes(NvOdmImagerHandle hImager, NvOdmImagerSensorMode *pModes, NvS32 *pNumberOfModes) {
	ALOGI("NvOdmImagerListSensorModes is called\n");
}

NvBool NvOdmImagerSetSensorMode(NvOdmImagerHandle hImager, const SetModeParameters *pParameters, 
								NvOdmImagerSensorMode *pSelectedMode, SetModeParameters *pResult) {
	ALOGI("NvOdmImagerSetSensorMode is called\n");
}

NvBool NvOdmImagerSetPowerLevel(NvOdmImagerHandle hImager, NvOdmImagerDeviceMask Devices, 
								NvOdmImagerPowerLevel PowerLevel) {
	ALOGI("NvOdmImagerSetPowerLevel is called\n");
}

NvBool NvOdmImagerSetParameter(NvOdmImagerHandle hImager, NvOdmImagerParameter Param, 
								NvS32 SizeOfValue, const void *pValue) {
	ALOGI("NvOdmImagerSetParameter is called\n");
}

NvBool NvOdmImagerGetParameter(NvOdmImagerHandle hImager, NvOdmImagerParameter Param, 
								NvS32 SizeOfValue, void *pValue) {
	ALOGI("NvOdmImagerGetParameter is called\n");
}
