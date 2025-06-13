#include <iostream>

using namespace std;

float expo(float num, float power){
    float num_ = 1;
    for (int i = 1; i <= power; i++){
        num_ *= num;
    }

    return num_;
}
          /* method */
double setprecision(double number, int num) {
    double multiplier = expo(10, num);
    number *= multiplier;
    int num_ = number;
    return num_ / multiplier;
}


float BMI_(float weight, float height){
    return weight/expo((height/100),2);
}

int main(){
    
    float weight,height;
        cout<<"Enter your height : ";
        cin>>height;

        cout<<"Enter your weight : ";
        cin>>weight;

    float BMI = BMI_(weight,height);

    bool ayush = true;
    do{
    char opt;
        cout<<"Are you a male or a female?? (m/f) : ";
        cin>>opt;

        float new_BMI = setprecision(BMI, 2);

        if(opt == 'm' || opt == 'f'){
            if (BMI <= 18.5){
                cout<<"Your BMI is, "<<BMI<<" and you are underweight."<<endl;
                ayush = false;
            }
                else if (BMI > 18.5 && BMI < 24.9){
                    cout<<"Your BMI is, "<<BMI<<" and you are normal weighted."<<endl;
                    ayush = false;
                }
                    else if (BMI > 25 && BMI < 29.9){
                        cout<<"Your BMI is, "<<BMI<<" and you are overweight."<<endl;
                        ayush = false;
                    }
                        else if (BMI >= 30){
                            cout<<"Your BMI is, "<<BMI<<" and you are Obese."<<endl;
                            ayush = false;                            
                        }
                        
                }
        else{
            cout<<"choose a valid option again!!"<<endl;
            ayush = true;
        }

        
    }while(ayush);
}
