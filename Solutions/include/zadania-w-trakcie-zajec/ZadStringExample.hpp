#pragma once

#include <string>
#include <utility>

/* Zadanie podczas zajec
 *   Napisz funkcje (osobny program) w ktorym zadeklarujesz string i uzyjesz
 * na nim funkcji manipulacyjnych:
 *   1. empty()     Zwraca wartosc true jezeli napis jest pusty.
 *   2. size(),length()     Zwraca ilosc znakow w napisie.
 *   3. at()     Zwraca znak o podanym polozeniu, tak jak operator [], z tym
 * ze ta metoda jest bezpieczniejsza - wyrzuca wyjatek w przypadku wyjscia
 * poza zakres stringa.
 *   4. clear()     Usuwa wszystkie znaki z napisu.
 *   5. erase(...)     Usuwa wybrane znaki.
 *   6. find(...)     Znajduje podciag w ciagu, sa tez bardziej rozbudowane
 * funkcje tego typu.
 *   7. swap(...)     Zamienia miejscami dwa stringi, a staje sie b, a b staje
 * sie a.
 *   8. substr(...)     Zwraca podciag na podstawie indeksu poczatkowego i
 * dlugosci podciagu.
 *   9. append(...) */


inline bool is_empty(const std::string &str) { return str.empty(); }
/* keyword inline jest sugestią IDE.
 * Znaczy że funkcja podczas wywoływania jest kopiowana do miejsca wywołania,
 * aby zoptymalizować performance i uniknąć wielokrotnych definicji */


std::pair<std::size_t, std::size_t> length_and_size(const std::string &str);

char element_at(const std::string &str, std::size_t index);

void clear_str(std::string &str);

void erase_from_str(std::string &str, char to_be_erased);

std::string find_substr(const std::string &str, const std::string &to_find);

void swap_strs(std::string &str1, std::string &str2);

std::string get_substr(const std::string &str, std::size_t start);

void append_str(std::string &str, const std::string &to_append);

void runStringFunctionsExample();


