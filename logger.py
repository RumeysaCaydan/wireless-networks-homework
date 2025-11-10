import serial

PORT = "COM7"     # ESP32'nin portunu yaz
BAUD = 115200

ser = serial.Serial(PORT, BAUD, timeout=1)
print("Dinleniyor... CSV kaydı başladı.")

with open("data.csv", "a") as f:
    while True:
        line = ser.readline().decode("utf-8").strip()
        if line:
            print(line)
            f.write(line + "\n")
            f.flush()
