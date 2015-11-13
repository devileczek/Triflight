/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef SRC_MAIN_FLIGHT_MIXER_TRICOPTER_H_
#define SRC_MAIN_FLIGHT_MIXER_TRICOPTER_H_

void triInitMixer(const servoParam_t * const pTailServoConfig, const int16_t * pTailServo, mixerConfig_t *mixerConfig);

float triGetVirtualServoAngle();

uint16_t triGetLinearServoValue(servoParam_t *servoConf, uint16_t servoValue);

void triServoMixer();

int16_t triGetMotorCorrection(uint8_t motorIndex);

uint8_t triUnarmedServoEnabled();

#endif /* SRC_MAIN_FLIGHT_MIXER_TRICOPTER_H_ */
