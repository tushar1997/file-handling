#include <fstream.h>
#include <iostream.h>

void main()
  { clrscr();
    char a[100];
   
   ofstream outfile;
   outfile.open("xyz.dat");
   
   cout << "Writing to the file" << endl;
   cout << "Enter your name: "; 
   gets(a);
   
   outfile << a << endl;
   cout << "Enter your age: "; 
   cin >> a;
   outfile << a << endl;
   outfile.close();
   
   ifstream infile; 
   infile.open("xyz.dat"); 
   
   cout << "Reading from the file" << endl; 
   infile >> a; 
   cout << a << endl;
   
   infile >> a; 
   cout << a << endl; 
   infile.close();
   
   getch();
}
