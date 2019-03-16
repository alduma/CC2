#include <iostream>

using namespace std;
void conversion(int numero){
    int n1,n2,n3,n4,n5,n6,n7;
    n1=numero/1000000;
    n2=(numero/100000)%10;
    n3=(numero/10000)%10;
    n4=(numero/1000)%10;
    n5=(numero/100)%10;
    n6=(numero/10)%10;
    n7=(numero%10);
    if(numero>10000000){
        cout<<"el numero se pasa del limite , en la tarea tu dijiste solo hasta 9999999,no seas payaso xd";
    }
    else{
        if(n1==1){
            cout<<" un millon ";
        }
        else if(n1==2){
            cout<<" dos millones ";
        }

        else if(n1==3){
            cout<<" tres millones ";
        }

        else if(n1==4){
            cout<<" cuatro millones ";
        }

        else if(n1==5){
            cout<<" cinco millones ";
        }

        else if(n1==6){
            cout<<" seis millones ";
        }

        else if(n1==7){
            cout<<" siete millones ";
        }

        else if(n1==8){
            cout<<" ocho millones ";
        }

        else if(n1==9){
            cout<<" nueve millones ";
        }
    }
    ////////////////////////////////
    if(n2==1&&n3==0&&n4==0){
        cout<<"cien mil ";
    }
    if(n2==1){
        cout<<"ciento ";
    }
    if(n2==2&&n3==0&&n4==0){
        cout<<"doscientos mil ";
    }
    else if(n2==2){
        cout<<"doscientos";
    }
    if(n2==3&&n3==0&&n4==0){
        cout<<"trescientos mil ";
    }
    else if(n2==3){
        cout<<"trescientos";
    }
    if(n2==4&&n3==0&&n4==0){
        cout<<"cuatroscientos mil ";
    }
    else if(n2==4){
        cout<<"cuatroscientos";
    }
    if(n2==5&&n3==0&&n4==0){
        cout<<"quinientos mil ";
    }
    else if(n2==5){
        cout<<"quinientos";
    }
    if(n2==6&&n3==0&&n4==0){
        cout<<"seiscientos mil ";
    }
    else if(n2==6){
        cout<<"seiscientos";
    }
    if(n2==7&&n3==0&&n4==0){
        cout<<"setescientos mil ";
    }
    else if(n2==7){
        cout<<"setecientos";
    }
    if(n2==8&&n3==0&&n4==0){
        cout<<"ochocientos mil ";
    }
    else if(n2==8){
        cout<<"ochocientos";
    }
    if(n2==9&&n3==0&&n4==0){
        cout<<"novecientos mil ";
    }
    else if(n2==9){
        cout<<"novecientos";
    }
    //////////////////////////////
    if(n3==1&&n4==0&&n5==0&&n6==0&&n7==0){
        cout<<"diez mill";
    }
    else if(n3==1){
        cout<<"diez";
    }
    if(n3==2&&n4==0&&n5==0&&n6==0&&n7==0){
        cout<<"veinte mill";
    }
    else if(n3==2){
        cout<<"veinte";
    }
    if(n3==3&&n4==0&&n5==0&&n6==0&&n7==0){
        cout<<"treinta mill";
    }

    else if(n3==3){
        cout<<"treinta";
    }
    if(n3==4&&n4==0&&n5==0&&n6==0&&n7==0){
        cout<<"cuarenta mill";
    }

    else if(n3==4){
        cout<<"cuarenta";
    }
    if(n3==5&&n4==0&&n5==0&&n6==0&&n7==0){
        cout<<"cincuenta mill";
    }

    else if(n3==5){
        cout<<"cincuenta";
    }
    if(n3==6&&n4==0&&n5==0&&n6==0&&n7==0){
        cout<<"sesenta mill";
    }

    else if(n3==6){
        cout<<"sesenta";
    }
    if(n3==7&&n4==0&&n5==0&&n6==0&&n7==0){
        cout<<"setenta mill";
    }

    else if(n3==7){
        cout<<"setenta";
    }
    if(n3==8&&n4==0&&n5==0&&n6==0&&n7==0){
        cout<<"ochenta mill";
    }

    else if(n3==8){
        cout<<"ochenta";
    }
    if(n3==9&&n4==0&&n5==0&&n6==0&&n7==0){
        cout<<"noventa mill";
    }
    else if(n3==9){
        cout<<"noventa";
    }
    ////////////////////
    if(n4==1&&n5==0&&n6==0&n7==0){
        cout<<"mil ";
    }
    else if(n4==1){
        cout<<"mil ";
    }
    else if(n4==2){
        cout<<"  dos mil ";
    }
    else if(n4==3){
        cout<<" tres mil ";
    }
    else if(n4==4){
        cout<<" cuatro mil ";
    }
    else if(n4==5){
        cout<<" cinco mil ";
    }
    else if(n4==6){
        cout<<" seis mil ";
    }
    else if(n4==7){
        cout<<" siete mil ";
    }
    else if(n4==8){
        cout<<" ocho mil ";
    }
    else if(n4==9){
        cout<<" nueve mil ";
    }
    //////////////////////
    if(n5==1&&n6==0&&n7==0){
        cout<<" cien ";
    }
    else if(n5==1){
        cout<<" ciento ";
    }

    else if(n5==2){
        cout<<" doscientos ";
    }

    else if(n5==3){
        cout<<" trescientos ";
    }

    else if(n5==4){
        cout<<" cuatrocientos ";
    }

    else if(n5==5){
        cout<<" quinientos ";
    }

    else if(n5==6){
        cout<<" seiscientos ";
    }

    else if(n5==7){
        cout<<" setecientos ";
    }

    else if(n5==8){
        cout<<" ochocientos ";
    }

    else if(n5==9){
        cout<<" novecientos ";
    }
    /////////////////////////
    if(n6==1&&n7==0){
        cout<<"diez";
    }

    else if(n6==1&&n7==1){
        cout<<"once";
    }

    else if(n6==1&&n7==2){
        cout<<"doce";
    }

    else if(n6==1&&n7==3){
        cout<<"trece";
    }

    else if(n6==1&&n7==4){
        cout<<"catorce";
    }

    else if(n6==1&&n7==5){
        cout<<"quince";
    }

    else if(n6==1){
        cout<<"dieci";
    }
    if(n6==2&&n7==0){
        cout<<"veinte";
    }
    else if(n6==2){
        cout<<"veinti";
    }
    else if(n6==3&&n7==0){
        cout<<"treinta";
    }
    else if(n6==3){
        cout<<"treinta y";
    }

    else if(n6==4&&n7==0){
        cout<<"cuarenta";
    }
    else if(n6==4){
        cout<<"cuarenta y";
    }

    else if(n6==5&&n7==0){
        cout<<"cincuenta";
    }
    else if(n6==5){
        cout<<"cincuenta y";
    }

    else if(n6==6&&n7==0){
        cout<<"sesenta";
    }
    else if(n6==3){
        cout<<"sesenta y";
    }

    else if(n6==7&&n7==0){
        cout<<"setenta";
    }
    else if(n6==7){
        cout<<"setenta y";
    }

    else if(n6==8&&n7==0){
        cout<<"ochenta";
    }
    else if(n6==8){
        cout<<"ochenta y";
    }

    else if(n6==9&&n7==0){
        cout<<"noventa";
    }
    else if(n6==9){
        cout<<"noventa y";
    }
    /////////////////////////
    if(n7 == 1 && n6 > 1){
         cout<<" uno ";
      }else if(n7 == 1 && n6 == 0){
         cout<<" uno ";
      }else if(n7 == 2 && n6 > 1){
         cout<<" dos ";
      }else if(n7 == 2 && n6 == 0){
         cout<<" tres";
      }else if(n7 == 3 && n6 > 1){
         cout<<" tres ";
      }else if(n7 == 3 && n6 == 0){
         cout<<" tres ";
      }else if(n7 == 4 && n6 > 1){
         cout<<" cuatro ";
      }else if(n7 == 4 && n6 == 0){
         cout<<" cuatro ";
      }else if(n7 == 5 && n6 > 1){
         cout<<" cinco ";
      }else if(n7 == 5 && n6 == 0){
         cout<<" cinco ";
      }else if(n7 == 6){
         cout<<" seis ";
      }else if(n7 == 7){
         cout<<" siete ";
      }else if(n7 == 8){
         cout<<" ocho ";
      }else if(n7 == 9){
         cout<<" nueve ";
      }




}
/////////////////////////////////////////////////////////////////////////7
string nombremes(int mes){
    switch(mes){
        case 1: return "enero";
        case 2: return "febrero";
        case 3: return "marzo";
        case 4: return "abril";
        case 5: return "mayo";
        case 6: return "junio";
        case 7: return "julio";
        case 8: return "agosto";
        case 9: return "septiembre";
        case 10: return "octubre";
        case 11: return "noviembre";
        case 12: return "diciembre";
    }
}

