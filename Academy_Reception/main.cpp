#include <iostream>
#include <ctime>
#include <stdlib.h>


using namespace std;

string informationBoot="Kurslarimizni Bootcamp turi ham bo'lib u \n chuqurlshgan tarzda olib boriladi";
    string informationOdat="Kurslarimizni Odati turi ham bo'lib u\n haftada 3 kun bo'ladi tarzda olib boriladi";
void courses();
void data();
void royxat();
void frontend();
void mobile();
void backend();
int main();
void foundation();
void coursesTwo();
void math()
{
    cout << "        G_162-guruh projecti          \n"
         "|-----------------------------------|\n"
         "|           MATHS GAME              |\n"
         "|-----------------------------------|\n\n";
}
void prog()
{
    cout << "        G_162-guruh projecti          \n"
         "|-----------------------------------|\n"
         "|         PROGRAMMING GAME          |\n"
         "|-----------------------------------|\n\n";
}


string firstName, lastName, phoneNumber, mainC;
int age, mainCourse;
int ball=0, togriJavop = 0;

string informationFront="Front End – bu turli xil web-saytlar, web-ilovalarning bizga ko’rinib\n "
                        "turgan qismi hisoblanadi. Siz ko’rgan barcha saytlardagi turli xil animatsiyalar,\n"
                        " tugmalar, matnlar, rasmlar va boshqa barcha bizga ko’rinib turgan qismi Front Endga kiradi.\n";
string informationBack="       Backend (inglizcha back-end) - bu xizmatning dasturiy ta'minot va apparat qismidir. \n"
                       " Bu veb-sayt mantig'i amalga oshiriladigan vositalar to'plami. Bu bizning ko'zimizdan yashiringan\n"
                       " narsa, ya'ni kompyuter va brauzerdan tashqarida sodir bo'ladi.  (Back End) Orqa tomon ishlab\n"
                       " chiquvchilari veb-saytlarning foydalanuvchilar bilan bevosita aloqasi bo'lmagan qopqoq ostida qismlarini yaratadilar.\n"
                       "       Backend (back end, back-end) esa Frontendning aksi hisoblanib, qaysidir narsaning ichki,\n"
                       " yoki orqa tomoni degan ma’noni anglatadi. Bu bilan biz qaysidir narsaning hammaga ko’rinmaydigan,\n"
                       " yashirin, ichki yoki orqa tomonini nazarda tutgan bo’lamiz.\n"
                       " Back End Development - orqa tomonni rivojlantirish, dasturning server tomoniga va ma'lumotlar\n"
                       " bazasi va brauzer o'rtasida aloqador narsalarga tegishlidir. Back End Development/Orqa tomon \n"
                       "ishlab chiqishi deganda, avvalo saytning ishlashiga e'tiborinni qaratadigan rivojlanishning server tomoni tushuniladi.\n"
                       "Back-end Development server tomonidagi rivojlanishni anglatadi. Bu veb-saytda biron bir harakatni\n"
                       " amalga oshirishda sodir bo'ladigan sahna ortidagi harakatlar uchun ishlatiladigan atama.\n"
                       " Bu sizning hisobingizga kirishi yoki onlayn-do'kondan soat sotib olishi mumkin.";
string informayionBoot=" Back-end va Front-end kurslarimizni Bootcamp turlari ham bo'lib ular chuqurlshgan tarzda olib boriladi";
string informationFoundation=" Foundation kursimiz boshlang'ich, dasturlashga kirish uchun. Yana bir narsani aytish kerakki \n"
                             "asosiy kurslarga kirish uchun imtihondan o'tishingiz kerak!";
string informationMobile=" Mobile dasturlashda Asosan samrtfonlarga dasturlar yoziladi";

