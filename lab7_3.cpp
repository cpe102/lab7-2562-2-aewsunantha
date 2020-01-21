//status = "ONE-NIGHT-STAND";
#include<iostream>
using namespace std;
int main(){
    int age;
    double tall,asset;

    cout<<"Enter your age: ";
    cin>>age;
    if(age<=20){
        cout<<"Enter your tall(cm): ";
        cin>>tall;
        if(tall<160){
            cout<<"status = UNFRIEND" ;
        }else{
            if(tall<175){
              cout<<"status = FRIEND" ;
        }else{
             cout<<"Enter your asset: ";
             cin>>asset;
               if(asset>69e6){
                  cout<<"status = MARRIED " ;  
               }else{
                  cout<<"status = ONE-NIGHT-STAND" ;
               }
               
           
        }
        }
          
    }else{
        if(age<30){
            cout<<"Enter your asset: ";
            cin>>asset;
            if(asset>10e6){
              cout<<"status = BEST FRIEND" ;   
            }else{
                cout<<"status = UNFRIEND" ;
            }
            
         }else{
          cout<<"status = UNFRIEND" ;
        }
    
    
}
    return 0;
}