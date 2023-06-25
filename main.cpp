#include <iostream>
#include<string>
using namespace std;

// int main(){   Hello world programming
   
//    cout<<"hello World"<<endl;
//    cout<<"hi everyone"<<endl;
//     return 0;
    
// }

// int main(){
//     // int a,b,c;
//     short sa =9;
//     cout<<sa<<endl;
//     cout<<"marks in math of student is "<<sa<<endl;
//     float score = 91.50;
//     score = 35.43;
//     float const marks = 44;
//     // marks=22.33;     canot change a number who is defined as const;
//     cout<<score<<marks<<endl;
//     return 0;
// }


//function 

// int Addnumber(int a,int b)
//     {
//         cout<<a+b;
//         return a+b;
       
//     };

// class 

class Employee{
    public:
    string name;
    int age;
    Employee(string name,int age,int sp){
        this->name=name;
        this->age=age;
        this->secretpassword=sp;
    }

    void printDetails()
    {
        cout<<"name of our first employee is "<<this->name<<"and age is "<<this->age;
    };

    void getsecretpassword(){
        cout<<this->secretpassword;
    }

    private:
    int secretpassword;

};

class Programmer : public Employee{
    public:
    int errors;
};

int main(){
    // int a,b;
    // cout<<"enter first numbers"<<endl;
    // cin>>a;
    // cout<<"enter Second number"<<endl;
    // cin>>b;
    // cout<<a+b<<endl;
    // cout<<a-b<<endl;
    // cout<<a*b<<endl;
    // cout<< (float)a/b<<endl;    we have declared variable with int so if we want a/b contain decimal so 
    // we need to typecast.


    // ****************      If else   and switch      **************
    // int age;
    // cout<<"enter your age"<<endl;
    // cin>>age;

    // switch (age)
    // {
    // case 12:
    //     cout<<"You are not mature";
    //     break;
    // case 18:
    //     cout<<"You are mature";
    //     break;
    
    // default:
    //     cout<<"you are not of age 12 or 18";
    // }
    // int a,b;
    // cout<<"enter number1";
    // cin>>a;
    // cout << "enter number2";
    // cin>>b;

    
    // Addnumber(a,b);

    // **********        Array ***********
    
    // int marks[6] = {3,4,5,6,7,8};
    // for(int i=0;i < 6; i++)
    // {
    //     cout<<marks[i]<<endl;
    // };
    
    // int score[6];

    //  for(int i = 0 ;i<6;i++)
    //  {
    //     score[i]=i;

    //  };
    //  cout<<score[5]<<endl;

//2d array;
    // int arr2d[2][3] = {
    //     {2,3,4},
    //     {6,7,8}
    // };

    // for(int i = 0; i< 2; i++)
    // {
    //     for(int j =0; j<3;j++)
    //     {
    //         cout<<arr2d[i][j]<<endl;
    //     }
    // }



   // Strings
 
//  string str = "hello";
//  cout<<str.length()<<endl;
//  cout<<str.substr(2,3); substring starting to till digit

  Employee his("shashank",54,344);
//   his.name="harru";
//   his.age=20;
  his.printDetails();
  his.getsecretpassword();
//   cout<<his.secretpassword; canot access private variable
  

    return 0;
}