void play()
{
    srand(time(0));


    float q1, q2, ans, correctAns;
    int totalNo;
    char operation;
    totalNo = 5;

    for(int i=0; i<totalNo; i++)
    {
        q1 = rand()%50;
        q2 = rand()%100;

        int tmpOp = rand()%3;
        switch(tmpOp)
        {
        case 0:
            operation = '+';
            break;
        case 1:
            operation = '-';
            break;
        case 2:
            operation = '*';
            break;
        }
        system("cls");
        math();
        cout<<"("<<(i+1)<<"). ";
        cout<<q1<<" "<<operation<<" "<<q2<<" = ";

        cin>> ans;

        switch(operation)
        {
        case '+':
            correctAns = q1 + q2;
            break;
        case '-':
            correctAns = q1 - q2;
            break;
        case '*':
            correctAns = q1 * q2;
            break;
        }

        if( correctAns == ans )
            togriJavop++;

    }
    system("cls");
    cout << "======= ======= ======= ======= " << endl;
    cout << "==== Umumiy toplangan ball ==== " << endl;
    cout << "======= ======= ======= ======= " << endl;
    ball = togriJavop * 6.7;
    cout<<"Umumiy savollar: 15\n" << firstName << " " << lastName << endl;
    cout<<"Siz to'plagan ball: "<<ball<<endl<<endl;
    cout<<"Davom etish uchun biror tugmani bosing..."<<endl;
    system("Pause");
    system("cls");
    if(ball<=50)
    {
        cout<<"           Sizga foundation kursimizni taklif qilamiz"<<endl;
        foundation();
    }
    else if(50<ball && 70>=ball)
    {
        cout<<"           Sizga frontend kursimizni taklif qilamiz"<<endl;
        frontend();
    }

    else if(70<ball && 80>=ball)
    {
        a:
        cout<<"           Sizga mobile va frontend kursimizni taklif qilamiz"<<endl;
        cout<<"1.Frontend"<<endl<<"2.Mobile"<<endl;
        cin>>mainCourse;
        switch(mainCourse){
            c:
        case 1:{
            cout<< system("cls");cout<<"Frontend kursini tanlaganinggizdan xursandmiz!"<<endl; frontend();
            cout<<"Bo'limni tanlang"; cin>>mainCourse;
        }; break;
        case 2:cout<<system("cls");cout<<"Mobile kursini tanlaganinggizdan hursandmiz!"<<endl; mobile(); break;
        case 3: goto a; break;
        default: goto c;
        }

    }
    else
    {
        cout<<"           Sizga barcha kursimizni taklif qilamiz. Bilimingizga qoyil!"<<endl;
        cout<<"1.Frontend\n2.Mobile\n3.Backend"<<endl;
        cin>>mainCourse;
        switch(mainCourse){
        case 1:cout<< system("cls");cout<<"Frontend kursini tanlaganinggizdan xursandmiz!"<<endl; frontend(); break;
        case 2:cout<<system("cls");cout<<"Mobile kursini tanlaganinggizdan hursandmiz!"<<endl; mobile(); break;
        case 3:cout<<system("cls");cout<<"Backend kursini tanlaganinggizdan hursandmiz!"<<endl; backend(); break;
        }

        backend();
    }


}


