#include <iostream>
using namespace std;
main() {
    int list=0,numbers[5];
   int search=0,dummy=0;
     cout << "nttttim mot so ";
     cout << "nt Created By:hoccanban";
     cout << "nn";
    for (list=0; list < 5; list++) {
        cout << "Nhap vao mot so " << list+1 <<  " :" ;
        cin >> list[numbers];
    }
    cout << "nn";
   cout << "So can tim  : ";
   cin >> search;

 dummy = search;
 for (list=0; list < 5; list++) {
      if (search == list[numbers]) {
        search = 1; // true value if found in the list
     }
}
  if (search == 1){
       cout << "nn";
      cout <<"Day la so " << dummy <<
            "khong co gia tri trong danh sach";
  }
  else {
       cout << "nn";
      cout <<"Day la so " << dummy<<
            " Khong the tim duoc so trong danh sach";
  }
  cout << "nn";
 system("PAUSE");
}