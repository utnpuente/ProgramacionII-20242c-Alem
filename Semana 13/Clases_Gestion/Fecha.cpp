#include <iostream>
#include <string>
#include <ctime>
#include "Fecha.h"


//------------------------
// CONSTRUCTORES
//------------------------
Fecha::Fecha()
{
    /// tome la fecha del sistema
    establecerFechaDeSistema();
}

Fecha::Fecha(int dia, int mes, int anio)
{
    _dia = dia;
    _mes = mes;
    _anio = anio;

    /// validar
    if(dia <= 0 || mes <=0 || mes > 12 || anio > 9999)
    {
        establecerFechaDeSistema();
    }
    else
    {
        int dias[12] = {31, 28, 31, 30, 31,30, 31, 31, 30, 31, 30, 31};

        if(esBisiesto())
        {
            dias[1]++;
        }

        if(dia > dias[mes - 1])
        {
            establecerFechaDeSistema();
        }

    }
}

//------------------------
// GETTERS
//------------------------
int Fecha::getDia()
{
    return _dia;
}

int Fecha::getMes()
{
    return _mes;
}

int Fecha::getAnio()
{
    return _anio;
}

//------------------------
// SETTERS
//------------------------

 void Fecha::setDia(int dia)
 {
     _dia = dia;
 }

  void Fecha::setMes(int mes)
 {
     _mes = mes;
 }


  void Fecha::setAnio(int anio)
 {
     _anio = anio;
 }

//------------------------
// METODOS
//------------------------

void Fecha::establecerFechaDeSistema()
{
    struct tm timeinfo;
    time_t rawtime;

    time(&rawtime);

    timeinfo = *(localtime(&rawtime));

    _dia = timeinfo.tm_mday;
    _mes = timeinfo.tm_mon + 1;
    _anio = timeinfo.tm_year + 1900;
}

 bool Fecha::esBisiesto()
 {
    return _anio % 4 == 0 && _anio % 100 != 0 || _anio % 400 == 0;
 }


std::string Fecha::toString()
{

    std::string fechaFormateada = "";

    std::string DD = std::to_string(_dia); // 5 -> "05"
    std::string MM = std::to_string(_mes); // 1 -> "01"
    std::string YYYY = std::to_string(_anio); // 2020 -> "2020"

    if(_dia < 10)
    {
        DD = "0" + DD; /// "05"
    }

    if(_mes < 10)
    {
        MM = "0" + MM; /// "01"
    }

    fechaFormateada = DD + "/" + MM + "/" + YYYY;

    return fechaFormateada;

}














