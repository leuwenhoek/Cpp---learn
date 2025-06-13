#include <iostream>
#include <string>
#include <utility>
using namespace std;

const int num = 118;  // Make num global

// First database function for element names and symbols
string database(int el, string access) {
    string elements_name[num] = {
        "Hydrogen", "Helium", "Lithium", "Beryllium", "Boron", "Carbon", "Nitrogen", "Oxygen",
        "Fluorine", "Neon", "Sodium", "Magnesium", "Aluminum", "Silicon", "Phosphorus", "Sulfur",
        "Chlorine", "Argon", "Potassium", "Calcium", "Scandium", "Titanium", "Vanadium", "Chromium",
        "Manganese", "Iron", "Cobalt", "Nickel", "Copper", "Zinc", "Gallium", "Germanium", "Arsenic",
        "Selenium", "Bromine", "Krypton", "Rubidium", "Strontium", "Yttrium", "Zirconium", "Niobium",
        "Molybdenum", "Technetium", "Ruthenium", "Rhodium", "Palladium", "Silver", "Cadmium", "Indium",
        "Tin", "Antimony", "Tellurium", "Iodine", "Xenon", "Cesium", "Barium", "Lanthanum", "Cerium",
        "Praseodymium", "Neodymium", "Promethium", "Samarium", "Europium", "Gadolinium", "Terbium",
        "Dysprosium", "Holmium", "Erbium", "Thulium", "Ytterbium", "Lutetium", "Hafnium", "Tantalum",
        "Tungsten", "Rhenium", "Osmium", "Iridium", "Platinum", "Gold", "Mercury", "Thallium", "Lead",
        "Bismuth", "Polonium", "Astatine", "Radon", "Francium", "Radium", "Actinium", "Thorium",
        "Protactinium", "Uranium", "Neptunium", "Plutonium", "Americium", "Curium", "Berkelium",
        "Californium", "Einsteinium", "Fermium", "Mendelevium", "Nobelium", "Lawrencium",
        "Rutherfordium", "Dubnium", "Seaborgium", "Bohrium", "Hassium", "Meitnerium",
        "Darmstadtium", "Roentgenium", "Copernicium", "Nihonium", "Flerovium", "Moscovium",
        "Livermorium", "Tennessine", "Oganesson"
    };

    string symbols[num] = {
        "H", "He", "Li", "Be", "B", "C", "N", "O", "F", "Ne", "Na", "Mg", "Al", "Si", "P", "S",
        "Cl", "Ar", "K", "Ca", "Sc", "Ti", "V", "Cr", "Mn", "Fe", "Co", "Ni", "Cu", "Zn", "Ga", "Ge", "As",
        "Se", "Br", "Kr", "Rb", "Sr", "Y", "Zr", "Nb", "Mo", "Tc", "Ru", "Rh", "Pd", "Ag", "Cd", "In",
        "Sn", "Sb", "Te", "I", "Xe", "Cs", "Ba", "La", "Ce", "Pr", "Nd", "Pm", "Sm", "Eu", "Gd", "Tb",
        "Dy", "Ho", "Er", "Tm", "Yb", "Lu", "Hf", "Ta", "W", "Re", "Os", "Ir", "Pt", "Au", "Hg", "Tl", "Pb",
        "Bi", "Po", "At", "Rn", "Fr", "Ra", "Ac", "Th", "Pa", "U", "Np", "Pu", "Am", "Cm", "Bk",
        "Cf", "Es", "Fm", "Md", "No", "Lr", "Rf", "Db", "Sg", "Bh", "Hs", "Mt", "Ds", "Rg", "Cn", "Nh",
        "Fl", "Mc", "Lv", "Ts", "Og"
    };

    if(access == "name") return elements_name[el-1];
    else if(access == "symbol") return symbols[el-1];
    return "";
}

// Second database function for atomic masses
double database(int el) {
    double el_mass[num] = {
        1.008, 4.002602, 6.94, 9.0121831, 10.81, 12.011, 14.007, 15.999, 18.998403163, 20.1797,
        22.98976928, 24.305, 26.9815385, 28.085, 30.973761998, 32.06, 35.45, 39.948, 39.0983,
        40.078, 44.955908, 47.867, 50.9415, 51.9961, 54.938044, 55.845, 58.933194, 58.6934,
        63.546, 65.38, 69.723, 72.63, 74.921595, 78.971, 79.904, 83.798, 85.4678, 87.62,
        88.90584, 91.224, 92.90637, 95.95, 97.90721, 101.07, 102.9055, 106.42, 107.8682,
        112.414, 114.818, 118.71, 121.76, 127.6, 126.90447, 131.293, 132.90545196, 137.327,
        138.90547, 140.116, 140.90766, 144.242, 145, 150.36, 151.964, 157.25, 158.92535,
        162.5, 164.93033, 167.259, 168.93422, 173.045, 174.9668, 178.49, 180.94788, 183.84,
        186.207, 190.23, 192.217, 195.084, 196.966569, 200.592, 204.38, 207.2, 208.9804,
        208.98243, 209.98715, 222.01758, 223.01973, 226.02541, 227.02775, 232.0377,
        231.03588, 238.02891, 237.04817, 244.0642, 243.06138, 247.07035, 247.07031,
        251.07959, 252.083, 257.0951, 258.0984, 259.101, 266, 267, 268, 271, 270, 277, 282,
        281, 286, 286, 289, 290, 293, 294
    };
    return el_mass[el-1];
}

