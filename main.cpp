#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
        int soma = 0;

    //declarações
    typedef char logic;
    const logic True = 1, False = 0;
    typedef char cadeia[30];
    typedef struct numero numero;
    typedef struct tabela tabela;

    //abertura dos arquivos
    FILE *Fin, *Fout;
    Fin = fopen("input.txt","r");
    Fout = fopen("output.txt","w");


    //declarar structs
    struct numero
    {
    cadeia valnabase;
    int base, valdecimal;
    logic valido;
    };
    numero num;

    struct tabela
    {
    numero VetNum[51];
    int ntab;
    };
    tabela TabNum;


    //varias necessarias e ler TabNum.ntab
    int i;
    int j;
    int k;
    int m;
    fscanf(Fin, "%d",&TabNum.ntab);
    //Cabeçalho
  	fprintf(Fout,"C O N V E R S O E S   D E   B A S E S   P A R A   A   B A S E   10\n");
  	fprintf(Fout,"Foram realizadas %d conversoes\n", TabNum.ntab);

    //verificar validez das cadeias
    for(i=0;i<TabNum.ntab;i++)
    {
        fscanf(Fin, "%s %d",num.valnabase, &num.base);
        num.valido=True;
        k = strlen(num.valnabase);
        for(j=0;j<k;j++)
        {
                switch(num.base)
                {
                    case 2:
                        if(  num.valnabase[j]!='0'&&num.valnabase[j]!='1')
                        {
                            num.valido = False;
                        }break;
                    case 3:
                        if(  num.valnabase[j]!='0'&&num.valnabase[j]!='1'&&num.valnabase[j]!='2')
                        {
                            num.valido = False;
                        }break;
                    case 4:
                        if(  num.valnabase[j]!='0'&&num.valnabase[j]!='1'&&num.valnabase[j]!='2'&&num.valnabase[j]!='3')
                        {
                            num.valido = False;
                        }break;
                    case 5:
                        if(  num.valnabase[j]!='0'&&num.valnabase[j]!='1'&&num.valnabase[j]!='2'&&num.valnabase[j]!='3'&&num.valnabase[j]!='4')
                        {
                            num.valido = False;
                        }break;
                    case 6:
                        if(  num.valnabase[j]!='0'&&num.valnabase[j]!='1'&&num.valnabase[j]!='2'&&num.valnabase[j]!='3'&&num.valnabase[j]!='4'
                           &&num.valnabase[j]!='5')
                        {
                            num.valido = False;
                        }break;
                    case 7:
                        if(  num.valnabase[j]!='0'&&num.valnabase[j]!='1'&&num.valnabase[j]!='2'&&num.valnabase[j]!='3'&&num.valnabase[j]!='4'
                           &&num.valnabase[j]!='5'&&num.valnabase[j]!='6')
                        {
                            num.valido = False;
                        }break;
                    case 8:
                        if(  num.valnabase[j]!='0'&&num.valnabase[j]!='1'&&num.valnabase[j]!='2'&&num.valnabase[j]!='3'&&num.valnabase[j]!='4'
                           &&num.valnabase[j]!='5'&&num.valnabase[j]!='6'&&num.valnabase[j]!='7')
                        {
                            num.valido = False;
                        }break;
                    case 9:
                         if(  num.valnabase[j]!='0'&&num.valnabase[j]!='1'&&num.valnabase[j]!='2'&&num.valnabase[j]!='3'&&num.valnabase[j]!='4'
                           &&num.valnabase[j]!='5'&&num.valnabase[j]!='6'&&num.valnabase[j]!='7'&&num.valnabase[j]!='8')
                        {
                            num.valido = False;
                        }break;
                    case 10:
                        if(  num.valnabase[j]!='0'&&num.valnabase[j]!='1'&&num.valnabase[j]!='2'&&num.valnabase[j]!='3'&&num.valnabase[j]!='4'
                           &&num.valnabase[j]!='5'&&num.valnabase[j]!='6'&&num.valnabase[j]!='7'&&num.valnabase[j]!='8'&&num.valnabase[j]!='9')
                        {
                            num.valido = False;
                        }break;
                    case 11:
                        if(  num.valnabase[j]!='0'&&num.valnabase[j]!='1'&&num.valnabase[j]!='2'&&num.valnabase[j]!='3'&&num.valnabase[j]!='4'
                           &&num.valnabase[j]!='5'&&num.valnabase[j]!='6'&&num.valnabase[j]!='7'&&num.valnabase[j]!='8'&&num.valnabase[j]!='9'
                           &&num.valnabase[j]!='A')
                        {
                            num.valido = False;
                        }break;
                    case 12:
                        if(  num.valnabase[j]!='0'&&num.valnabase[j]!='1'&&num.valnabase[j]!='2'&&num.valnabase[j]!='3'&&num.valnabase[j]!='4'
                           &&num.valnabase[j]!='5'&&num.valnabase[j]!='6'&&num.valnabase[j]!='7'&&num.valnabase[j]!='8'&&num.valnabase[j]!='9'
                           &&num.valnabase[j]!='A'&&num.valnabase[j]!='B')
                        {
                            num.valido = False;
                        }break;
                    case 13:
                        if(  num.valnabase[j]!='0'&&num.valnabase[j]!='1'&&num.valnabase[j]!='2'&&num.valnabase[j]!='3'&&num.valnabase[j]!='4'
                           &&num.valnabase[j]!='5'&&num.valnabase[j]!='6'&&num.valnabase[j]!='7'&&num.valnabase[j]!='8'&&num.valnabase[j]!='9'
                           &&num.valnabase[j]!='A'&&num.valnabase[j]!='B'&&num.valnabase[j]!='C')
                        {
                            num.valido = False;
                        }break;
                    case 14:
                        if(  num.valnabase[j]!='0'&&num.valnabase[j]!='1'&&num.valnabase[j]!='2'&&num.valnabase[j]!='3'&&num.valnabase[j]!='4'
                           &&num.valnabase[j]!='5'&&num.valnabase[j]!='6'&&num.valnabase[j]!='7'&&num.valnabase[j]!='8'&&num.valnabase[j]!='9'
                           &&num.valnabase[j]!='A'&&num.valnabase[j]!='B'&&num.valnabase[j]!='C'&&num.valnabase[j]!='D')
                        {
                            num.valido = False;
                        }break;
                    case 15:
                        if(  num.valnabase[j]!='0'&&num.valnabase[j]!='1'&&num.valnabase[j]!='2'&&num.valnabase[j]!='3'&&num.valnabase[j]!='4'
                           &&num.valnabase[j]!='5'&&num.valnabase[j]!='6'&&num.valnabase[j]!='7'&&num.valnabase[j]!='8'&&num.valnabase[j]!='9'
                           &&num.valnabase[j]!='A'&&num.valnabase[j]!='B'&&num.valnabase[j]!='C'&&num.valnabase[j]!='D'&&num.valnabase[j]!='E')
                        {
                            num.valido = False;
                        }break;
                    case 16:
                        if(  num.valnabase[j]!='0'&&num.valnabase[j]!='1'&&num.valnabase[j]!='2'&&num.valnabase[j]!='3'&&num.valnabase[j]!='4'
                           &&num.valnabase[j]!='5'&&num.valnabase[j]!='6'&&num.valnabase[j]!='7'&&num.valnabase[j]!='8'&&num.valnabase[j]!='9'
                           &&num.valnabase[j]!='A'&&num.valnabase[j]!='B'&&num.valnabase[j]!='C'&&num.valnabase[j]!='D'&&num.valnabase[j]!='E'
                           &&num.valnabase[j]!='F')
                        {
                            num.valido = False;
                        }break;
                    case 17:
                        if(  num.valnabase[j]!='0'&&num.valnabase[j]!='1'&&num.valnabase[j]!='2'&&num.valnabase[j]!='3'&&num.valnabase[j]!='4'
                           &&num.valnabase[j]!='5'&&num.valnabase[j]!='6'&&num.valnabase[j]!='7'&&num.valnabase[j]!='8'&&num.valnabase[j]!='9'
                           &&num.valnabase[j]!='A'&&num.valnabase[j]!='B'&&num.valnabase[j]!='C'&&num.valnabase[j]!='D'&&num.valnabase[j]!='E'
                           &&num.valnabase[j]!='F'&&num.valnabase[j]!='G')
                        {
                            num.valido = False;
                        }break;
                    case 18:
                        if(  num.valnabase[j]!='0'&&num.valnabase[j]!='1'&&num.valnabase[j]!='2'&&num.valnabase[j]!='3'&&num.valnabase[j]!='4'
                           &&num.valnabase[j]!='5'&&num.valnabase[j]!='6'&&num.valnabase[j]!='7'&&num.valnabase[j]!='8'&&num.valnabase[j]!='9'
                           &&num.valnabase[j]!='A'&&num.valnabase[j]!='B'&&num.valnabase[j]!='C'&&num.valnabase[j]!='D'&&num.valnabase[j]!='E'
                           &&num.valnabase[j]!='F'&&num.valnabase[j]!='G'&&num.valnabase[j]!='H')
                        {
                            num.valido = False;
                        }break;
                    case 19:
                        if(  num.valnabase[j]!='0'&&num.valnabase[j]!='1'&&num.valnabase[j]!='2'&&num.valnabase[j]!='3'&&num.valnabase[j]!='4'
                           &&num.valnabase[j]!='5'&&num.valnabase[j]!='6'&&num.valnabase[j]!='7'&&num.valnabase[j]!='8'&&num.valnabase[j]!='9'
                           &&num.valnabase[j]!='A'&&num.valnabase[j]!='B'&&num.valnabase[j]!='C'&&num.valnabase[j]!='D'&&num.valnabase[j]!='E'
                           &&num.valnabase[j]!='F'&&num.valnabase[j]!='G'&&num.valnabase[j]!='H'&&num.valnabase[j]!='I')
                        {
                            num.valido = False;
                        }break;
                    case 20:
                        if(  num.valnabase[j]!='0'&&num.valnabase[j]!='1'&&num.valnabase[j]!='2'&&num.valnabase[j]!='3'&&num.valnabase[j]!='4'
                           &&num.valnabase[j]!='5'&&num.valnabase[j]!='6'&&num.valnabase[j]!='7'&&num.valnabase[j]!='8'&&num.valnabase[j]!='9'
                           &&num.valnabase[j]!='A'&&num.valnabase[j]!='B'&&num.valnabase[j]!='C'&&num.valnabase[j]!='D'&&num.valnabase[j]!='E'
                           &&num.valnabase[j]!='F'&&num.valnabase[j]!='G'&&num.valnabase[j]!='H'&&num.valnabase[j]!='I'&&num.valnabase[j]!='J')
                        {
                            num.valido = False;
                        }break;
                }
        }

        //prints
        if(num.valido == True)
        {
            num.valdecimal=0;
            for(m=0;m<k;m++)
            {
                if(num.valnabase[m]<65){
                num.valdecimal = ( num.base ) * (num.valdecimal) + (num.valnabase[m] - '0');
                }
                else {

                num.valdecimal = ( num.base ) * (num.valdecimal) + (num.valnabase[m] - 55);
                }
            }
            fprintf(Fout,"(%s)%d  =  (%d)10\n",num.valnabase ,num.base,num.valdecimal );
        }
        if(num.valido == False)
        {

            fprintf(Fout,"(%s)%d  Dados incompativeis\n",num.valnabase ,num.base );
        }

        TabNum.VetNum[i]=num;

        if(TabNum.VetNum[i].valido == True)
        {
            soma = soma + TabNum.VetNum[i].valdecimal ;
        }

    }
    fprintf(Fout,"Somatoria dos numeros validos = (%d)10", soma);
    fclose(Fin);
    fclose(Fout);
    system("pause");
    return 0;
 }


