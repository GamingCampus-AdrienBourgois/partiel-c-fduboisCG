#include "Solution1.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#include <iostream>
#ifdef COMPILE_EXERCICE_1

/* CONVERSION FORMULAS :
*Celsius to Fahrenheit °F = 9 / 5 (°C)+32 //
* Kelvin to Fahrenheit °F = 9 / 5 (K - 273) + 32 //
* Fahrenheit to Celsius °C = 5 / 9 (°F - 32) //
* Celsius to Kelvin K = °C + 273 //
* Kelvin to Celsius °C = K - 273 //
* Fahrenheit to Kelvin K = 5 / 9 (°F - 32) + 273 //
* */

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
	float _results;


	//KELVIN TO ->
	if (_from = TemperatureUnits::KELVIN, _to == TemperatureUnits::CELSIUS) {
		_results == _value - 273;
	}
	if (_from = TemperatureUnits::KELVIN, _to == TemperatureUnits::FAHRENHEIT) {
		_results == 9 / 5 * (_value - 273) + 32;
	}

	//CELSIUS TO ->
	if (_from = TemperatureUnits::CELSIUS, _to == TemperatureUnits::FAHRENHEIT) {
		_results == 9 / 5 * (_value + 32);
	}
	if (_from = TemperatureUnits::CELSIUS, _to == TemperatureUnits::KELVIN) {
		_results == _value + 273;
	}

	//FAHRENHEIT TO ->
	if (_from = TemperatureUnits::FAHRENHEIT, _to == TemperatureUnits::CELSIUS) {
		_results == 5 / 9 * (_value - 32);
	}
	if (_from = TemperatureUnits::FAHRENHEIT, _to == TemperatureUnits::KELVIN) {
		_results == 5 / 9 * (_value - 32) + 273;
	}

	return -1.0f;
}

#endif
