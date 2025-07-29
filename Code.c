#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct Element {
    char name[25];
    char symbol[5];
    int atomicNumber;
    float atomicWeight;
};

int main() {
    struct Element elements[] = {
        {"Hydrogen", "H", 1, 1.008}, {"Helium", "He", 2, 4.0026},
        {"Lithium", "Li", 3, 6.94}, {"Beryllium", "Be", 4, 9.0122},
        {"Boron", "B", 5, 10.81}, {"Carbon", "C", 6, 12.011},
        {"Nitrogen", "N", 7, 14.007}, {"Oxygen", "O", 8, 15.999},
        {"Fluorine", "F", 9, 18.998}, {"Neon", "Ne", 10, 20.180},
        {"Sodium", "Na", 11, 22.990}, {"Magnesium", "Mg", 12, 24.305},
        {"Aluminum", "Al", 13, 26.982}, {"Silicon", "Si", 14, 28.085},
        {"Phosphorus", "P", 15, 30.974}, {"Sulfur", "S", 16, 32.06},
        {"Chlorine", "Cl", 17, 35.45}, {"Argon", "Ar", 18, 39.948},
        {"Potassium", "K", 19, 39.098}, {"Calcium", "Ca", 20, 40.078},
        {"Scandium", "Sc", 21, 44.956}, {"Titanium", "Ti", 22, 47.867},
        {"Vanadium", "V", 23, 50.942}, {"Chromium", "Cr", 24, 51.996},
        {"Manganese", "Mn", 25, 54.938}, {"Iron", "Fe", 26, 55.845},
        {"Cobalt", "Co", 27, 58.933}, {"Nickel", "Ni", 28, 58.693},
        {"Copper", "Cu", 29, 63.546}, {"Zinc", "Zn", 30, 65.38},
        {"Gallium", "Ga", 31, 69.723}, {"Germanium", "Ge", 32, 72.630},
        {"Arsenic", "As", 33, 74.922}, {"Selenium", "Se", 34, 78.971},
        {"Bromine", "Br", 35, 79.904}, {"Krypton", "Kr", 36, 83.798},
        {"Rubidium", "Rb", 37, 85.468}, {"Strontium", "Sr", 38, 87.62},
        {"Yttrium", "Y", 39, 88.906}, {"Zirconium", "Zr", 40, 91.224},
        {"Niobium", "Nb", 41, 92.906}, {"Molybdenum", "Mo", 42, 95.95},
        {"Technetium", "Tc", 43, 98}, {"Ruthenium", "Ru", 44, 101.07},
        {"Rhodium", "Rh", 45, 102.91}, {"Palladium", "Pd", 46, 106.42},
        {"Silver", "Ag", 47, 107.87}, {"Cadmium", "Cd", 48, 112.41},
        {"Indium", "In", 49, 114.82}, {"Tin", "Sn", 50, 118.71},
        {"Antimony", "Sb", 51, 121.76}, {"Tellurium", "Te", 52, 127.60},
        {"Iodine", "I", 53, 126.90}, {"Xenon", "Xe", 54, 131.29},
        {"Cesium", "Cs", 55, 132.91}, {"Barium", "Ba", 56, 137.33},
        {"Lanthanum", "La", 57, 138.91}, {"Cerium", "Ce", 58, 140.12},
        {"Praseodymium", "Pr", 59, 140.91}, {"Neodymium", "Nd", 60, 144.24},
        {"Promethium", "Pm", 61, 145}, {"Samarium", "Sm", 62, 150.36},
        {"Europium", "Eu", 63, 151.96}, {"Gadolinium", "Gd", 64, 157.25},
        {"Terbium", "Tb", 65, 158.93}, {"Dysprosium", "Dy", 66, 162.50},
        {"Holmium", "Ho", 67, 164.93}, {"Erbium", "Er", 68, 167.26},
        {"Thulium", "Tm", 69, 168.93}, {"Ytterbium", "Yb", 70, 173.05},
        {"Lutetium", "Lu", 71, 174.97}, {"Hafnium", "Hf", 72, 178.49},
        {"Tantalum", "Ta", 73, 180.95}, {"Tungsten", "W", 74, 183.84},
        {"Rhenium", "Re", 75, 186.21}, {"Osmium", "Os", 76, 190.23},
        {"Iridium", "Ir", 77, 192.22}, {"Platinum", "Pt", 78, 195.08},
        {"Gold", "Au", 79, 196.97}, {"Mercury", "Hg", 80, 200.59},
        {"Thallium", "Tl", 81, 204.38}, {"Lead", "Pb", 82, 207.2},
        {"Bismuth", "Bi", 83, 208.98}, {"Polonium", "Po", 84, 209},
        {"Astatine", "At", 85, 210}, {"Radon", "Rn", 86, 222},
        {"Francium", "Fr", 87, 223}, {"Radium", "Ra", 88, 226},
        {"Actinium", "Ac", 89, 227}, {"Thorium", "Th", 90, 232.04},
        {"Protactinium", "Pa", 91, 231.04}, {"Uranium", "U", 92, 238.03},
        {"Neptunium", "Np", 93, 237}, {"Plutonium", "Pu", 94, 244},
        {"Americium", "Am", 95, 243}, {"Curium", "Cm", 96, 247},
        {"Berkelium", "Bk", 97, 247}, {"Californium", "Cf", 98, 251},
        {"Einsteinium", "Es", 99, 252}, {"Fermium", "Fm", 100, 257},
        {"Mendelevium", "Md", 101, 258}, {"Nobelium", "No", 102, 259},
        {"Lawrencium", "Lr", 103, 266}, {"Rutherfordium", "Rf", 104, 267},
        {"Dubnium", "Db", 105, 268}, {"Seaborgium", "Sg", 106, 269},
        {"Bohrium", "Bh", 107, 270}, {"Hassium", "Hs", 108, 277},
        {"Meitnerium", "Mt", 109, 278}, {"Darmstadtium", "Ds", 110, 281},
        {"Roentgenium", "Rg", 111, 282}, {"Copernicium", "Cn", 112, 285},
        {"Nihonium", "Nh", 113, 286}, {"Flerovium", "Fl", 114, 289},
        {"Moscovium", "Mc", 115, 290}, {"Livermorium", "Lv", 116, 293},
        {"Tennessine", "Ts", 117, 294}, {"Oganesson", "Og", 118, 294}
    };

    char input[25];
    int found = 0;
    int totalElements = sizeof(elements) / sizeof(elements[0]);

    printf("Enter element name, symbol, or atomic number: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    int isNumber = 1;
    for (int i = 0; input[i] != '\0'; i++) {
        if (!isdigit(input[i])) {
            isNumber = 0;
            break;
        }
    }

    for (int i = 0; i < totalElements; i++) {
        if ((isNumber && atoi(input) == elements[i].atomicNumber) ||
            strcasecmp(input, elements[i].name) == 0 ||
            strcasecmp(input, elements[i].symbol) == 0) {

            printf("\nElement Found:\n");
            printf("Name: %s\n", elements[i].name);
            printf("Symbol: %s\n", elements[i].symbol);
            printf("Atomic Number: %d\n", elements[i].atomicNumber);
            printf("Atomic Weight: %.2f\n", elements[i].atomicWeight);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Sorry, no information found for '%s'.\n", input);
    }

    return 0;
}
