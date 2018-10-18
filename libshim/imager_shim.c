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
typedef unsigned char       NvBool;
typedef int                 NvS32;
typedef unsigned long long  NvU64;

NvBool NvOdmImagerGetDevices(NvS32 *pCount, int *phImagers){
	ALOGI("NvOdmImagerGetDevices is called\n");
}

void NvOdmImagerReleaseDevices(NvS32 Count, int *phImagers) {
	ALOGI("NvOdmImagerReleaseDevices is called\n");
}

NvBool NvOdmImagerOpen(NvU64 ImagerGUID, int *phImager) {
	ALOGI("NvOdmImagerOpen is called\n");
}

void NvOdmImagerClose(int hImager) {
	ALOGI("NvOdmImagerClose is called\n");
}

void NvOdmImagerGetCapabilities(int hImager, int *pCapabilities) {
	ALOGI("NvOdmImagerGetCapabilities is called\n");
}

void NvOdmImagerListSensorModes(int hImager, int *pModes, NvS32 *pNumberOfModes) {
	ALOGI("NvOdmImagerListSensorModes is called\n");
}

NvBool NvOdmImagerSetSensorMode(int hImager, const int *pParameters,
				int *pSelectedMode, int *pResult) {
	ALOGI("NvOdmImagerSetSensorMode is called\n");
}

NvBool NvOdmImagerSetPowerLevel(int hImager, int Devices, int PowerLevel) {
	ALOGI("NvOdmImagerSetPowerLevel is called\n");
}

NvBool NvOdmImagerSetParameter(int hImager, int Param,
				NvS32 SizeOfValue, const void *pValue) {
	ALOGI("NvOdmImagerSetParameter is called\n");
}

NvBool NvOdmImagerGetParameter(int hImager, int Param,
				NvS32 SizeOfValue, void *pValue) {
	ALOGI("NvOdmImagerGetParameter is called\n");
}
