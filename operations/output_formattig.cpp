// output formatting
// std::flush
//  cout -> buffer -> terminal
//  if buffer full it sends terminal
// std::setw(int number)  // set width
// std::right;
// std::setfill
// std::boolalpha => bool to true and false not 1 or 2
// std::showpos => 32 -> +32
// std::noshowpos =>+32 -> 32
// std::dec, std::hex, std::oct (float, double is not applied)
// std::showbase => add 0x or someting
// std::uppercase
// std::fixed => 0.0000 1.0000 1.2345, ...
// std::scientific => 3.14E+00
// std::setprecision(10) => 3.1234512345
// std::showpoint => 12.00 / noshow => 12


void outputFormatting() {
  // line change
  cout << "Hello world" << endl;
  cout << "Hello world two \n";

  // std::flush
  cout << "some message" << endl
       << flush;

  // set width
  cout << "Formatted table : " << endl;
  cout << right;
  cout << setw(10) << "Lastname" << setw(10) << "Firstname" << endl;
  cout << setw(10) << "Joe" << setw(10) << "Gray" << endl;
  cout << setw(10) << "Daniel" << setw(10) << "Woods" << endl;
  cout << setw(10) << "Stanley" << setw(10) << "Parker" << endl;
  cout << setw(10) << "Jordan" << setw(10) << "Ball" << endl;
  cout << setw(10) << "Josh" << setw(10) << "Carr" << endl;
  cout << setw(10) << "Izaiah" << setw(10) << "Robinson" << endl;

  cout << endl;

  cout << "Formatted table left : " << endl;
  cout << left;
  cout << setw(10) << "Lastname" << setw(10) << "Firstname" << endl;
  cout << setw(10) << "Joe" << setw(10) << "Gray" << endl;
  cout << setw(10) << "Daniel" << setw(10) << "Woods" << endl;
  cout << setw(10) << "Stanley" << setw(10) << "Parker" << endl;
  cout << setw(10) << "Jordan" << setw(10) << "Ball" << endl;
  cout << setw(10) << "Josh" << setw(10) << "Carr" << endl;
  cout << setw(10) << "Izaiah" << setw(10) << "Robinson" << endl;

  cout << endl;

  // internal
  cout << "Internal justified" << endl;
  cout << right;
  cout << setw(10) << -123.45 << endl;
  cout << internal;
  cout << setw(10) << -123.45 << endl;

  cout << endl;

  // setFill
  cout << "Formatted table left : " << endl;
  cout << left;
  cout << setfill('-');
  cout << setw(10) << "Lastname" << setw(10) << "Firstname" << endl;
  cout << setw(10) << "Joe" << setw(10) << "Gray" << endl;
  cout << setw(10) << "Daniel" << setw(10) << "Woods" << endl;
  cout << setw(10) << "Stanley" << setw(10) << "Parker" << endl;
  cout << setw(10) << "Jordan" << setw(10) << "Ball" << endl;
  cout << setw(10) << "Josh" << setw(10) << "Carr" << endl;
  cout << setw(10) << "Izaiah" << setw(10) << "Robinson" << endl;

  cout << endl;

  // boolalpha
  bool condition{true};
  bool other_condition{false};

  cout << "condition: " << condition << endl;
  cout << "other condition: " << other_condition << endl;

  cout << endl;
  cout << boolalpha;
  cout << "condition: " << condition << endl;
  cout << "other condition: " << other_condition << endl;

  cout << std::noboolalpha;

  // showpos
  int pos_num{34};
  int neg_num{-45};

  cout << "POS NUM: " << pos_num << endl;
  cout << "NEG NUM: " << neg_num << endl;

  cout << endl;
  cout << showpos;

  cout << "POS NUM: " << pos_num << endl;
  cout << "NEG NUM: " << neg_num << endl;

  cout << endl;
  cout << noshowpos;

  cout << endl;

  // dec, hex oct
  int pos_int{717171};
  int neg_int{-47347};
  double double_var{498.32};

  cout << endl;
  cout << "default base format" << endl;
  cout << "pos_int : " << pos_int << endl;
  cout << "neg_int : " << neg_int << endl;
  cout << "double_var : " << double_var << endl;

  cout << endl;

  cout << "pos_int in different bases : " << endl;
  cout << "pos_int (dec) : " << dec << pos_int << endl;
  cout << "pos_int (hex) : " << hex << pos_int << endl;
  cout << "pos_int (oct) : " << oct << pos_int << endl;

  cout << endl;

  cout << "neg_int in different bases : " << endl;
  cout << "neg_int (dec) : " << dec << neg_int << endl;
  cout << "neg_int (hex) : " << hex << neg_int << endl;
  cout << "neg_int (oct) : " << oct << neg_int << endl;

  cout << endl;

  // no effect in floating point values
  cout << "double_var in different bases : " << endl;
  cout << "double_var (dec) : " << dec << double_var << endl;
  cout << "double_var (hex) : " << hex << double_var << endl;
  cout << "double_var (oct) : " << oct << double_var << endl;

  cout << endl;

  // uppercase and nouppercase
  cout << "pos_int in no uppercase (default) : " << endl;
  cout << "pos_int (dec) : " << dec << pos_int << endl;
  cout << "pos_int (hex) : " << hex << pos_int << endl;
  cout << "pos_int (oct) : " << oct << pos_int << endl;

  cout << endl;

  cout << std::uppercase;
  cout << "pos_int in uppercase : " << endl;
  cout << "pos_int (dec) (Uppercase): " << dec << pos_int << endl;
  cout << "pos_int (hex) (Uppercase): " << hex << pos_int << endl;
  cout << "pos_int (oct) (Uppercase): " << oct << pos_int << endl;
  cout << std::nouppercase;

  cout << endl;

  // Fixed value and scientific value
  double a { 3.1451926535891583934845234523452345234134365 };
  double b { 2006.0 };
  double c { 1.34e-10 };

  cout << "double values (default : use scientific where necessary): " << endl;
  cout << "a : " << a << endl;
  cout << "b : " << b << endl;
  cout << "c : " << c << endl;

  cout << endl;

  cout << "double values (fixed) : " << endl;
  cout << std::fixed;
  cout << "a : " << a << endl;
  cout << "b : " << b << endl;
  cout << "c : " << c << endl;

  cout << endl;

  cout << "double values (scientific) : " << endl;
  cout << std::scientific;
  cout << "a : " << a << endl;
  cout << "b : " << b << endl;
  cout << "c : " << c << endl;

  // reset
  cout.unsetf(std::ios::scientific | std::ios::fixed);

  cout << endl;

  // setprecision()
  a = 3.1415926535897932384626433832795;

  cout << "a (default precision(6)) : " << a << endl;
  cout << setprecision(10);
  cout << "a (precision(10)) : " << a << endl;
  cout << setprecision(20);
  cout << "a (precision(20)) : " << a << endl;

  // If the precision is bigger than supported by the type, you'll get garbage values

  cout << endl;

  // showpoint
}
