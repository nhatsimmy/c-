#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
  short a;
  string name;
  short age;
  string from;
  short fb;
  
  cout<<"Xin chào,Welcome to Bot Messager by Nhat!"<<endl;
  cout<<"Đưa ra lựa chọn và Enter để tiếp tục..."<<endl;
  cout<<"#Bắt đầu[1]"<<endl;
  cout<<"#Kết thúc[0]"<<endl;
  cout<<">>";
  cin>>a;
  if (a==1)
  {
  cout<<"Now,start message...!"<<endl;
  cout<<"Loading...0%"<<endl;
  cout<<"Loading...20%"<<endl;
  cout<<"Loading...40%"<<endl;
  cout<<"Loading...60%"<<endl;
  cout<<"Loading...80%"<<endl;
  cout<<"Loading...99%"<<endl;
  cout<<"Loading successful..."<<endl;
  cout<<"\n";
  cout<<setfill('+');
  cout<<setw(54)<<left<<'+';
  cout<<setw(0)<<right<<'+'<<endl;
  
  cout<<setfill(' ');
  
  cout<<setw(54)<<left<<'+';
  cout<<setw(0)<<right<<'+'<<endl;
  
  cout<<setw(54)<<left<<'+';
  cout<<setw(0)<<right<<'+'<<endl;
  
  cout<<setw(54)<<left<<'+';
  cout<<setw(0)<<right<<'+'<<endl;
  
  cout<<setfill('-');
  cout<<setw(18)<<left<<'+';
  cout<<setw(23)<<left<<"Bot Messenger by Nhat";
  cout<<setw(14)<<right<<'+'<<endl;
  cout<<setfill(' ');
  
  cout<<setw(54)<<left<<'+';
  cout<<setw(0)<<right<<'+'<<endl;
  
  cout<<setw(54)<<left<<'+';
  cout<<setw(0)<<right<<'+'<<endl;
  
  cout<<setw(54)<<left<<'+';
  cout<<setw(0)<<right<<'+'<<endl;
  
  cout<<setfill('+');
  cout<<setw(54)<<left<<'+';
  cout<<setw(0)<<right<<'+'<<endl;
  cout<<setfill(' ');
  
  cout<<"\n";
  cout<<"Start Messenger............."<<endl;
  cout<<"Tên của bạn là gì:";
  cin.ignore();
  getline(cin,name);
  cout<<"\n";
  cout<<"Tên bạn là "<<name<<endl;
  cout<<"Tên tôi là Hoàng Minh Nhật!"<<endl;
  cout<<"Rất vui được gặp bạn...";
  cout<<"\n";
  cout<<"\n";
  cout<<"Bạn bao nhiêu tuối:";
  cin>>age;
  if (age==16)
    cout<<"Thế là bọn mỉnh bằng tuổi đấy Hay quá"<<endl;
  if (age<16)
    cout<<"Bạn nhỏ tuổi hơn mình rồi hahaa"<<endl;
  if (age>16)
    cout<<"Bạn lớn tuổi hơn mình rồi đấy"<<endl;
  cout<<"\n";
  cout<<"\n";
  cout<<"Bạn sống ở đâu:";
  cin.ignore();
  getline(cin,from);
  cout<<"Bạn sống ở "<<from<<" sao"<<endl;
  cout<<"Còn mình sống ở Bắc Kạn;";
  cout<<"\n";
  cout<<"\n";
  cout<<"Bạn có Dùng Facebook không"<<endl;
  cout<<"Có[1]"<<endl;
  cout<<"Không[0]"<<endl;
  cout<<">>";
  cin>>fb;
  if (fb==1)
  {
    cout<<"Tuyệt vời bạn có thể kết bạn fb với mình!"<<endl;
    cout<<"Link fb:https://www.facebook.com/nhatsimmy";
  }
  if (fb==0)
    cout<<"Thật buồn nhỉ Tôi nghĩ chúng ta đã có thể quen nói chuyện";
  }
  else if (a==0)
    cout<<"Thank you For play!";
  
  return 0;
}