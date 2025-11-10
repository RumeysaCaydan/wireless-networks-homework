# wireless-networks-homework
Kablosuz Ağlar Dersi – **ESP32 HTTP Sunucu ve Veri Kaydedici Uygulaması**

##  Proje Açıklaması
Bu proje, **ESP32** mikrodenetleyicisi kullanılarak Wi-Fi üzerinden veri iletimi ve bilgisayara CSV formatında kaydedilmesini amaçlamaktadır.  
ESP32, belirlenen Wi-Fi ağına bağlanarak HTTP üzerinden `/log` endpoint’ine gelen verileri alır ve zaman damgası ile birlikte seri porta gönderir.  
Bilgisayar tarafında ise `logger.py` dosyası bu verileri dinleyip `.csv` dosyasına kaydeder.

##  Kullanılan Teknolojiler
- **ESP32** Wi-Fi modülü  
- **Arduino IDE (C++)**  
- **Python (Veri kaydedici script)**  
- **HTTP protokolü (GET isteği)**  
- **CSV formatı**  

##  Kullanım Adımları
1. ESP32 kodundaki Wi-Fi bilgilerini (`ssid`, `password`) kendi ağınıza göre düzenleyin.  
2. Kodu **Arduino IDE** üzerinden ESP32’ye yükleyin.  
3. ESP32 IP adresini seri monitörden öğrenin.  
4. Tarayıcıdan `http://<ESP32_IP>/log?value=örnek` adresine gidin.  
5. Python tarafında `logger.py` dosyasını çalıştırarak gelen verileri `.csv` dosyasına kaydedin.

##  Gerekli Kütüphaneler
ESP32 icin:
#include <WiFi.h>
#include <WebServer.h>

python icin:
pip install pyserial

##  Hazırlayanlar
**Berfin Geles** 
**Nisa Nur Ozdal** 
**Rümeysa Çaydan** 
**Ece Zeynep Ocak** 
**Eren Bal** 
**Nisa Gul Unal** 
**Ismail Kilic** 
**Adnan Gokdag** 

Necmettin Erbakan Üniversitesi
Kablosuz Ağlar Dersi – 2025
