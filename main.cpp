
#include <iostream>
#include <cmath>
#include <math.h>
#include <typeinfo>
#include <string>

#include <iostream>


using namespace std;

// Devashish Das
// ALL UNITS ARE STANDARD


#define g 9.8
#define planckh 0.62607015 * pow(10, -34)
#define c 299,792,458

class dasgen{
    private:
    public:
        double hz_photon;
        double energy_photon = 0;

        dasgen(){
            bool user = true;
        }

        double energy_of_photon(){

            cout << "Enter wave frequency: ";

            try{

                if (typeid(energy_photon).name() == "d"){
                    cout << "Validated" << endl;
                    cin >> hz_photon;
                    energy_photon = hz_photon * planckh;
                }

                else{
                    throw(hz_photon);
                }
            }

            catch(string err){
                cout << "Invalid wave frequency" << err << "(must be decimal or integer value)" << endl;
            }

            // cout << "Energy of photon: " << energy_photon << " Joules" << endl;
            return energy_photon;
        }

        double momentum_of_photon(){
            //val checking not required
            return energy_of_photon() * c;
        }



};

int main()
{

    dasgen *p = new dasgen();
    p -> momentum_of_photon();

    cout << pthread_atfork << endl;

}