


#### Student: Lucas Vuijk
#### Studentennummer: 1137916
#### Datum: 28/9/2026 (DD/MM/JJJJ Formaat)


## Inleiding
Binnen de opleiding Technische Informatica wordt geacht dat studenten een flipperkast gaan realiseren. Binnen deze flipperkast zijn er verschillende plekken waar sensoren een bal moeten detecteren om de score te berekenen en het spel te beëindigen. In dit onderzoeksverslag is informatie verzameld uit diverse bronnen om de keuze van een geschikte sensor te bepalen. De sensoren die zijn gekozen om onderzocht te worden, zijn:

- Een infrarood(IR)-sensor
- Een ultrasone afstandssensor
- Een hefboomswitch

In dit onderzoek worden deze sensoren beoordeeld op de gestelde eisen. Deze eisen zijn te vinden in het volgende hoofdstuk.

## Eisen
Voor de sensoren zijn verschillende eisen gesteld. Deze eisen zijn:

- De sensor moet een reflectieve bal van 12 mm met een massa van 7 gram kunnen detecteren.
- De sensor moet de reflectieve bal binnen 200 ms kunnen detecteren.
- De sensor moet accuraat zijn, bijvoorbeeld door de reflectieve bal 99 van de 100 keer correct te detecteren.

Nu deze eisen zijn gedefinieerd, zal in het volgende hoofdstuk per sensor onderzocht worden of deze aan de eisen voldoet.

## De sensoren
In dit hoofdstuk staat het onderzoek voor elk van de sensoren beschreven. Per sensor wordt gekeken naar de nauwkeurigheid, de snelheid en of de sensor een reflectieve bal van 12 mm met een massa van 7 gram kan detecteren zonder fouten. Dit onderzoek is uitgevoerd door documentatie te bestuderen en, waar mogelijk, de sensoren in de praktijk te testen.

### Infrarood(IR)-Sensor
De infraroodsensor zou in theorie een bal van 12 mm moeten kunnen detecteren. Dit komt doordat de infraroodzender en -ontvanger ongeveer 5 tot 6 mm van elkaar verwijderd zijn. Daarnaast is de bal reflecterend, wat in theorie helpt bij de detectie doordat het infraroodlicht beter naar de ontvanger wordt gereflecteerd.

Uit onderzoek blijkt dat de IR-sensor de bal vrijwel onmiddellijk detecteert; er is met het blote oog geen vertraging waarneembaar. Uit een studie blijkt dat mensen beelden binnen 13 milliseconden kunnen verwerken [\[1\]]. Dit betekent dat de sensor de reflecterende bal ruimschoots binnen de gestelde eis van 200 milliseconden detecteert.

De accuraatheid van de IR-sensor wordt wel beïnvloed door omgevingslicht. Wanneer er direct zonlicht op de IR-sensor valt, kan deze ruis opvangen als een geldige invoer. Dit betekent dat de sensor in een afgeschermde of gesloten ruimte gemonteerd moet worden.

### Ultrasone Afstandssensor
De ultrasone afstandssensor detecteert objecten vanaf een bereik van 2 cm tot 400 cm. In theorie kan deze sensor de bal detecteren, maar niet wanneer de bal er te dicht tegenaan ligt (binnen 2 cm). De reflectiviteit van de bal heeft geen invloed op de meting, aangezien deze sensor op basis van geluidsgolven werkt.

De ultrasone afstandssensor detecteert met de snelheid van het geluid dat hij uitzendt. Over een kleine afstand, zoals in de flipperkast, vindt de detectie vrijwel onmiddellijk plaats [\[2\]].

Hoewel de ultrasone afstandssensor in principe nauwkeurig genoeg is, kan deze wel ruis opvangen uit de omgeving.

### Hefboomswitch
De hefboomswitch kan de bal in de praktijk niet detecteren, omdat de massa van de bal (7 gram) niet zwaar genoeg is om de switch volledig in te drukken.

De switch zou qua reactietijd ruim binnen de 200 ms kunnen detecteren, aangezien het een mechanische knop betreft.

In theorie is een mechanische switch erg accuraat, mits deze niet fysiek beschadigd raakt.

## Conclusie

| Sensor | Detecteert de bal? | Bereik | Afmetingen |
|---|---|---|---|
| **Infraroodsensor** | Ja | 2–35 cm | 31 × 14 mm |
| **Ultrasone Afstandssensor** | Ja | 2–400 cm | 45 × 20 × 15 mm |
| **Hefboomswitch** | Nee | n.v.t. | n.v.t. |

Concluderend is het het meest praktisch om de infraroodsensor te gebruiken. Dit heeft voornamelijk te maken met het compacte formaat van de IR-sensor ten opzichte van de ultrasone afstandssensor. De hefboomswitch valt direct af, omdat de bal te licht is om de schakelaar te activeren.

## Bronnen
1. Kraaijvanger, C. (2014, January 16). *Brein kan zelfs beelden die we maar 13 milliseconden zien, verwerken.* Scientias.nl. https://scientias.nl/brein-kan-zelfs-beelden-die-maar-13-milliseconden-zien-verwerken/
2. SparkFun Electronics. (n.d.). *Datasheet Ultrasone Afstandssensor HC-SR04.* https://cdn.sparkfun.com/datasheets/Sensors/Proximity/HCSR04.pdf
3. Nawazi, F. (2023, September 14). *HW201 Infrared (IR) Sensor Module.* Circuits DIY. https://www.circuits-diy.com/hw201-infrared-ir-sensor-module/