# arduinoAh
Простое расширение языка Arduino для работы в кружках робототехники для начинающих.

Пример маячка:

#include <a.h>
BEGIN
 on(13);
 delay(1000);
 off(13);
 delay(1000);
END

Не сложно, правда ли? Все, что пока затруднит работу начинающему, спрятано в макро BEGIN и END.

Пример работы с монитором порта:

BEGIN
 say("Hello!");
END

И все! Никаких Serial.begin(9600) и Serial.println("Hello!");

Полный список функцийсмотрите  в примере FullListOfCommands

Установка библиотеки:
Подключите библиотеку в ардуино стандартным способом:
1. Скачайте проект на свой компьютер.
2. Скопируйте папку master в директорию libraries вашей папки ардуино (по умолчанию папка Arduino находится в Докуметах).
3. Переименуйте папку в Ah
4. Перезапустите Arduino IDE

More info on the ArduinoMaster.ru (http://ArduinoMaster.ru)
