#include "Time.h"
#include <iostream>
using namespace std;


Time::Time(){
    hrs = min = sec = 0;
}

bool Time::setTime(int s){
    int m, h;
    m = 0;
    h = 0;
    if(s<0){
        //cout<<"Error: time cannot be negative"<<endl;
        return false;
    }
    if(s>=60){
        m += s/60;
        sec = s%60;
    }else{
        sec = s;
    }
    if(m>=60){
        h += m/60;
        min = m%60;
    }else{
        min = m;
    }
    if(h>=24){
        //cout<<"Error: time cannot be more than 24 hours"<<endl;
        return false;
    }else{
        hrs = h;
    }
    return true;
}



bool Time::setTime(int h, int m, int s){
    if(h<0 || m<0 || s<0){
        //cout<<"Error: time cannot be negative"<<endl;
        return false;
    }
    if(s>=60 || m>=60 || h>=24){
        return false;
    }
    hrs = h;
    min = m;
    sec = s;
    return true;
}

void Time::showTime(){
    if(hrs>12){
        if(hrs-12<10){
            if(min<10){
                if(sec<10){
                    cout<<"0"<<hrs-12<<":0"<<min<<":0"<<sec<<" PM"<<endl;
                }else{
                    cout<<"0"<<hrs-12<<":0"<<min<<":"<<sec<<" PM"<<endl;
                }
            }else{
                if(sec<10){
                    cout<<"0"<<hrs-12<<":"<<min<<":0"<<sec<<" PM"<<endl;
                }else{
                    cout<<"0"<<hrs-12<<":"<<min<<":"<<sec<<" PM"<<endl;
                }
            }
        }else{
            if(min<10){
                if(sec<10){
                    cout<<hrs-12<<":0"<<min<<":0"<<sec<<" PM"<<endl;
                }else{
                    cout<<hrs-12<<":0"<<min<<":"<<sec<<" PM"<<endl;
                }
            }else{
                if(sec<10){
                    cout<<hrs-12<<":"<<min<<":0"<<sec<<" PM"<<endl;
                }else{
                    cout<<hrs-12<<":"<<min<<":"<<sec<<" PM"<<endl;
                }
            }
        }
    }else{
        if(hrs<10){
            if(min<10){
                if(sec<10){
                    cout<<"0"<<hrs<<":0"<<min<<":0"<<sec<<" AM"<<endl;
                }else{
                    cout<<"0"<<hrs<<":0"<<min<<":"<<sec<<" AM"<<endl;
                }
            }else{
                if(sec<10){
                    cout<<"0"<<hrs<<":"<<min<<":0"<<sec<<" AM"<<endl;
                }else{
                    cout<<"0"<<hrs<<":"<<min<<":"<<sec<<" AM"<<endl;
                }
            }
        }else{
            if(min<10){
                if(sec<10){
                    cout<<hrs<<":0"<<min<<":0"<<sec<<" AM"<<endl;
                }else{
                    cout<<hrs<<":0"<<min<<":"<<sec<<" AM"<<endl;
                }
            }else{
                if(sec<10){
                    cout<<hrs<<":"<<min<<":0"<<sec<<" AM"<<endl;
                }else{
                    cout<<hrs<<":"<<min<<":"<<sec<<" AM"<<endl;
                }
            }
        }
    }
}
