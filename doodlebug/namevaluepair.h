#include <string>

using namespace std;


class NameValuePair
{
 public:
  // setter & getters
  string getName() {return m_Name;}
  string getValue() {return m_Value;}
  void setName(string data) {m_Name=data;}
  void setValue(string data) {m_Value=data;}

 private:
  string m_Name;
  string m_Value;
};
