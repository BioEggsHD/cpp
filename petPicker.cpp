#include<iostream>
#include<random>
using std::string;

enum Rarity {
    COMMON, // 0
    RARE, // 1
    EPIC, // 2
    LEGENDARY, // 3
    MYTHIC // 4
};

struct Pet {
    string name;
    Rarity rarity;
};

std::string rarityToString(Rarity rarity) {
    switch(rarity) {
        case COMMON: return "COMMON";
        case RARE: return "RARE";
        case EPIC: return "EPIC";
        case LEGENDARY: return "LEGENDARY";
        case MYTHIC: return "MYTHIC";
        default: return "UNKNOWN";
    }
}

Rarity pickRarity(int x) {
    if(x <= 50) {
        return COMMON;
    } else if(x <= 75) {
        return RARE;
    } else if(x <= 90) {
        return EPIC;
    } else if(x <= 97) {
        return LEGENDARY;
    } else if(x <= 100) {
        return MYTHIC;
    }
    return RARE;
}

int main() {
    Pet common[] {
        {"Dog", COMMON},
        {"Cat", COMMON},
    };
    Pet rare[] {
        {"Fish", RARE},
        {"Bird", RARE},
    };
    Pet epic[] {
        {"Horse", EPIC},
        {"Lion", EPIC},
    };
    Pet legendary[] {
        {"Crow", LEGENDARY},
        {"Rat", LEGENDARY},
    };
    Pet mythic[] {
        {"Phoenix", MYTHIC},
        {"Dragon", MYTHIC},
    };

    std::random_device rd;
    std::mt19937 gen(rd());
    for(int i = 0; i < 999; ++i) {
        std::uniform_int_distribution<int> distr(1, 100);
        int r = distr(gen);
        Pet picked;
        Rarity rar = pickRarity(r);
        
        if(rar == COMMON) {
            picked = common[r % 2];
        } else if(rar == RARE) {
            picked = rare[r % 2];
        } else if(rar == EPIC) {
            picked = epic[r % 2];
        } else if(rar == LEGENDARY) {
            picked = legendary[r % 2];
        } else if(rar == MYTHIC) {
            picked = mythic[r % 2];
        }
        
        std::cout << picked.name << ", " << rarityToString(picked.rarity) << "\n";
    }

    return 0;
}
