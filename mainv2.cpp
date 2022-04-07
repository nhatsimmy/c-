//chào mừng bạn đến với Bot v2 messenger by nhat!
#include <iostream>
#include <string>
#include <iomanip>
#include <unistd.h>
using namespace std;
int main()
{
  string a;
  cout<<"\n";
  cout<<"Xin chào,Welcome to Bot v2 Messager by Nhat!\n"<<endl;
  sleep(1);
  cout<<"Nếu chương trình không chạy hãy khởi động lại nó"<<endl;
  sleep(1);
  cout<<"Mời bạn đưa ra lựa chọn\nNếu cần trợ giúp hãy nhập help và nhấn enter\n"<<endl;
  sleep(1);
  cout<<"#start"<<endl;
  sleep(1);
  cout<<"#end"<<endl;
  sleep(1);
  cout<<"#me"<<endl;
  sleep(1);
  cout<<"#help"<<endl;
  sleep(1);
  cout<<">>";
  cin>>a;
  sleep(1);
  if (a=="start")
  {
  string name;
  short age;
  string from;
  short fb;
  cout<<"Now,start message...!"<<endl;
  cout<<"Loading...0%"<<endl;
  sleep(1);
  cout<<"Loading...20%"<<endl;
  sleep(1);
  cout<<"Loading...40%"<<endl;
  sleep(1);
  cout<<"Loading...60%"<<endl;
  sleep(1);
  cout<<"Loading...80%"<<endl;
  sleep(1);
  cout<<"Loading...100%"<<endl;
  sleep(1);
  cout<<"Loading successful..."<<endl;
  sleep(1);
  cout<<"\n";
  cout<<setfill('+');
  cout<<setw(54)<<left<<'+';
  cout<<setw(0)<<right<<'+'<<endl;
  sleep(1);
  cout<<setfill(' ');
  sleep(1);
  cout<<setw(54)<<left<<'+';
  cout<<setw(0)<<right<<'+'<<endl;
  sleep(1);
  cout<<setw(54)<<left<<'+';
  cout<<setw(0)<<right<<'+'<<endl;
  sleep(1);
  cout<<setw(54)<<left<<'+';
  cout<<setw(0)<<right<<'+'<<endl;
  sleep(1);
  cout<<setfill('-');
  cout<<setw(15)<<left<<'+';
  cout<<setw(23)<<left<<"Bot v2 Messenger by Nhat";
  cout<<setw(16)<<right<<'+'<<endl;
  cout<<setfill(' ');
  sleep(1);
  cout<<setw(54)<<left<<'+';
  cout<<setw(0)<<right<<'+'<<endl;
  sleep(1);
  cout<<setw(54)<<left<<'+';
  cout<<setw(0)<<right<<'+'<<endl;
  sleep(1);
  cout<<setw(54)<<left<<'+';
  cout<<setw(0)<<right<<'+'<<endl;
  sleep(1);
  cout<<setfill('+');
  cout<<setw(54)<<left<<'+';
  cout<<setw(0)<<right<<'+'<<endl;
  cout<<setfill(' ');
  sleep(1);
  cout<<"\n";
  cout<<"Bot v2 Start..."<<endl;
  sleep(1);
  cout<<"Start Messenger..."<<endl;
  sleep(1);
  cout<<"\n";
  cout<<"Tên của bạn là gì:";
  cin.ignore();
  getline(cin,name);
  cout<<"\n";
  cout<<"Tên bạn là "<<name<<endl;
  cout<<"Còn Tôi tên là Hoàng Minh Nhật!"<<endl;
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
  string sex;
  cout<<"Bạn là Nam hay Nữ:";
  cin>>sex;
  if (sex=="nam")
    {
    cout<<"\n";
    cout<<"Bạn là Nam sao"<<endl;
    cout<<"Tôi cũng là Nam...chúng ta..có thể chơi sẽ gầy hhhahaha";
    }
  if (sex=="nữ")
    {
    cout<<"\n";
    cout<<"Bạn là Nữ sao"<<endl;
    cout<<"Còn Tôi là Nam...vậy chúng ta có thể...tò tý te hâhahahaah";
    }
  if (sex=="Nam")
    {
    cout<<"\n";
    cout<<"Bạn là Nam sao"<<endl;
    cout<<"Tôi cũng là Nam...chúng ta..có thể chơi sẽ gầy hhhahaha";
    }
  if (sex=="Nữ")
    {
    cout<<"\n";
    cout<<"Bạn là Nữ sao"<<endl;
    cout<<"Còn Tôi là Nam...vậy chúng ta có thể...tò tý te hâhahahaah";
    }
  cout<<"\n";
  cout<<"\n";
  int high;
  cout<<"Bạn Cao bao nhiêu cm:";
  cin>>high;
  if (high==161)
    {
      if (age==16)
        cout<<"Bạn bằng tuổi mình và cùng chiều cao luôn tuyệt thật";
      if (age>16)
        cout<<"Bạn lớn tuổi hơn mình nhưng cao bằng mình luôn hahaha";
      if (age<16)
        cout<<"Bạn nhỏ tuổi hơn mình nhưng cao bằng mình luôn huhu";
    } 
  if (high>161)
   {
     if (age==16)
       cout<<"Bạn bằng tuổi mình nhưng cao hơn mình....đ.....c.....m";
     if (age>16)
       cout<<"Bạn lớn tuổi hơn mình và cao hơn mình luôn";
     if (age<16)
       cout<<"Bạn nhỏ tuổi hơn mình mà cao hơn luôn huhu";
   }
  if (high<161)
   {
     if (age==16)
       cout<<"Bạn bằng tuổi hơn mình và thấp hơn mình luôn haha";
     if (age>16)
       cout<<"Bạn lớn tuổi hơn mình nhưng thấp hơn mình kkk";
     if (age<16)
       cout<<"Bạn nhỏ tuổi hơn mình và thấp hơn hahahha";
   }
  cout<<"\n";
  cout<<"\n";
  cout<<"Bạn sống ở đâu:";
  cin.ignore();
  getline(cin,from);
  cout<<"Bạn sống ở "<<from<<" sao"<<endl;
  if (from=="Bắc kạn")
    cout<<"Mình cũng sống ở Bắc Kạn luôn hay quá";
  if (from=="bắc kạn")
    cout<<"Mình cũng sống ở Bắc Kạn luôn hay quá";
  if (from=="Bắc kạn")
    cout<<"Mình cũng sống ở Bắc Kạn luôn hay quá";
  if (from=="bắc Kạn")
    cout<<"Mình cũng sống ở Bắc Kạn luôn hay quá";
  else
    cout<<"Còn mình sống ở Bắc Kạn";
  cout<<"\n";
  cout<<"\n";
  string lq;
  cout<<"Bạn có chơi Liên Quân không"<<endl;
  cout<<"có"<<endl;
  cout<<"không"<<endl;
  cin>>lq;
  if (lq=="có")
    {
      cout<<"Ồ,Bạn cũng chơi liên quân sao"<<endl;
      cout<<"Nếu bạn không chê mình gà Chúng ta có thể chơi cùng nhau"<<endl;
      cout<<"Nick Name:sʊɴɪʟ♔ғʟᴏ";
    }
  if (lq=="không")
      cout<<"Tiếc thật bạn không chơi sao,nó khiến mình hơi buồn đấy";
  if (lq=="Có")
    {
      cout<<"Ồ,Bạn cũng chơi liên quân sao"<<endl;
      cout<<"Nếu bạn không chê mình gà Chúng ta có thể chơi cùng nhau"<<endl;
      cout<<"Nick Name:sʊɴɪʟ♔ғʟᴏ";
    }
  if (lq=="Không")
      cout<<"Tiếc thật bạn không chơi sao,nó khiến mình hơi buồn đấy";
  cout<<"\n";
  cout<<"\n";
  string anime;
  cout<<"Bạn có thích xem Anime không"<<endl;
  cout<<"có"<<endl;
  cout<<"không"<<endl;
  cin>>anime;
  if (anime=="có")
    cout<<"vậy là chúng ta có cùng sở thích đấy";
  if (anime=="không")
    cout<<"Vậy là chúng ta không chung sở thích rồi";
  cout<<"\n";
  cout<<"\n";
  string bye;
  cout<<"Bạn Có thích cuộc trò chuyện này không:"<<endl;
  cout<<"có"<<endl;
  cout<<"không"<<endl;
  cin>>bye;
  if (bye=="có")
    cout<<"Cảm ơn bạn,hẹn gặp lại bạn ở bản Bot v3!";
  if (bye=="không")
    cout<<"Dù sao cũng cảm ơn bạn,tôi sẽ hoàn thiện hơn ở bản Bot v3";
  if (bye=="Vó")
    cout<<"Cảm ơn bạn,hẹn gặp lại bạn ở bản Bot v3!";
  if (bye=="Không")
    cout<<"Dù sao cũng cảm ơn bạn,tôi sẽ hoàn thiện hơn ở bản Bot v3";
  cout<<"\n";
  cout<<"\n";
  }
  if (a=="end")
    {
    cout<<"\n";
    cout<<"Thank you For play!"<<endl;
    cout<<"hẹn gặp lại bạn lần sau..."<<endl;
    }
  if (a=="help")
    {
    cout<<"\n";
    cout<<"Nhập 'start' để bắt đầu"<<endl;
    cout<<"Nhập 'end' để kết thúc"<<endl;
    cout<<"Nhập 'me' để xem thông tin của tôi"<<endl;
    cout<<"Nhập 'help' để xem hướng dẫn"<<endl;
    }
   if (a=="me")
   {
     cout<<"\n";
     sleep(1);
     cout<<setfill('-');
     cout<<setw(54)<<left<<'+';
     cout<<setw(0)<<right<<'+'<<endl;
     sleep(1);
     cout<<setfill(' ');
     cout<<setw(54)<<left<<'+';
     cout<<setw(0)<<right<<'+'<<endl;
     cout<<setw(0)<<left<<('+');
     cout<<setw(40)<<left<<("Phone:0335549022");
     cout<<setw(14)<<right<<('+')<<endl;
     sleep(1);
     cout<<setw(54)<<left<<'+';
     cout<<setw(0)<<right<<'+'<<endl;
     cout<<setw(0)<<left<<('+');
     cout<<setw(40)<<left<<("Email:Nhatt123ccc@gmail.com ");
     cout<<setw(14)<<right<<('+')<<endl;
     sleep(1);
     cout<<setw(54)<<left<<'+';
     cout<<setw(0)<<right<<'+'<<endl;
     cout<<setw(0)<<left<<('+');
     cout<<setw(20)<<left<<("Website:https://hoangminhnhat.000webhostapp.com/");
     cout<<setw(6)<<right<<('+')<<endl;
     sleep(1);
     cout<<setw(54)<<left<<'+';
     cout<<setw(0)<<right<<'+'<<endl;
     cout<<setw(0)<<left<<('+');
     cout<<setw(20)<<left<<("Facebook:https://www.facebook.com/nhatsimmy");
     cout<<setw(11)<<right<<('+')<<endl;
     sleep(1);
     cout<<setw(54)<<left<<'+';
     cout<<setw(0)<<right<<'+'<<endl;
     cout<<setfill('-');
     cout<<setw(54)<<left<<'+';
     cout<<setw(0)<<right<<'+'<<endl;
     cout<<setfill(' ');
     }
  return 0;
}
