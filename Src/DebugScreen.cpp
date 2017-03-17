#include <Adafruit_SSD1306_STM32.h>
#include <MapleFreeRTOS821.h>

#include "DebugScreen.h"
#include "Utils.h"
#include "8x12Font.h"
#include "ScreenManager.h"
#include "IdleThread.h"

extern Adafruit_SSD1306 display;

enum PageId
{
	IDLE_METRICS,
	STACK_METRICS,
	
	PAGES_COUNT	
};

// default constructor
DebugScreen::DebugScreen()
{
	currentPage = 0;
}

void DebugScreen::drawScreen() const
{
	display.setFont(&Monospace8x12Font);
	
	switch(currentPage)
	{
		case IDLE_METRICS:
		{
			TickType_t totalTicks = xTaskGetTickCount();
			TickType_t idleTicks = getIdleTicks();
			display.setCursor(0, 19);
			display.print("Idle: ");
			display.print(idleTicks);
			display.print(" ");
			display.print(100. * (totalTicks - idleTicks)/totalTicks, 1);
			
			display.setCursor(0, 32);
			display.print("Total: ");
			display.print(totalTicks);
			break;
		}
		case STACK_METRICS:
			display.setCursor(0, 19);
			display.print("Max Stack:");
			
			display.setCursor(0, 32);
			display.print(uxTaskGetStackHighWaterMark(NULL));
			break;
			
		default:
			break;
	}	
}
	
void DebugScreen::onSelButton()
{
	currentPage++;
	currentPage %= PAGES_COUNT;
}

void DebugScreen::onOkButton()
{
	backToParentScreen();
}
	
const char * DebugScreen::getSelButtonText() const
{
	static const char text[] PROGMEM = "NEXT";
	return text;
}

const char * DebugScreen::getOkButtonText() const
{
	static const char text[] PROGMEM = "OK";
	return text;
}
