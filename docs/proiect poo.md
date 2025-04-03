Cuprins

TEMA SI MOTIVATIA ALEGERII

Gestionarea salariilor și impozitelor este un aspect esențial pentru orice companie, iar automatizarea acestui proces reduce erorile și economisește timp. Alegerea acestei teme se bazează pe nevoia de a dezvolta un sistem modular și flexibil, care să poată fi extins ulterior cu o interfață grafică (GUI), menținând totodată o interfață de linie de comandă (CLI) pentru acces rapid.

1. ELEMENTE TEORETICE

1.1. DESCRIEREA PROBLEMEI

Problema abordată constă în dezvoltarea unui sistem software capabil să gestioneze angajații unei companii, să calculeze salariile brute și nete, să aplice impozitele și contribuțiile sociale și să genereze rapoarte contabile.

1.2. ABORDAREA TEORETICA A PROBLEMEI

Soluția se bazează pe programare orientată pe obiecte (OOP) în C++. Se va utiliza o arhitectură modulară care permite separarea logicii de bază a aplicației de interfața utilizatorului, facilitând astfel adăugarea unei interfețe grafice ulterioare.

1.3. ELEMENTE SPECIFICE POO

Encapsulare – utilizată pentru a proteja datele angajaților și a permite acces controlat la acestea.

Moștenire – utilizată pentru a permite extinderea claselor de bază cu funcționalități suplimentare.

Polimorfism – utilizat pentru a permite definirea metodelor generice pentru generarea rapoartelor și calcularea salariilor.

1.4. ALTE CAPITOLE SPECIFICE

Persistența datelor utilizând fișiere sau baze de date.

Implementarea unei arhitecturi extensibile pentru adăugarea de taxe personalizate.

2. IMPLEMENTARE

2.1. TEHNOLOGII FOLOSITE

Limbaj de programare: C++

Mediu de dezvoltare: Visual Studio Code

Persistență date: Fișiere text sau baze de date

Generare rapoarte: Export în format CSV sau JSON

2.2. DIAGRAMA DE CLASE





2.3. ALTE CAPITOLE SPECIFICE

Implementarea unei structuri de comandă CLI flexibilă

Pregătirea arhitecturii pentru integrarea unei interfețe grafice (GUI)

3. ANALIZA SOLUTIEI IMPLEMENTATE

3.1. FORMATUL DATELOR DE I/O

Input: Comenzi introduse prin CLI, fișiere de configurare

Output: Afișare în terminal, export de date în format CSV/JSON

3.2. STUDII DE CAZ

Adăugarea unui angajat și calculul salariului acestuia

Generarea unui raport cu salariile și impozitele lunare

3.3. PERFORMANTE OBTINUTE

Timp de execuție optimizat prin structuri de date eficiente

Scalabilitate pentru suportul unui număr mare de angajați

4. MANUAL DE UTILIZARE




5. CONCLUZII

Proiectul demonstrează o abordare modulară pentru gestionarea salariilor și taxelor într-o companie. Arhitectura permite extinderea ușoară prin adăugarea unei interfețe grafice, păstrând totodată compatibilitatea cu interfața de linie de comandă.

6. BIBLIOGRAFIE

6.1. CARTI

Stroustrup, B. "The C++ Programming Language"

Meyers, S. "Effective C++"

6.2. ARTICOLE

Articole tehnice despre OOP și arhitectura modulară în C++

6.3. SURSE BIBLIOGRAFICE DIVERSE

Documentație oficială C++

Forumuri și resurse online de specialitate

