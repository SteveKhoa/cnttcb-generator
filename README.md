#  APP TRỘN CÂU HỎI CNTT CƠ BẢN 2022

Người dùng
-------------------
1. Tải toàn bộ folder này về (bấm vào nút 'Code' màu xanh bên trên, chọn Download Zip).

2. Nếu bạn dùng Windows:
      - Chạy file windows.exe
      
   Nếu bạn dùng Linux hay MacOS:
      - Chạy file limac

Một số chức năng:
--------------------
1. Các câu được chọn ra là ngẫu nhiên
2. Trả về đáp án ngay khi làm xong một câu.
3. Các câu được chọn không bị trùng nhau

Xử lí lỗi:
--------------------
1. Nếu compile bị lỗi `redefinition`:
      - Vào `manifest.h`
      - Xoá 
      ```
            #ifdef _WIN32
            std::string os_open = "";
            std::string quest_file_dir = "quest_win.txt";
            #endif
            
            hoặc
            
            #ifdef _WIN64
            std::string os_open = "";
            std::string quest_file_dir = "quest_win.txt";
            #endif
      ```

Fixes:
--------------------


*This repository was created for internal use. If you are a guest, please ignore this repository.*
