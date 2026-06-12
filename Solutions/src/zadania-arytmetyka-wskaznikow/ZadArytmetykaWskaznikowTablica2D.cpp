#include <string>
#include <iostream>

std::string display2DArray(const int* array, const int arraySizeA, const int arraySizeB)
{
    std::string result = "[\n";
    for (int i = 0; i < arraySizeA; i++)
    {
        result += "  [";
        for (int j = 0; j < arraySizeB; j++)
        {
            const int offset = (i * arraySizeB) + j;
            const int* elementPointer = array + offset;
            result += std::to_string(*elementPointer);
            if (j != arraySizeB - 1)
            {
                result += ", ";
            }
        }
        if (i != arraySizeA - 1)
        {
            result += "],\n";
        }
        else
        {
            result += "]\n";
        }
    }
    result += "]";
    return result;
}

void display2DArrayAddresses(const int* array, const int arraySizeA, const int arraySizeB)
{
    std::cout << "[\n";
    for (int i = 0; i < arraySizeA; i++)
    {
        std::cout << "  [";
        for (int j = 0; j < arraySizeB; j++)
        {
            const int offset = (i * arraySizeB) + j;
            const int* elementPointer = array + offset;
            std::cout << elementPointer;
            if (j != arraySizeB - 1)
            {
                std::cout << ", ";
            }
        }
        if (i != arraySizeA - 1) { std::cout << "],\n"; }
        else { std::cout << "]\n"; }
    }
    std::cout << "]\n";
}

void runZadArytmetykaWskaznikowTablica2D()
{
    constexpr int arraySizeA = 3;
    constexpr int arraySizeB = 3;
    constexpr int array[arraySizeA][arraySizeB] = {{1,2,3},{4,5,6},{7,8,9}};
    std::cout << "2D array: " << display2DArray(&array[0][0], arraySizeA, arraySizeB) << std::endl;
    std::cout << "Memory addresses: ";
    display2DArrayAddresses(&array[0][0], arraySizeA, arraySizeB);
    /*
         Układ adresów w pamięci wskazuje na umowność postaci tablic dwuwymiarowych i w pamięci
         rzeczywiście są one uporządkowane po kolei (jednowymiarowa tablica) w kolejności rosnącej
     */
}