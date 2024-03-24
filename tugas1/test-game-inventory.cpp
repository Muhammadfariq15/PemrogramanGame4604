#include <iostream>
#include <string>

int main() {
    std::string barang[] = {"Pedang Kayu", "Pedang Besi", "Herbs", "HP Potion", "Mana Potion"};
    int damage[] = {10, 20};
    int herbs = 1;
    int hpPotion = 5;
    int manaPotion = 5;
    int hp = 50;
    int mana = 50;

    char lanjutkan;
    char bukaInventaris;
    std::cout << "Apakah Anda ingin membuka inventaris? (y/n): ";
    std::cin >> bukaInventaris;

    do {
        if (bukaInventaris == 'y' || bukaInventaris == 'Y') {
            std::cout << "\nIsi Inventori:" << std::endl;
            std::cout << "Herbs: " << herbs << std::endl;
            std::cout << "HP Potion: " << hpPotion << std::endl;
            std::cout << "Mana Potion: " << manaPotion << std::endl;
            std::cout << "Pedang Kayu" << std::endl;
            std::cout << "Pedang Besi" << std::endl;
        } else if (bukaInventaris == 'n' || bukaInventaris == 'N'){
        	std::cout << "Selamat berpetualang" << std::endl;
        	break;
		}

        std::cout << "\nPilih Barang :" << std::endl;
        for(int i = 0; i < 5; ++i) {
            std::cout << i + 1 << ". " << barang[i] << std::endl;
        }

        int pilihan;
        std::cout << "\nPilih barang yang ingin digunakan (1-5): ";
        std::cin >> pilihan;

        if(pilihan < 1 || pilihan > 5) {
            std::cerr << "Pilihan tidak valid!" << std::endl;
            return 1;
        }

        if (pilihan == 3) {
        	if(herbs < 1){
        		std::cout << "Herbs tidak ada di inventori" << std::endl;
			}else {
				std::cout << "Anda menggunakan Herbs dan menambahkan 10 HP." << std::endl;
            	hp += 10;
            	herbs -= 1;
			}
            
        } else if (pilihan == 4) {
        	if(hpPotion < 1){
        		std::cout << "Hp Potion tidak ada di inventori" << std::endl;
			}else {
				std::cout << "Anda menggunakan Herbs dan menambahkan 50 HP." << std::endl;
            	hp += 50;
            	hpPotion -= 1;
			}
    
        } else if (pilihan == 5) {
			if(manaPotion < 1){
				std::cout << "Mana Potion tidak ada di inventori" << std::endl;
			}else{
	            std::cout << "Anda menggunakan Mana Potion dan menambahkan 50 Mana." << std::endl;
	            mana += 50;
	            manaPotion -= 1;
        	}
        } else { 
            std::cout << "Anda memilih " << barang[pilihan - 1] << " dengan damage " << damage[pilihan - 1] << std::endl;
        }

        std::cout << "Status HP: " << hp << std::endl;
        std::cout << "Status Mana: " << mana << std::endl;
        std::cout << "Apakah Anda ingin melanjutkan? (y/n): ";
        std::cin >> lanjutkan;
        
        if (lanjutkan == 'n' || lanjutkan == 'N'){
        	std::cout << "Selamat berpetualang" << std::endl;
        	break;
		}

    } while (lanjutkan == 'y' || lanjutkan == 'Y');

    return 0;
}

