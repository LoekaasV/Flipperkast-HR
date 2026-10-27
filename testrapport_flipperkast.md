# Testrapport Flipperkast

**Auteur:** Lucas Vuijk  
**Studentnummer:** 1137916  
**Klas:** T1C  
**Datum:** 25 oktober 2026  

---

## Inhoudsopgave

1. [Test 1: Schuine ondergrond (Eisen 1)](#test-1-schuine-ondergrond-eisen-1)
2. [Test 2: Drukknop bediening flippers (Eisen 3)](#test-2-drukknop-bediening-flippers-eisen-3)
3. [Test 3: Afvuurmechanisme (Eisen 2)](#test-3-afvuurmechanisme-eisen-2)
4. [Test 4: Detectie bumpersensor (Eisen 4)](#test-4-detectie-bumpersensor-eisen-4)
5. [Test 5: Weergave score op display (Eisen 5)](#test-5-weergave-score-op-display-eisen-5)
6. [Test 6: Netwerkoverdracht score (Eisen 6)](#test-6-netwerkoverdracht-score-eisen-6)

---

## Test 1: Schuine ondergrond (Eisen 1)

### Testdoel
Het doel van deze test is het verifiëren van de hellingshoek van het speelveld. De ondergrond dient voldoende te hellen om de bal onder invloed van de zwaartekracht naar beneden te laten rollen wanneer er geen externe krachten op worden uitgeoefend. Een te steile helling verkort de reactietijd van de speler onredelijk, terwijl een te geringe helling de spelsnelheid negatief beïnvloedt.

### Testopstelling
De test is uitgevoerd op de geassembleerde flipperkast.

**Benodigdheden:**
* Flipperkast
* Flipperbal
* Tijdmeetapparatuur (chronometer)

### Uitvoering
De tijd tussen het moment van vrijgave en de aankomst van de bal op het laagste punt van het speelveld is gemeten volgens onderstaande procedure:
1. Plaats de bal op het hoogste punt van het speelveld (in rust).
2. Laat de bal los en start gelijktijdig de tijdmeting.
3. Stop de tijdmeting op het moment dat de bal het laagste punt bereikt.
4. Herhaal deze procedure 5 maal.

### Verwacht resultaat
De bal rolt na vrijgave geleidelijk door de zwaartekracht naar het laagste punt van de flipperkast binnen de gestelde acceptatiegrenzen, zonder onderweg te stagneren.

### Acceptatiecriteria
De verstreken tijd tussen het loslaten van de bal en de aankomst op het laagste punt bevindt zich tussen de 2,0 en 10,0 seconden.

### Waarnemingen

| Testnr. | Gemeten tijd (s) |
| :--- | :--- |
| 1 | 1,51 |
| 2 | 1,83 |
| 3 | 1,25 |
| 4 | 2,04 |
| 5 | 1,37 |

**Opmerking:**  
Bij de initiële metingen rolde de bal te snel naar beneden.

### Conclusie
De gemeten tijden varieerden aanvankelijk tussen 1,25 en 2,04 seconden, wat onder de gestelde ondergrens van 2,0 seconden lag. Dit duidde op een te steile hellingshoek. Om dit te corrigeren is de helling verminderd door verhoging aan de onderzijde (flipperzijde). Na deze aanpassing bedroeg de rolltijd circa 2 tot 3 seconden, waarmee het speelveld voldoet aan de acceptatiecriteria.

---

## Test 2: Drukknop bediening flippers (Eisen 3)

### Testdoel
Vaststellen of de drukknoppen de overeenkomstige flippers correct aansturen. Het effectief wegschieten van de bal vormt binnen deze test geen onderdeel van de evaluatie; de focus ligt uitsluitend op de mechanische respons van de flippers op de knopbediening.

### Testopstelling
**Benodigdheden:**
* Flipperinrichting inclusief actuatoren/motoren
* Drukknoppen voor flipperbediening
* Microcontroller ter verwerking van ingangs- en uitgangssignalen
* Geschikte voedingen voor microcontroller en actuatoren
* Tijdmeetapparatuur (precisie in tienden van seconden)

Sluit de drukknoppen via de microcontroller aan op de flippermechanismen en voorzie de componenten van voeding.

### Uitvoering
1. Druk de knop in en start gelijktijdig de tijdmeting.
2. Stop de meting zodra de flipper is teruggekeerd naar de uitgangspositie (of na maximaal 10 seconden).
3. Voer de test 5 maal uit per flipper (links en rechts afzonderlijk).

### Verwacht resultaat
Bij het indrukken van de knop voert de flipper de volledige gedefinieerde slag uit en keert vervolgens direct terug naar de rustpositie.

### Acceptatiecriteria
De flipper voltooit de gehele cyclus (uitslag en terugkeer) binnen 10,0 seconden na activering van de drukknop.

### Waarnemingen

**Flipper Links:**

| Testnr. | Respons binnen criterium (Ja/Nee) | Gemeten cyclustijd (s) |
| :--- | :--- | :--- |
| 1 | Ja | 0,20 |
| 2 | Ja | 0,27 |
| 3 | Ja | 0,27 |
| 4 | Ja | 0,20 |
| 5 | Ja | 0,26 |

**Flipper Rechts:**

| Testnr. | Respons binnen criterium (Ja/Nee) | Gemeten cyclustijd (s) |
| :--- | :--- | :--- |
| 1 | Ja | 0,27 |
| 2 | Ja | 0,26 |
| 3 | Ja | 0,26 |
| 4 | Ja | 0,20 |
| 5 | Ja | 0,27 |

### Conclusie
Beide flippers doorlopen het volledige traject (van ruststand naar maximale uitslag en terug) ruim binnen 1 seconde. Hiermee wordt ruimschoots voldaan aan de gestelde acceptatiecriteria.

---

## Test 3: Afvuurmechanisme (Eisen 2)

### Testdoel
Valideren of het afvuurmechanisme de bal met voldoende kracht in het speelveld lanceert, zodat de verste spelelementen bereikbaar zijn.

### Testopstelling
**Benodigdheden:**
* Geassembleerde flipperkast
* Flipperbal

### Uitvoering
1. Bepaal welke sensor zich op de grootste afstand van de lancering bevindt.
2. Lanceer de bal 10 maal via het daarvoor bestemde mechanisme.
3. Observeer of de bal voldoende bewegingsenergie heeft om het bereik van de verste sensor te kunnen halen (uitgaande van een optimale baan).

### Verwacht resultaat
Het afvuurmechanisme brengt de bal met voldoende snelheid in het spel om alle actieve spelelementen en sensoren te bereiken.

### Acceptatiecriteria
In minimaal 8 van de 10 pogingen (80%) bereikt de bal een afstand die voldoende is om de verste sensor te kunnen activeren.

### Waarnemingen

| Testnr. | Voldoende bereik (Ja/Nee) |
| :--- | :--- |
| 1 | Ja |
| 2 | Nee |
| 3 | Nee |
| 4 | Ja |
| 5 | Ja |
| 6 | Ja |
| 7 | Ja |
| 8 | Ja |
| 9 | Ja |
| 10 | Ja |

### Conclusie
In 8 van de 10 gevallen bereikte de bal de achterwand en daarmee het bereik van de verste sensor. Dit resulteert in een slagingspercentage van 80%, waarmee voldaan wordt aan het acceptatiecriterium.

---

## Test 4: Detectie bumpersensor (Eisen 4)

### Testdoel
Verifiëren of de geïntegreerde bumpersensor fysiek contact of de nabijheid van de bal correct detecteert en verwerkt.

### Testopstelling
**Benodigdheden:**
* Bumpersensor inclusief assemblage
* Flipperbal
* Visuele indicator (LED/lampje) ter verificatie van het uitgangssignaal

Sluit de bumpersensor zo aan op de indicator dat deze bij waarneming gedurende minimaal 2 seconden oplicht.

### Uitvoering
Breng de bal 5 maal in fysiek contact met de sensor (of binnen de ontworpen detectiemarge van < 1 cm) en controleer of de visuele indicator activeert.

### Verwacht resultaat
De indicator licht bij detectie gedurende ten minste 2 seconden op.

### Acceptatiecriteria
De sensor moet in minimaal 4 van de 5 proeven (80%) de bal correct detecteren.

### Waarnemingen

| Testnr. | Detectie succesvol (Ja/Nee) |
| :--- | :--- |
| 1 | Ja |
| 2 | Ja |
| 3 | Ja |
| 4 | Nee |
| 5 | Ja |

### Conclusie
De bumpersensor registreerde de bal in 4 van de 5 gevallen correct. Dit resultaat voldoet aan de gestelde acceptatiecriteria en de bijbehorende systeemeis.

---

## Test 5: Weergave score op display (Eisen 5)

### Testdoel
Controleren of het scoredisplay (minimaal 2 posities) de behaalde punten correct verwerkt en weergeeft voor zowel enkele als meervoudige cijfers.

### Testopstelling
**Benodigdheden:**
* Numeriek display (minimaal 2 digits) aangesloten op de sturing.

### Uitvoering
Voer opeenvolgend de volgende teststappen uit en controleer de weergave:
1. Schakel de flipperkast in (startwaarde 0).
2. Verstuur een signaal overeenkomend met +1 punt.
3. Verstuur een signaal overeenkomend met +10 punten.
4. Verstuur een signaal overeenkomend met +12 punten.
5. Verstuur een signaal overeenkomend met +90 punten.

### Verwacht resultaat
Het display past bij ontvangst van een impuls de weergegeven waarde direct aan conform de opgetelde score. Bij afwezigheid van signalen blijft de waarde stabiel. Na een herstart initialiseert het display op 0.

### Acceptatiecriteria
Het display toont na elke individuele stap exact de berekende verwachtingswaarde.

### Waarnemingen

| Teststap | Verwachte waarde | Aangegeven waarde op display |
| :--- | :--- | :--- |
| 1 | 0 | 0 |
| 2 | 1 | 1 |
| 3 | 11 | 11 |
| 4 | 23 | 23 |
| 5 | 113 | 113 |

### Conclusie
Het display geeft in alle teststappen de accurate score weer. De werking van het display voldoet hiermee volledig aan de acceptatiecriteria.

---

## Test 6: Netwerkoverdracht score (Eisen 6)

### Testdoel
Vaststellen of de behaalde eindscore na afloop van het spel via het netwerk correct naar een centraal systeem (Flipperboard API) wordt verzonden.

### Testopstelling
**Benodigdheden:**
* Geconfigureerde microcontroller met actieve netwerkverbinding
* Aangesloten scoresensor
* Sensor voor detectie van 'Game Over' / eindsituatie
* Monitoringomgeving ter controle van de centrale database/API

### Uitvoering
1. Controleer de netwerkverbinding van de microcontroller.
2. Simuleer punt-genererende acties via de sensor.
3. Trigger de eindsituatie van het spel.
4. Controleer via de monitoringomgeving of de score correct is geregistreerd.
5. Herhaal deze cyclus 5 maal.

### Verwacht resultaat
Bij het beëindigen van een spel wordt de totale score via een API-call verstuurd naar het centrale platform (Flipperboard).

### Acceptatiecriteria
In 100% van de gevallen wordt de correcte eindscore bij beëindiging van het spel succesvol overgedragen aan het netwerk.

### Waarnemingen

| Testnr. | Waarneming op centraal punt (Flipperboard) | Status |
| :--- | :--- | :--- |
| 1 | Score 2600 (Player) ontvangen bij balverlies ('dood') | Succesvol |
| 2 | Score 650 (Player) ontvangen bij handmatige beëindiging | Succesvol |
| 3 | Score 700 ontvangen | Succesvol |
| 4 | Score 750 ontvangen | Succesvol |
| 5 | Score 1200 ontvangen | Succesvol |

### Conclusie
De data-overdracht naar de Flipperboard-API verloopt foutloos. Het netwerkmechanisme voldoet aan alle gestelde acceptatiecriteria.


### Bronnen
Dit verslag is in formelere taal gezet door Google's kunstmatige intelligentie, Gemini. 
_‎Google Gemini_. (n.d.). Gemini. https://gemini.google.com/app?hl=nl