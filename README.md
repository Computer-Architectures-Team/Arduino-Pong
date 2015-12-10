# Проект по “Компютърни архитектури”

### Тема
Играта "Pong".

### Цел 
- Да се реализира multiplayer вариант на играта "Pong" за двама играча.
- Всеки да може да управлява “пръчката” си с ръка. 
- Да се запазват и показват точките на двамата играчи.  

### Задание
- Изграждане на полето за игра като LED матрица.
- Отчитане на движение на ръката на играч.
- Преместване на “пръчката” спрямо положението на ръката.
- Показване на топчето върху полето.
- Отчитане на победа/загуба, когато топчето премине границата на полето в половината на някой играч.
- Отчитане и броене на резултата на играчите.
- Показване на резултатите на играчите.
- Излъчване на победител в играта.

### Описание

Имплементацията на играта ще следва правилата на традиционния Pong. 
В полето се пуска топче със зададена скорост и посока. Когато топчето премине границата на полето при един от играчите, 
другият получава една точка. Целта на играчите е с “пръчките” си да отблъснат топчето и да го запратят към полето на противника, 
така че той да не съумее да го спаси. След получаване на определен брой точки, единият играч бива обявен за победител.

Всеки от играчите ще може с ръка да управлява “пръчката” си. Управлението ще става със сензори, които отчитат позицията на ръката
спрямо полето. Самите “пръчки” ще се изобразяват със светодиоди. 
Със светодиоди също така ще се показва и топчето. През Ардуино ще управляваме логиката
за отблъскването на топчето от “пръчките”, преместването им, преместването на топчето, логиката за точките и победата.

Точките на играчите ще се показват отделно и ще се обновяват динамично.

### Екип

- Ивайло Стефанов Арнаудов 11Б, №13
- Николай Василев Карагьозов 11Б, №22
- Радостин Ангелов Ангелов 11Б, №27
- Христо Езекиев 11А, №

### Увод

Играта *Pong*, позната още като *(PONG)*, е една от най-старите аркадни игри и първата спортна аркадна видеоигра. Това е игра от тип тенис, характеризираща се с проста 2D графика. Докато други аркадни видеоигри като *Computer Space* са дошли преди нея, *Pong* е една от първите видео игри, достигнали преобладаваща популярност. Завършена на 29.11.1972 от Алън Алкорн като упражнение, тя бива издадена от [Aтари](https://www.atari.com/) и бързо достига голям успех. Тя е първата търговски успешна аркадна видео игра, което подпомага развитието на индустрията, заедно с първата домашна конзола *Magnavox Odyssey*.

Изработването на описаната версия на тази игра ще предостави възможност за:
- по-обстойно запознаване с embedded програмирането
- изработване и изчисляване на електрически схеми
- практическо приложение и затвърждаване на знанията, придобити преди и по време на курса по "Компютърни архитектури"

### Принципна схема
Проекта се състои от няколко компонента:
- Arduino Mega 2560
- хардуерен бутон за начало/рестарт на играта
- LED дисплей за точките
- една голяма 4x4 матрица, която представлява множество от 8x8 LED матрици
- сензори, по два броя на всяка 8x8 матрица (т.е 8 за единия играч и 8 за другия)
- поставка за цялата конструкция

![Принципна схема](http://i.imgur.com/GvS7Fbf.png)
