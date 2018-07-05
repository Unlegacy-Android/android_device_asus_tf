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

void NvOdmImagerGetDevices(){
	ALOGI("NvOdmImagerGetDevices is called\n");
}

void NvOdmImagerReleaseDevices(){
	ALOGI("NvOdmImagerReleaseDevices is called\n");
}

void NvOdmImagerOpen(){
	ALOGI("NvOdmImagerOpen is called\n");
}

void NvOdmImagerClose(){
	ALOGI("NvOdmImagerClose is called\n");
}

void NvOdmImagerGetCapabilities(){
	ALOGI("NvOdmImagerGetCapabilities is called\n");
}

void NvOdmImagerListSensorModes(){
	ALOGI("NvOdmImagerListSensorModes is called\n");
}

void NvOdmImagerSetSensorMode(){
	ALOGI("NvOdmImagerSetSensorMode is called\n");
}

void NvOdmImagerSetPowerLevel(){
	ALOGI("NvOdmImagerSetPowerLevel is called\n");
}

void NvOdmImagerSetParameter(){
	ALOGI("NvOdmImagerSetParameter is called\n");
}

void NvOdmImagerGetParameter(){
	ALOGI("NvOdmImagerGetParameter is called\n");
}
