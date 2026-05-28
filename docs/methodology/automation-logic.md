# Automation Logic

CampusMatter uses occupancy-based intelligent automation to optimize energy consumption.

## Automation Workflow

1. PIR sensors continuously monitor room occupancy
2. ESP32 nodes process occupancy data
3. Automation engine evaluates predefined rules
4. Smart appliances are automatically controlled
5. Energy usage is monitored in real time

## Example Logic

- If no motion is detected for 15 minutes:
  - Turn OFF lights
  - Turn OFF fans
  - Activate energy-saving mode

- If occupancy is detected:
  - Restore appliance state
  - Resume normal operation
