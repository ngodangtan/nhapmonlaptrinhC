#include<iostream>
using namespace std;

int main()
{
    const string huTieu = "Hu Tieu", chaoLong= "Chao Long", banhCanh = "Banh Canh", bunRieu = "Bun Rieu", phoBo = "Pho Bo";
    string monDuocChon;
    cout << "========== MENU ==========" << endl;
    printf("1. %s\n",huTieu.c_str());
    printf("2. %s\n",chaoLong.c_str());
    printf("3. %s\n",banhCanh.c_str());
    printf("4. %s\n",bunRieu.c_str());
    printf("5. %s\n",phoBo.c_str());
    cout << "==========================" << endl;
    cout << "Moi ban nhap chon mon: ";
    cin >> monDuocChon;
    
    if (monDuocChon == "1" || monDuocChon == "Hu Tieu" || monDuocChon == "hu tieu") {
        cout << "Ban da chon: " << huTieu << endl;
    } else if (monDuocChon == "2" || monDuocChon == "Chao Long" || monDuocChon == "chao long") {
        cout << "Ban da chon: " << chaoLong << endl;
    } else if (monDuocChon == "3" || monDuocChon == "Banh Canh" || monDuocChon == "banh canh") {
        cout << "Ban da chon: " << banhCanh << endl;
    } else if (monDuocChon == "4" || monDuocChon == "Bun Rieu" || monDuocChon == "bun rieu") {
        cout << "Ban da chon: " << bunRieu << endl;
    } else if (monDuocChon == "5" || monDuocChon == "Pho Bo" || monDuocChon == "pho bo") {
        cout << "Ban da chon: " << phoBo << endl;
    } else {
        cout << "Lua chon khong hop le." << endl;
    }
    return 0;
}