void programming()
{


    int a;

    string ItQs[10] = {"C++ qanday dasturlash tili?",
                       "C++ dasturlash tili kim tomonidan va qachon kashf etilgan?",
                       "Rekursive funksiya nima?",
                       "Massiv nima?",
                       "Massiv qanday ifodalanadi?",
                       "Satrning biror qismidan nusxa olovchi funksiya?",
                       "Protsedura nima?",
                       "Char tipiga string kiritsa bo'ladimi? ",
                       "array bilan massivni nima farqi bor?",
                       "nested loop nima?"
                      };
    string variant[10][4] =
    {
        {"Interpreter", "Compiler", "mashina kodiga yaqin", "To'grisi  bilmiman"},
        {
            "1972 yili ilk bor Bell Laboratoriyasida Dennis Richchi tomonidan", "1967 yilda Martin Richards tomonidan tuzilgan",
            "1987 yilda Martin Fillam tomonidan tuzilgan", "1980 yilda Bjarne Stroustrup tomonidan tuzilgan"
        },
        {
            "Qaytadan takomillashadigan", "Tez ishlaydigan", "O'zini ozi chaqrib ishlaydigan",
            "Bir vaqtning o'zida  2 ta amal bajaradigan"
        },
        {
            "Turli xil malumotlar jamlanmasi", "Bir turdagi ma’lumotlarning aniq bir miqdordagi majmuasi",
            "malumot turlarini index bilan o'zida saqlay oladi", "malumot jaylashuvi"
        },
        { "Nomi, elementlarining tipi, uzunligi", "Datatype bo'yicha", "index bo'yicha", "c++ da ifodalannmaydi"},
        {"str()", "copy()", "substr()", "subcopy()"},
        {"funksiyaga uhshaydi", "massivlar oilasi", "funksiya, qiymat qaytarmaydi", "int tipdagi funksiyalar"},
        {"Ha lekin birinchi elementini oladi", "ha ishlaydi", "Yo'q ishonmayman", "Man bilmayman"},
        {"Senior bo'lsam aytaman", "Esimda yoq", "Farqi yuq deb o'ylayman", "Nima u"},
        {"Cheksiz takrorlanish", "Ichma ich takrorlanish", "Protsedura kabi", "PPT ni qarab ko'rechii)"}
    };
    string correct[10] =
    {
        "Compiler", "1980 yilda Bjarne Stroustrup tomonidan tuzilgan", "O'zini ozi chaqrib ishlaydigan",
        "Bir turdagi ma'lumotlarning aniq bir miqdordagi majmuasi", "Nomi, elementlarining tipi, uzunligi",
        "substr()", "funksiya, qiymat qaytarmaydi", "Yo'q ishonmayman", "Farqi yuq deb o'ylayman",
        "Ichma ich takrorlanish"
    };
start:
    system("cls");

    cout << "Bizda Dasturlashga oid misollar\n"
         "va Matematikaga oid misollar\n"
         "0.chiqish\n"
         "1.Boshlash\n"
         "2.Tesdan o'tishni hohlamasangiz sizga \nFoundation kursida o'qishni taklif qilamiz! \n"
         "Tanlov: ";
    cin >> a;
    switch(a)
    {
    case 0:
        courses();
    case 1:
    {
        system("cls");
        int userOpt[10] = {0};
        int UmumiyQs = 10;
        int opt;
        /// Savol  javop qismi

        for (int i = 0; i < UmumiyQs; i++)
        {
            system("cls");
            prog();
            cout << "Question # " << (i + 1) << endl;
            cout << ItQs[i] << endl;
            cout << "1." << variant[i][0] << endl;
            cout << "2." << variant[i][1] << endl;
            cout << "3." << variant[i][2] << endl;
            cout << "4." << variant[i][3] << endl << endl;

            cout << "Birini tanlang (1-4) yoki keyingisiga o'tish uchun 0 ni bosing: ";
            cin >> userOpt[i];
            if(correct[i] == variant[i][userOpt[i] - 1])
                togriJavop++;
            cout << endl << "-----------------------------" << endl << endl;


        }
        play();

    }
    case 2:
        system("cls");
        foundation();
        break;
    default:
        goto start;

    }
}


void courses()
{
    system("cls");
    if (age>=14)
    {
b:
        cout<<"                   Kurslarimizni tanlang:"<<endl;
        cout<<"1. Foundation\n";
        cout<<"Asosiy kurslar\n";
        cout<<"2. Frontend\n";
        cout<<"3. Backend\n";
        cout<<"4. Mobile\n";
        cout<<"5. Ma'lumot\n";
        cout<<"Kursni tanlang: ";
        cin>>mainCourse;

        switch (mainCourse)
        {

        case 1:
        {
            cout<<"            Foundation\n";
            foundation();
        }
        break;
        case 2:
        case 3:
        case 4:
        {
            if(ball==0)
            {
                cout<<" Siz Bining testimizdan o'tishingiz kerak!"<<endl;
                programming();
                break;
            }
            switch (mainCourse)
            {
            case 1:
                royxat();
                break;
            case 0:
                goto b;
            }
            break;
        }
        case 5:
            cout<<"                         Ma'lumot"<<endl;
            data();
        }

    }
    else
    {
        cout<<" Siz 14 yoshdan kichiksiz pdp kits kursida o'qiganinggiz yaxshi"<<endl;
    }
}

