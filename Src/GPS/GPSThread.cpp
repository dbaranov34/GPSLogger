#include <SerialUART.h>
#include <SerialUSB.h>
#include <Arduino_FreeRTOS.h>
#include <NMEAGPS.h>
#include "Streamers.h"

#include "GPSThread.h"
#include "GPSDataModel.h"

// A GPS parser
NMEAGPS gpsParser;

void initGPS()
{
	// GPS is attached to Serial1
	SerialUART1.begin(9600);
}

void vGPSTask(void *pvParameters)
{
	for (;;)
	{
		while(SerialUART1.available())
		{
			int c = SerialUART1.read();
			//SerialUSB.write(c);
			gpsParser.handle(c);
		}
		
		if(gpsParser.available())
		{
			GPSDataModel::instance().processNewGPSFix(gpsParser.read());
			GPSDataModel::instance().processNewSatellitesData(gpsParser.satellites, gpsParser.sat_count);
		}
			
		vTaskDelay(10);
	}
}