// Third database function for positions
pair<int,int> database(pair<int,int>& pos, int el) {
    pair<int, int> position[num] = {
        {1, 1},   {18, 1},  {1, 2},   {2, 2},   {13, 2},  {14, 2},  {15, 2},  {16, 2},  {17, 2},  {18, 2},
        {1, 3},   {2, 3},   {13, 3},  {14, 3},  {15, 3},  {16, 3},  {17, 3},  {18, 3},  {1, 4},   {2, 4},
        {3, 4},   {4, 4},   {5, 4},   {6, 4},   {7, 4},   {8, 4},   {9, 4},   {10, 4},  {11, 4},  {12, 4},
        {13, 4},  {14, 4},  {15, 4},  {16, 4},  {17, 4},  {18, 4},  {1, 5},   {2, 5},   {3, 5},   {4, 5},
        {5, 5},   {6, 5},   {7, 5},   {8, 5},   {9, 5},   {10, 5},  {11, 5},  {12, 5},  {13, 5},  {14, 5},
        {15, 5},  {16, 5},  {17, 5},  {18, 5},  {1, 6},   {2, 6},   {3, 6},   {4, 6},   {5, 6},   {6, 6},
        {7, 6},   {8, 6},   {9, 6},   {10, 6},  {11, 6},  {12, 6},  {13, 6},  {14, 6},  {15, 6},  {16, 6},
        {17, 6},  {4, 6},   {5, 6},   {6, 6},   {7, 6},   {8, 6},   {9, 6},   {10, 6},  {11, 6},  {12, 6},
        {13, 6},  {14, 6},  {15, 6},  {16, 6},  {17, 6},  {18, 6},  {1, 7},   {2, 7},   {3, 7},   {4, 7},
        {5, 7},   {6, 7},   {7, 7},   {8, 7},   {9, 7},   {10, 7},  {11, 7},  {12, 7},  {13, 7},  {14, 7},
        {15, 7},  {16, 7},  {17, 7},  {4, 7},   {5, 7},   {6, 7},   {7, 7},   {8, 7},   {9, 7},   {10, 7},
        {11, 7},  {12, 7},  {13, 7},  {14, 7},  {15, 7},  {16, 7},  {17, 7},  {18, 7}
    };
    return position[el-1];
}

// Fourth database function for radius
int database(bool isRadius, int el) {
    int radius[num] = {
        53, 31, 167, 112, 87, 67, 56, 48, 42, 38,
        231, 173, 143, 117, 110, 103, 97, 88, 275, 221,
        184, 176, 171, 166, 161, 156, 152, 149, 145, 139,
        135, 130, 125, 120, 115, 110, 303, 243, 212, 192,
        179, 171, 166, 163, 159, 156, 151, 146, 142, 137,
        134, 130, 125, 122, 348, 268, 238, 247, 247, 247,
        247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
        201, 180, 194, 217, 202, 207, 197, 206, 194, 184,
        184, 176, 170, 168, 348, 283, 245, 206, 200, 200,
        200, 200, 200, 200, 200, 200, 200, 200, 200, 190,
        170, 170, 170, 170, 170, 170, 170, 170, 170, 170,
        170, 170, 170, 170, 170, 170
    };
    return radius[el-1];
}

void access(int el) {
    cout << "\nElement Information for Atomic Number " << el << ":" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Name: " << database(el, "name") << endl;
    cout << "Symbol: " << database(el, "symbol") << endl;
    cout << "Atomic Mass: " << database(el) << " u" << endl;
    
    pair<int,int> pos;
    pos = database(pos, el);
    cout << "Position: Group " << pos.first << ", Period " << pos.second << endl;
    
    cout << "Atomic Radius: " << database(true, el) << " pm" << endl;
}

int main(){

        int el;
        cout << "Enter atomic number (1-118): ";
        cin >> el;
        
        if (el < 1 || el > num) {
            cout << "Invalid atomic number! Please enter between 1 and " << num << endl;
        return 0;
        }
        access(el);
        return 0;
   
}