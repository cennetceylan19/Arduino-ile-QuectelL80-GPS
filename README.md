# Arduino-ile-QuectelL80-GPS
Merhaba, Bu repostory'de Arduino kullanılarak QuectelL80 GPS Modülünün kullanımını anlatacağım. 2019'daki projem. Burada bulunmasını istedim. Faydalı olmak dileğiyle. Başlayalım bakalım.

![image](https://user-images.githubusercontent.com/65015625/133939455-d5053818-b1a0-4084-84f5-74e52e71f8ae.png)


Datasheet'inden faydalanarak pin şeması aşağıdaki gibidir.

![image](https://user-images.githubusercontent.com/65015625/133939432-5ef9144c-ae23-4340-a2ee-b0e656930e42.png)

Kullanılan pinler;
Seri iletişim için RX/TX
Güç kaynağı için VCC/GND (3.3V)
VCC ile veya harici bir pile VCC yedekleme (V_BCKP) (bu pine güç verilmezse çalışmaz!)

![image](https://user-images.githubusercontent.com/65015625/137583752-c4742d67-4405-4a15-85f5-736eab9966f8.png)

tinyGPS++ kütüphanesi kullanılmıştır. Bu sayfadan indirip kurulumunu yapabilirsiniz. 

http://arduiniana.org/libraries/tinygpsplus/