bool esbisiesto(int anio){
    if(anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0)){
        return true;
    }
    return false;

}

int dia_Del_mes(int anio,int mes){
    if(mes==1 or mes==3 or mes==5 or mes==6 or mes==8 or mes==10 or mes==12){
        return 31;
    }
    if(mes==2){
        if (esbisiesto(anio)){
            return 29;
        }
        return 28;
    }
    return 30;
}

int formula(int anio,int mes){
    int a=(14-mes)/12;
    int b=anio-a;
    int c=mes+12*a-2;
    int x=1,m;
    m=(x+b+ b/4 - b/100 + b/400 +(31*c)/12)%7;
    return m;
}
void calendario(int anio){
    for(int mes=1;mes<=12;mes++){
        cout<< "mes: "<<nombremes(mes)<<"\n";
        cout<< "dom    lun    mar    mie    jue    vie    sab\n";
        int z=formula(anio,mes);
        for(int i = 0; i < z; i++){
            cout<<"  ";
        }
        int dia_mes=dia_Del_mes(anio,mes);
        for(int day=1;day<=dia_mes;day++){
            cout<<day<<"\t";
            z++;
            if(z%7==0) cout<<"\n";
        }
        cout<<"\n\n";


    }
}
////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////
void numeros_romanos(int num){
    int n1=(num/1000)%10;
    int n2=(num/100)%10;
    int n3=(num/10)%10;
    int n4=(num%10);
    if(num>10000){
        "solo numeros menores a 10000";
    }
    else if(n1==1){
        cout<<"M";
    }
    else if(n1==2){
        cout<<"MM";
    }
    else if(n1==3){
        cout<<"MMM";
    }
    else if(n1==4){
        cout<<"(IV)";
    }

    else if(n1==5){
        cout<<"(V)";
    }

    else if(n1==6){
        cout<<"(VI)";
    }

    else if(n1==7){
        cout<<"(VII)";
    }

    else if(n1==8){
        cout<<"(VIII)";
    }

    else if(n1==9){
        cout<<"(IX)";
    }
    //////////////
    if(n2==1){
        cout<<"C";
    }
    else if(n2==2){
        cout<<"CC";
    }
    else if(n2==3){
        cout<<"CCC";
    }
    else if(n2==4){
        cout<<"CD";
    }
    else if(n2==5){
        cout<<"D";
    }
    else if(n2==6){
        cout<<"DC";
    }
    else if(n2==7){
        cout<<"DCC";
    }
    else if(n2==8){
        cout<<"DCCC";
    }
    else if(n2==9){
        cout<<"CM";
    }
    //////////////////////
    if(n3==1){
        cout<<"X";
    }
    else if(n3==2){
        cout<<"XX";
    }
    else if(n3==3){
        cout<<"XXX";
    }
    else if(n3==4){
        cout<<"XL";
    }
    else if(n3==5){
        cout<<"L";
    }
    else if(n3==6){
        cout<<"LX";
    }
    else if(n3==7){
        cout<<"LXX";
    }
    else if(n3==8){
        cout<<"LXX";
    }
    else if(n3==9){
        cout<<"XC";
    }
    //////////////
    if(n4==1){
        cout<<"I";
    }
    else if(n4==2){
        cout<<"II";
    }
    else if(n4==3){
        cout<<"III";
    }
    else if(n4==4){
        cout<<"IV";
    }
    else if(n4==5){
        cout<<"V";
    }
    else if(n4==6){
        cout<<"VI";
    }
    else if(n4==7){
        cout<<"VII";
    }
    else if(n4==8){
        cout<<"VIII";
    }
    else if(n4==9){
        cout<<"IX";
    }


}
int main()
{
    //numeros_romanos(300);
    //calendario(323);
    //conversion(21);
    return 0;
}