void data()
{
    string informationFront="Front End – bu turli xil web-saytlar, web-ilovalarning bizga ko’rinib\n "
                            "turgan qismi hisoblanadi. Siz ko’rgan barcha saytlardagi turli xil animatsiyalar,\n"
                            " tugmalar, matnlar, rasmlar va boshqa barcha bizga ko’rinib turgan qismi Front Endga kiradi.\n";
    string informationBack="       Backend (inglizcha back-end) - bu xizmatning dasturiy ta'minot va apparat qismidir. \n"
                           "Bu veb-sayt mantig'i amalga oshiriladigan vositalar to'plami. Bu bizning ko'zimizdan yashiringan\n"
                           " narsa, ya'ni kompyuter va brauzerdan tashqarida sodir bo'ladi.  (Back End) Orqa tomon ishlab\n"
                           " chiquvchilari veb-saytlarning foydalanuvchilar bilan bevosita aloqasi bo'lmagan qopqoq ostida qismlarini yaratadilar.\n"
                           "       Backend (back end, back-end) esa Frontendning aksi hisoblanib, qaysidir narsaning ichki,\n"
                           " yoki orqa tomoni degan ma’noni anglatadi. Bu bilan biz qaysidir narsaning hammaga ko’rinmaydigan,\n"
                           " yashirin, ichki yoki orqa tomonini nazarda tutgan bo’lamiz.\n"
                           " Back End Development - orqa tomonni rivojlantirish, dasturning server tomoniga va ma'lumotlar\n"
                           " bazasi va brauzer o'rtasida aloqador narsalarga tegishlidir. Back End Development/Orqa tomon \n"
                           "ishlab chiqishi deganda, avvalo saytning ishlashiga e'tiborinni qaratadigan rivojlanishning server tomoni tushuniladi.\n"
                           "Back-end Development server tomonidagi rivojlanishni anglatadi. Bu veb-saytda biron bir harakatni\n"
                           " amalga oshirishda sodir bo'ladigan sahna ortidagi harakatlar uchun ishlatiladigan atama.\n"
                           " Bu sizning hisobingizga kirishi yoki onlayn-do'kondan soat sotib olishi mumkin.";

    string informationFoundation=" Foundation kursimiz boshlang'ich, dasturlashga kirish uchun. Yana bir narsani aytish kerakki \n"
                                 "asosiy kurslarga kirish uchun imtihondan o'tishingiz kerak!";
    string informationMobile=" Mobile dasturlashda Asosan samrtfonlarga dasturlar yoziladi";
    cout<<" Foundation"<<endl<<informationFoundation<<endl;
    cout<<" Front-end "<<endl<<informationFront<<endl;
    cout<<" Back-end"<<endl<<informationBack<<endl;
    cout<<" Mobile "<<endl<<informationMobile<<endl;
    cout<<"orqaga(0=>): ";
    cin>>mainCourse;
    if(mainCourse>=0)
    {
        courses();
    }
}

void royxat()
{
    cout <<"Telefon raqamingizni kiriting: ";
    cin>>phoneNumber;
    if (phoneNumber.length()>13&& phoneNumber.erase(3, 8).length()!=9)
    {
        cout<<"Raqamingiz xato qayta urining : "<<endl;
        royxat();


    }
    else if(phoneNumber[0]!='+' && phoneNumber[1]!='9' && phoneNumber[2]!='9'&& phoneNumber[3]!='8')
    {
        string num=phoneNumber;
        phoneNumber="+(998) "+num;
    }
    else
    {
        phoneNumber.erase(0, 4);
        phoneNumber="+(998) "+phoneNumber;
    }
    cout<<phoneNumber<<endl;
    cout<<"Siz ro'yxatdan o'tdingiz birozdan so'ng operatorlarimiz siz bilan bog'lanadi!"<<endl;
}

void odatiy()
{

    switch (mainCourse)
    {
    case 1:
        cout<<informationFront<<endl;
        break;
    case 2:
        royxat();
        break;
    }
}
void Bootcamp()
{
    switch (mainCourse)
    {
    case 1:
        cout<<informationFront<<endl<<informayionBoot<<endl;
        break;
    case 2:
        royxat();
        break;
    }
}

