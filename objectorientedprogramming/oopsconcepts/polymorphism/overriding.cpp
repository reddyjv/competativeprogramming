//runtime polymorphism
/*rules:  function name should be same
          function arguments should be same
          it should be inherited                                  */
          #include<iostream>
          using namespace std;
          class animal{
            public:
            void speak(){
                cout<<"speaking"<<endl;
            }
          };
          class dog:public animal{
            public:
            void speak(){
                cout<<"barking"<<endl;
            }
           
         
          };

          int main(){
            animal a;
            a.speak();
            dog b;
            b.speak();
          }
          /*ouput
          speaking
barking*/
