
#include <string>
using std::string;

#include <iostream>
using std::cout;

string typestr( bool v ) { return "bool"; };
string typestr( int v ) { return "int"; };
string typestr( unsigned v ) { return "unsigned"; };
string typestr( unsigned long v ) { return "unsigned long"; };
string typestr( long v ) { return "long"; };
string typestr( double v ) { return "double"; };
string typestr( float v ) { return "float"; };
string typestr( string v ) { return "string"; };
string typestr( char* v ) { return "char*"; };
string typestr( char** v ) { return "char**"; };

int main ( int argc, char* argv[] ) {
  bool b;
  cout << typestr ( b ) << "\n";

  int i;
  cout << typestr ( i ) << "\n";
  
  unsigned u;
  cout << typestr ( u ) << "\n";
  
  unsigned long ul;
  cout << typestr ( ul ) << "\n";
  
  long l;
  cout << typestr ( l ) << "\n";
  
  double d;
  cout << typestr ( d ) << "\n";
  
  float f;
  cout << typestr ( f ) << "\n";
  
  string s;
  cout << typestr ( s ) << "\n";
  
  char* ca;
  cout << typestr ( ca ) << "\n";
  
  char** caa;
  cout << typestr ( caa ) << "\n";

}
