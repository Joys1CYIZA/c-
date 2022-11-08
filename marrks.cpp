 #include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
float math,computer,economics,geography,biology,total;
  float marks,sum,avg,percentage;
  string decision;

int main(int argc, char** argv) {
	
	  cout << "Enter math marks: ";
  cin >> math ;
cout<<"enter computer marks :";
cin>>computer ;
cout<<"enter economics marks :";
cin>>economics ;
cout<<"enter geography marks :";
cin>>geography ;
cout<<"enter biology marks :";
cin>>biology;
total=(math+computer+economics+geography+biology);
cout<<"total is:"<<total;
percentage=(total*100)/500;
cout<<"percentage is:"<<percentage;


avg = sum/5;

    cout<<"\ndecision = ";
    if( percentage>=80 ){
    	cout<<"very good";
	}
         
    else if(percentage>=70 ){
    	cout<<"good";
	}
         
    else if(percentage>=60){
    	cout<<"pass";
	}
        
    else if(percentage>=30 ){
    	cout<<"satisfied";
	}
         
    

         
    else{
    	cout<<"fail!";
    
	}
	return 0;}
         
