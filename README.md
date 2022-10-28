# ESPHome project to display wattage available to home.

Our main circuit breaker is for 25 amps (single phase). This quite limitates a number of appliances that can be powered at once. 
For example it doesn't go well to turn on an electric oven + dishwasher + washing machine. This is why I installed Shelly EM to monitor power consumption and connected it via MQTT to ESP32 with LCD that displays remaining available power and if it's lower than any of large appliance power then it displays warning with a lists of appliances that shouldn't be powered on.
