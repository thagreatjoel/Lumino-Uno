<h1 align="center">LUMINO UNO</h1>


<p align="center" >A Dual Cored Micro-controller which can flash two different firmware in one board.</p>

<p align="center">
  <img src="Images/PCB.png" width="500">
</p>

# Features
- **ESP32 WROOM 32 N4** for Wi-Fi and IoT connectivity
- Dual MCU communication via **UART**
- **ATmega128AU** for real-time hardware control
- Toggle Switch to convert the mode for the Flash
- Built-in startup and feedback sound system
- Type-C connectivity

# Softwares
<div> <a href="https://www.kicad.org/" style="margin-right: 15px; display: inline-block;"><img align="center" src="https://img.shields.io/badge/KiCad-2B5FC3?style=for-the-badge&logo=kicad&logoColor=white" style="border-radius: 30px;"></a> <a href="https://easyeda.com/" style="margin-right: 15px; display: inline-block;"><img align="center" src="https://img.shields.io/badge/EasyEDA-1765F3?style=for-the-badge&logo=circuitboard&logoColor=white" style="border-radius: 30px;"></a> <a href="https://www.blender.org/" style="display: inline-block;"><img align="center" src="https://img.shields.io/badge/Blender-E87D0D?style=for-the-badge&logo=blender&logoColor=white" style="border-radius: 30px;"></a>
</div>

# Comparison Table

| Feature                 | ESP32          | ATmega         | Lumino Uno       |
|-------------------------|----------------|----------------|------------------|
| Internet        | ✅ Yes         | ❌ No          | ✅ Yes           |
| Bluetooth               | ✅ Yes         | ❌ No          | ✅ Yes           |
| Real time control       | ⚠️ Limited     | ✅ Yes         | ✅ Yes           |
| Sensor handling         | ⚠️ Limited     | ✅ Yes         | ✅ Yes           |
| Motor or Relay control   | ⚠️ Limited     | ✅ Yes         | ✅ Yes           |
| Processing power        | ✅ High        | ❌ Low         | ✅ Balanced      |
| Hardware stability      | ⚠️ Medium      | ✅ High        | ✅ High          |
| Ease of use             | ✅ Easy        | ✅ Easy        | ⚠️ Moderate      |
| Multitasking            | ✅ Efficient   | ❌ Hard          | ✅ Yes           |
| Power consumption       | ⚠️ Higher      | ✅ Low         | ⚠️ Higher        |
| Best use case           | IoT, Web apps | Control systems | Full systems     |

# How to Flash
Dont just over confuse it. its compilicated but not hard. its just a esp and atmega.. 

**FLASH TO ATMEGA**
- Select board Arduino Uno
- Flash Switch to left
- Upload code through USB C
You AVR is now coded, dont unplug it yet


**FLASH TO ESP**
- Select Board ESP32 Dev Module
- Flash Switch to right
- Upload code
- Press boot buttom while uploading
Your board is now complet

# Layers

**Top Layer**<br><img width="500" alt="Screenshot 2026-05-18 131940" src="https://github.com/user-attachments/assets/c6f62902-ace6-4bc9-becb-ab590f8e9c4b" /></br>**Bottom Layer**<br><img width="500" alt="Screenshot 2026-05-18 131951" src="https://github.com/user-attachments/assets/0377162e-b6f9-4103-a1bf-f8467ecb7a60" />
</br>
[3D Model](https://cdn.hackclub.com/019e3a1e-7bf6-7cc7-b24b-c62ca8a7e5d8/3d%20model.step)
