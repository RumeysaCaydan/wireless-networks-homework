# wireless-networks-homework
Kablosuz Ağlar Dersi – **ESP32 HTTP Sunucu Uygulaması**

## 📘 Proje Açıklaması
Bu proje, ESP32 kullanarak basit bir Wi-Fi tabanlı HTTP sunucusu oluşturmayı amaçlamaktadır.  
Sunucu, `/log` endpoint’i üzerinden gelen `value` parametresini alır ve zamanı (`millis()`) ile birlikte CSV formatında **seri porta** gönderir.

## ⚙️ Kullanılan Teknolojiler
- **ESP32** Wi-Fi modülü  
- **Arduino IDE**  
- **C++ (Arduino Core)**  
- **HTTP protokolü (GET isteği)**  

## 🚀 Çalışma Mantığı
1. ESP32 belirtilen Wi-Fi ağına bağlanır.  
2. `/log?value=...` adresine bir HTTP isteği geldiğinde:  
   - `value` parametresi alınır.  
   - Zaman damgası ile birlikte seri porta CSV formatında yazılır.  
3. Sunucu, bağlantı durumunu seri monitörde gösterir.
   ## 🖧 Kullanım
- Wi-Fi bilgilerinizi (`ssid` ve `password`) güncelleyin.  
- ESP32'yi bilgisayara bağlayın ve kodu yükleyin.  
- Tarayıcıdan `http://<ESP32_IP>/log?value=örnek` adresine gidin.  
- Seri monitörden gelen verileri gözlemleyin.

## ✍️ Hazırlayanlar
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