void passThrough()
{
    cout<<"1.Odatiy"<<endl;
    cout<<"2.Bootcamp"<<endl;
    cout<<"3.Orqaga"<<endl;
    switch(mainCourse)
    {
    case 1:
        odatiy();
        break;
    case 2:
        Bootcamp();
        break;
    case 3:
        main();
    }

}

void foundation()
{
a:
    system("cls");
    cout<<"Sizga foundation kursimizni taklif etamiz"<<endl;

    cout<<"1. Ma'lumot"<<endl;
    cout<<"2. Kursga yozilish"<<endl;
    cout <<"0. Orqaga qaytish\n"
         "Bo'imlardan birini tanlang: ";

    cin>>mainCourse;

    switch (mainCourse)
    {

    case 0:
        system("cls");
        courses();
        break;
    case 1:
    {
        c: system("cls");
        cout<<"                    Ma'lumot\n"<<informationFoundation<<endl<<endl;
        cout<<"0.Orqaga";
        cin>>mainCourse;

        switch(mainCourse)
        {
        case 0:
            foundation();
            break;
        default :
            goto c;
        }
    }
    break;
    case 2:
        royxat();
        break;
    default:
        goto a;
    }
}

void frontend()
{
                  cout<<"1. Ma'lumot"<<endl;
    cout<<"2. Kursga yozilish"<<endl;
    cout<<"Bo'limlardan birini tanlang: ";
      cin>>mainCourse;
switch(mainCourse){
case 1:
    case 2:
        {
a:
    cin>>mainCourse;

    switch (mainCourse)
    {
    case 0:
        system("cls");
        courses();
        break;
    case 1:
        cout<<"                    Ma'lumot\n"<<informationFoundation<<endl;
        break;
    case 2:
        royxat();
        break;
    default:
        goto a;
    }

        }
        case 3:{ cout<<informationOdat<<endl;
        cout<<"--------------------------------------------------"<<endl;
        cout<<informationBoot<<endl;}

}
}
void backend()
{

    cout<<"1. Ma'lumot"<<endl;
    cout<<"2. Kursga yozilish"<<endl;
    cout<<"Bo'imlardan birini tanlang: ";
    cin>>mainCourse;
    switch (mainCourse)
    {
    case 1:
        cout<<informationBack<<endl;
        break;
    case 2:
        royxat();
        break;
a:
        cin>>mainCourse;

        switch (mainCourse)
        {
        case 0:
            system("cls");
            courses();
            break;
        case 1:
            cout<<"                    Ma'lumot\n"<<informationFoundation<<endl;
            break;
        case 2:
            royxat();
            break;
        default:
            goto a;
        }
    }
}
void mobile()
{
    cout<<"1. Ma'lumot"<<endl;
    cout<<"2. Kursga yozilish"<<endl;
    cout<<"Bo'imlardan birini tanlang: ";
    cin>>mainCourse;
    switch (mainCourse)
    {
    case 1:
        cout<< informationMobile<<endl;
        break;
    case 2:
        royxat();
        break;
a:
        cin>>mainCourse;

        switch (mainCourse)
        {
        case 0:
            system("cls");
            courses();
            break;
        case 1:
            cout<<"                    Ma'lumot\n"<<informationFoundation<<endl;
            break;
        case 2:
            royxat();
            break;
        default:
            goto a;
        }
    }
}


void coursesTwo()
{
    cout<<" O'zingizni sinab ko'ring"<<endl;
    programming();
}


int main()
{

    int tanlov;
    cout<<" Ismingizni kiriting: ";
    cin>>firstName;
    cout<<" Familiyangizni kiriting: ";
    cin>>lastName;
    cout<<" Yoshingizni kiriting: ";
    cin>>age;

    cout<<" Ma'lumotlaringizni o'zgartirasizmi? "<<endl;
    cout<<"1.Ha"<<endl<<"2.Yo'q"<<endl;
    cout<<"Javob: ";
    cin>>tanlov;
    system("cls");
    if(tanlov==1)
    {
        main();
    }
    courses();
    return 0;
}

