# ESPHome project to display wattage available to home.

Our main circuit breaker is for 25 amps (single phase). This quite limits a number of appliances that can be powered on simultaneously. 
For example it doesn't go well to turn on the electric oven + dishwasher + washing machine. This is why I installed Shelly EM to monitor power consumption and connected it via MQTT to ESP32 with LCD that displays remaining available power and if it's lower than any of large appliance power then it displays warning with a lists of appliances that shouldn't be powered on.

Example when everything's OK: ![image](https://user-images.githubusercontent.com/16558674/198727731-7290e76c-7eb8-43b8-9e06-f181c8d92e14.png)

The display is off when everything's OK (but you can turn it on manually if needed) and it turns on and displays a warning message when there's a possibility of insufficient power. You can also turn on/off the display backlight via the Home Assistant.

On insufficient power condition a warning message is displayed on the LDC together with a list of appliances that shouldn't be turned on.
As soon as power consumption dropts to the "OK" level, the LCD turns off after 30 seconds to not confuse the user.
 
