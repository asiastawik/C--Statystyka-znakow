# Statystyka Znaków

## Opis Programu

Program wczytuje tekst ze standardowego wejścia (z konsoli) aż do napotkania znaku końca pliku (EOF). Po zakończeniu czytania program wyświetla liczbę wystąpień każdego znaku w tekście, na podstawie ich kodów ASCII.

### Założenia

1. Program działa na znakach ASCII, które mają kody od 0 do 255.
2. Zakładamy, że program nie obsługuje polskich znaków diakrytycznych.
3. Czytanie tekstu kończy się, gdy użytkownik zakończy wprowadzanie danych sygnałem końca pliku (EOF). 

### Funkcjonalność

1. Program wczytuje znaki ze standardowego wejścia, zapisując każde wystąpienie znaku w tablicy o rozmiarze 256.
2. Po zakończeniu wprowadzania danych program wyświetla liczbę wystąpień każdego znaku, który pojawił się przynajmniej raz.
3. Program wyświetla kod ASCII znaku oraz liczbę jego wystąpień w tekście.
